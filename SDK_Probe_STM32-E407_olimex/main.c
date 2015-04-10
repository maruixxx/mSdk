/*
 * main.c
 *
 *  Created on: Mar 6, 2013
 *      Iulian Gheorghiu <morgoth.creator@gmail.com>
 */
#include "main.h"
#include "board_init.h"
#include "api/timer_api.h"
#include "device/mpu60x0_9150.h"
#include "device/ak8975.h"
#include "device/bmp180.h"
#include "device/sht11.h"
#include "device/srf02.h"
#include "device/mhc5883.h"
#include "device/ms5611.h"
#include "device/adxl345.h"

int main(void)
{
	board_init();
	timer(TimerReadSensors);
    timer_interval(&TimerReadSensors, 500);
	timer(TimerBlinkLed);
    timer_interval(&TimerBlinkLed, 1000);
#if _USE_MPU60x0_9150 == 1
	mpu60x0_9150_init(MPU60x0_9150, 0);
#endif
#if _USE_MHC5883 == 1
	mhc5883_init(MHC5883);
#endif
    bool Led1Status = false;
#if _USE_SHT11 == 1
	unsigned char sht11_status_reg = 0;
	bool sht11_read_mode = false;
#endif
	while(1)
	{
		if(timer_tick(&TimerBlinkLed)) {
			if(Led1Status) {
				gpio_out(LED, 1);
				timer_interval(&TimerBlinkLed, 100);
				timer_enable(&TimerBlinkLed);
				Led1Status = false;
			} else {
				gpio_out(LED, 0);
				timer_interval(&TimerBlinkLed, 900);
				timer_enable(&TimerBlinkLed);
				Led1Status = true;
			}
		}
#if _USE_SHT11 == 1
		if(sht11_read_mode) {
			/*
			 * Send start temperature measure
			 * The sht11_write function will send the command if internal flag 'busy' is false and return true.
			 * If flag busy is true will return true.
			 */
			if(sht11_write(SHT11, SHT11_START_MEASURE_TEMPERATURE, &sht11_status_reg)) {
				/*
				 * Pool SGT11 and read data if is ready
				 * If read is complete will return true, else will return false.
				 * When read is complete the busy flag will be set to false, this will allow
				 * sht11_write to send another command if is called.
				 */
				if(sht11_read(SHT11))
					/*
					 * Read complete.
					 * Now you can send another command.
					 */
					sht11_read_mode = false;
			}
		} else {
			/*
			 * Send start humidity measure
			 * The sht11_write function will send the command if internal flag 'busy' is false and return true.
			 * If flag busy is true will return true.
			 */
			if(sht11_write(SHT11, SHT11_START_MEASURE_HUMIDITY, &sht11_status_reg)) {
				/*
				 * Pool SGT11 and read data if is ready
				 * If read is complete will return true, else will return false.
				 * When read is complete the busy flag will be set to false, this will allow
				 * sht11_write to send another command if is called.
				 */
				if(sht11_read(SHT11))
					/*
					 * Read complete.
					 * Now you can send another command.
					 */
					sht11_read_mode = true;
			}
		}
#endif
#if _USE_SRF02 == 1
		/* Send start ranging */
		if(srf02_start(SRF02, SRF02_START_RANGING))
			/*
			 * Pool SRF02 and read data if is ready
			 * If data is not ready, this function will not freeze,
			 * If data ready will return true, if not wil return false.
			 */
			srf02_read(SRF02);
#endif
		if(timer_tick(&TimerReadSensors)) {

#if _USE_MS5611 == 1
			ms5611_display_pressure_result(MS5611, MS5611_CONVERT_OSR_1024);
#endif
#if _USE_MHC5883 == 1
			mhc5883_display_result(MHC5883);
#endif
#if _USE_SHT11 == 1
			sht11_display_data(SHT11);
#endif
#if _USE_SRF02 == 1
			srf02_display_data(SRF02);
#endif

#if _USE_MPU60x0_9150 == 1
			mpu60x0_9150_temperature_display_result(MPU60x0_9150, 0);
			mpu60x0_9150_giroscope_display_result(MPU60x0_9150, 0);
			mpu60x0_9150_accelerometer_display_result(MPU60x0_9150, 0);
#endif
#if _USE_AK8975 == 1
			ak8975_display_result(AK8975);
#endif
#if _USE_BMP180 == 1
			//bmp180_display_result(BMP180, BMP180_CTRL_MEAS_OSS_1);
			float temperature = 0.0;
			float pressure = 0.0;
			float altitude = 0.0;
			bmp180_get_temp(BMP180, &temperature);
			bmp180_get_pressure(BMP180, &pressure, BMP180_CTRL_MEAS_OSS_8);
			bmp180_get_altitude(BMP180, &altitude, BMP180_CTRL_MEAS_OSS_8);
			UARTprintf(DebugCom, "BMP180: T = %2.1f, P = %4.2f, Alt = %4.2f\n\r", temperature, pressure, altitude);
#endif

#if _USE_INT_ADC == 1
			UARTprintf(DebugCom, "ADC1: CH0 = %d, CH1 = %d, TempSensor = %2.2f\n\r\n\r", ADC[0]->ConvResult[0], ADC[0]->ConvResult[1], (float)(((float)1775 - (float)ADC[0]->ConvResult[2]) / 5.337) + (float)25);
#endif
		}
	}
}