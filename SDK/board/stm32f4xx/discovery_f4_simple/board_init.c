/*
 * board_init.c
 *
 * Created: 2/8/2013 12:22:54 AM
 *  Iulian Gheorghiu <morgoth.creator@gmail.com>
 */

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include "stm32f4xx_conf.h"
#include "sys/system_stm32f4xx.h"
#include "board_init.h"
#include "api/core_init_api.h"
#include "api/timer_api.h"
#include "api/gpio_def.h"
#include "api/gpio_api.h"
#include "api/uart_def.h"
#include "api/uart_api.h"
#include "api/twi_def.h"
#include "api/twi_api.h"
#include "api/adc_def.h"
#include "api/adc_api.h"
//#include "api/lcd_def.h"
//#include "api/lcd_api.h"
//#include "api/mmcsd_api.h"
//#include "lib/gfx/controls_definition.h"
//#include "lib/fs/fat.h"
//#include "device/mi0283.h"
#include "device/dxl.h"
#include "device/sht11.h"
#include "device/srf02.h"
#include "device/mhc5883.h"
#include "device/mpu60x0_9150.h"
#include "device/ms5611.h"
/*#####################################################*/
new_uart* Uart[6] = {NULL,NULL,NULL,NULL,NULL,NULL};
new_uart* DebugCom = NULL;
new_twi* TWI[2] = {NULL,NULL};
new_adc* ADC[2] = {NULL, NULL};
new_gpio* LED[4] = {NULL,NULL,NULL,NULL};
new_gpio* HARDBTN1 = NULL;
#ifdef DXL_INTERFACE_INIT
new_gpio* ENTX = NULL;
new_dxl_actuator *DXL;
#endif
#ifdef USE_SHT11
USE_SHT11;
#endif
#ifdef USE_SRF02
USE_SRF02;
#endif
#ifdef USE_MHC5883
USE_MHC5883;
#endif
#ifdef USE_MS5611
USE_MS5611;
#endif
#ifdef USE_MPU60x0
USE_MPU60x0;
#endif
//*-----------------------------------------------------*/
//new_touchscreen* TouchScreen = NULL;
//new_screen* ScreenBuff = NULL;
/*-----------------------------------------------------*/
//SD_Struct_t SD_StructDisk1;
//SD_Struct_t SD_StructDisk2;
/*#####################################################*/
bool board_init()
{
	//RtcStruct.Rtc_ClkSource = _Rtc_Clk_Source_RCOSC_gc;
	core_init();
	timer_init();
/*-----------------------------------------------------*/
/* Set up the Uart 0 like debug interface with RxBuff = 256, TxBuff = 256, 115200b/s*/
	UART_0_INIT
/*-----------------------------------------------------*/
/* Display board message*/
#if defined(BOARD_MESSAGE)
	UARTPutc(DebugCom, 0xFF);
	UARTPutc(DebugCom, 0xFF);
	UARTPutc(DebugCom, '\n');
	UARTPutc(DebugCom, '\r');
	UARTprintf(DebugCom, "Use %s Board.\n\r", BOARD_MESSAGE);
#endif
/*-----------------------------------------------------*/
/* Set up the Twi 0 to communicate with PMIC and the Onboard serial EEprom memory */
	TWI_1_INIT
/*-----------------------------------------------------*/
/* Set up the ADC 0 */
	ADC_0_INIT
/*-----------------------------------------------------*/
	HARDBTN1 = gpio_assign(0, 1, GPIO_DIR_INPUT, false);
	gpio_up_dn(HARDBTN1, 1);
/*-----------------------------------------------------*/
	LED[0] = gpio_assign(3, 12, GPIO_DIR_OUTPUT, false);
	LED[1] = gpio_assign(3, 13, GPIO_DIR_OUTPUT, false);
	LED[2] = gpio_assign(3, 14, GPIO_DIR_OUTPUT, false);
	LED[3] = gpio_assign(3, 15, GPIO_DIR_OUTPUT, false);
//*-----------------------------------------------------*/
	return true;
}
