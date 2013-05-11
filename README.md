mSdk
====

Multiplatform SDK for standalone applications

This SDK is intended to help the developers that he want to develop standalone applications that can be compiled for different platforms with minimum changes of source code.

At this moment is supported the next platforms:

1) TI AM335x (Code Composer Studio).

  BeagleBone Board.
  
  DevKit8600 Board.
  
2) TI OMAP4 (Code Composer Studio).

  PandaBoardEs Board.
  
3) AVR32AP7000 (AVR32 Studio).

  NGW100 Board.
  
4) ATxmega (Atmel Studio).

  XmegaMediaPlayer Board.
  
5) AT32UC3L (Atmel Studio).

  Xplained Board.
  
6) STM32F4xx (ODeV).

  Discovery Board.
  
I added the settings for all example projects to help beginners to understand how it work, is necessary to clone mSdk into "C:\GitHub\" directory.

<a href="http://forum.devboardshop.com/">Detalied description link.</a>

Done API's for every platform:

	AM335x:
		EDMA.
		GPIO.
		MMCSD.
		Internal AD touchscreen.
		LCD.
		SPI.
		RTC.
		TWI.
		UART.
		USB.
	AT32AP7000:
		GPIO.
		MMCSD.
		LCD.
		RTC.
		TWI.
		UART.
	AT32UC3L:
		ADC.
		GPIO.
		UART.
	ATXMEGA:
		GPIO.
		MMCSD using USART in SPI mode.
		SPI.
		TWI.
		USART.
	OMAP4:
		GPIO.
		TWI.
		UART.
	STM32F0:
		In development.
	STM32F1:
		In development.
	STM32F3:
		In development.
	STM32F4:
		GPIO.


