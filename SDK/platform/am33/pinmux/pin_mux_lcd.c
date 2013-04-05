/*
 * pin_mux_lcd.c
 *
 *  Created on: Aug 15, 2012
 *      Author: Iulian Gheorghiu morgoth2600@gmail.com
 */
/**********************************************/
#include "pin_mux_lcd.h"
#include "api/lcd_def.h"
#include "../interface/lcd_interface.h"
#include "include/hw/soc_AM335x.h"
#include "include/hw/hw_control_AM335x.h"
#include "include/hw/hw_types.h"

extern new_screen* ScreenRander;
/**********************************************/
unsigned int pin_mux_lcd_LCD3_beaglebone(void)
{
    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(0)) =
              (0 << CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(1)) =
              (0 << CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(2)) =
              (0 << CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(3)) =
              (0 << CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(4)) =
              (0 << CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(5)) =
              (0 << CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(6)) =
              (0 << CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(7)) =
              (0 << CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(8)) =
              (0 << CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(9)) =
              (0 << CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(10)) =
            (0 << CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_MMODE_SHIFT)    |
            (1 << CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_PUDEN_SHIFT)    |
            (0 << CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_PUTYPESEL_SHIFT)|
            (1 << CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_RXACTIVE_SHIFT) |
            (0 << CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(11)) =
            (0 << CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_RXACTIVE_SHIFT)  |
              (0 << CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(12)) =
            (0 << CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(13)) =
            (0 << CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(14)) =
            (0 << CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(15)) =
            (0 << CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_SLEWCTRL_SHIFT);

 	HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_VSYNC) =
             (0 << CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_MMODE_SHIFT)     |
             (0 << CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_PUDEN_SHIFT)     |
             (0 << CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_PUTYPESEL_SHIFT) |
             (1 << CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_RXACTIVE_SHIFT)  |
             (0 << CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_SLEWCTRL_SHIFT);

     HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_HSYNC) =
             (0 << CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_MMODE_SHIFT)     |
             (0 << CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_PUDEN_SHIFT)     |
             (0 << CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_PUTYPESEL_SHIFT) |
             (1 << CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_RXACTIVE_SHIFT)  |
             (0 << CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_SLEWCTRL_SHIFT);

     HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_PCLK) =
             (0 << CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_MMODE_SHIFT)     |
             (0 << CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_PUDEN_SHIFT)     |
             (0 << CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_PUTYPESEL_SHIFT) |
             (1 << CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_RXACTIVE_SHIFT)  |
             (0 << CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_SLEWCTRL_SHIFT);

     HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_AC_BIAS_EN) =
             (0 << CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_MMODE_SHIFT)     |
             (0 << CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_PUDEN_SHIFT)     |
             (0 << CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_PUTYPESEL_SHIFT) |
             (1 << CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_RXACTIVE_SHIFT)  |
             (0 << CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_SLEWCTRL_SHIFT);
     return 1;
}
/**********************************************/
unsigned int pin_mux_lcd_AT070TN92_beaglebone(void)
{
    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(0)) =
              (0 << CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(1)) =
              (0 << CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(2)) =
              (0 << CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(3)) =
              (0 << CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(4)) =
              (0 << CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(5)) =
              (0 << CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(6)) =
              (0 << CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(7)) =
              (0 << CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(8)) =
              (0 << CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(9)) =
              (0 << CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_MMODE_SHIFT)    |
              (1 << CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_PUDEN_SHIFT)    |
              (0 << CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_PUTYPESEL_SHIFT)|
              (1 << CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_RXACTIVE_SHIFT) |
              (0 << CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(10)) =
            (0 << CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_MMODE_SHIFT)    |
            (1 << CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_PUDEN_SHIFT)    |
            (0 << CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_PUTYPESEL_SHIFT)|
            (1 << CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_RXACTIVE_SHIFT) |
            (0 << CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(11)) =
            (0 << CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_RXACTIVE_SHIFT)  |
              (0 << CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(12)) =
            (0 << CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(13)) =
            (0 << CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(14)) =
            (0 << CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(15)) =
            (0 << CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(16) ) =
            (0 << CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(17) ) =
            (0 << CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_PUTYPESEL_SHIFT) |
            (1<< CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(18) ) =
            (0 << CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_RXACTIVE_SHIFT)  |
              (0 << CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(19) ) =
            (0 << CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_PUTYPESEL_SHIFT) |
            (1<< CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(20) ) =
            (0 << CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_PUTYPESEL_SHIFT) |
            (1<< CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(21) ) =
            (0 << CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(22) ) =
            (0 << CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_SLEWCTRL_SHIFT);

    HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_DATA(23) ) =
            (0 << CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_MMODE_SHIFT)     |
            (1 << CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_PUDEN_SHIFT)     |
            (0 << CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_PUTYPESEL_SHIFT) |
            (1 << CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_RXACTIVE_SHIFT)  |
            (0 << CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_SLEWCTRL_SHIFT);

 	HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_VSYNC) =
             (0 << CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_MMODE_SHIFT)     |
             (0 << CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_PUDEN_SHIFT)     |
             (0 << CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_PUTYPESEL_SHIFT) |
             (1 << CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_RXACTIVE_SHIFT)  |
             (0 << CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_SLEWCTRL_SHIFT);

     HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_HSYNC) =
             (0 << CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_MMODE_SHIFT)     |
             (0 << CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_PUDEN_SHIFT)     |
             (0 << CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_PUTYPESEL_SHIFT) |
             (1 << CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_RXACTIVE_SHIFT)  |
             (0 << CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_SLEWCTRL_SHIFT);

     HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_PCLK) =
             (0 << CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_MMODE_SHIFT)     |
             (0 << CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_PUDEN_SHIFT)     |
             (0 << CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_PUTYPESEL_SHIFT) |
             (1 << CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_RXACTIVE_SHIFT)  |
             (0 << CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_SLEWCTRL_SHIFT);

     HWREG(SOC_CONTROL_REGS + CONTROL_CONF_LCD_AC_BIAS_EN) =
             (0 << CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_MMODE_SHIFT)     |
             (0 << CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_PUDEN_SHIFT)     |
             (0 << CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_PUTYPESEL_SHIFT) |
             (1 << CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_RXACTIVE_SHIFT)  |
             (0 << CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_SLEWCTRL_SHIFT);
     return 1;
}
/**********************************************/
/**
 * \brief  This API pin multiplexes the lcd data and control signal lines.
 *
 * \param  None
 */

unsigned int LCDPinMuxSetup(void)
{
	if(ScreenRander->LcdType == AT070TN92) return pin_mux_lcd_AT070TN92_beaglebone();
	else if(ScreenRander->LcdType == S035Q01) return pin_mux_lcd_LCD3_beaglebone();
	else if(ScreenRander->LcdType == TFT43AB_OMAP35x) return pin_mux_lcd_LCD3_beaglebone();
	else return 0;
}
/**********************************************/

