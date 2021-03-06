/*
 * uart_interface.c
 *
 * Created: 2/8/2013 2:06:44 AM
 *  Author: XxXx
 */
/*#####################################################*/
#include "stm32f0xx_conf.h"
#include "include/stm32f0xx.h"
#include "uart_interface.h"
#include "driver/stm32f0xx_hal_uart.h"
#include "driver/stm32f0xx_hal_gpio_ex.h"
#include "driver/stm32f0xx_hal_rcc.h"
#include "gpio_interface.h"
//#include "driver/uart.h"
//#include "int/int_uart.h"
/**
  * @brief  Configures the nested vectored interrupt controller.
  * @param  None
  * @retval None
  */
/*static void UART_nvic_config(Uart_t* UartSettings)
{
  NVIC_InitTypeDef NVIC_InitStructure;

  switch(UartSettings->UartNr)
  {
	  case 0:
		  NVIC_InitStructure.NVIC_IRQChannel = USART1_IRQn;
		  break;
  	  case 1:
  		  NVIC_InitStructure.NVIC_IRQChannel = USART2_IRQn;
  		  break;
  	  case 2:
  		  NVIC_InitStructure.NVIC_IRQChannel = USART3_IRQn;
  		  break;
  	  case 3:
  		  NVIC_InitStructure.NVIC_IRQChannel = UART4_IRQn;
  		  break;
  	  case 4:
  		  NVIC_InitStructure.NVIC_IRQChannel = UART5_IRQn;
  		  break;
  }*/
  /* Enable the USARTx Interrupt */
  /*NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = UartSettings->Priority;
  NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
  NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
  NVIC_Init(&NVIC_InitStructure);
}*/
/**
  * @brief  Configures COM port.
  * @param  COM: Specifies the COM port to be configured.
  *   This parameter can be one of following parameters:
  *     @arg COM1
  *     @arg COM2
  * @param  USART_InitStruct: pointer to a USART_InitTypeDef structure that
  *   contains the configuration information for the specified USART peripheral.
  * @retval None
  */

#define COMn                             2

USART_TypeDef* COM_USART[COMn] = {
#ifdef USART1
		USART1,
#endif
#ifdef USART2
		USART2,
#endif
#ifdef USART3
		USART3,
#endif
#ifdef UART4
		UART4,
#endif
#ifdef UART5
		UART5,
#endif
#ifdef USART6
		USART6,
#endif
#ifdef UART7
		UART7,
#endif
#ifdef UART8
		UART8
#endif
};

#if 0
void STM_EVAL_COMInit(unsigned char COM, USART_InitTypeDef* USART_InitStruct)
{
	  GPIO_InitTypeDef GPIO_InitStructure;

	  /* Enable GPIO clock */
	  RCC_AHBPeriphClockCmd(COM_TX_PORT_CLK[COM], ENABLE);
	  RCC_AHBPeriphClockCmd(COM_RX_PORT_CLK[COM], ENABLE);

	  if (COM == 0 || COM == 5) RCC_APB2PeriphClockCmd(COM_USART_CLK[COM], ENABLE);
	  else
	  {
	    /* Enable UART clock */
	    RCC_APB1PeriphClockCmd(COM_USART_CLK[COM], ENABLE);
	  }

	  /* Connect PXx to USARTx_Tx*/
	  GPIO_PinAFConfig(COM_TX_PORT[COM], COM_TX_PIN_SOURCE[COM], COM_TX_AF[COM]);

	  /* Connect PXx to USARTx_Rx*/
	  GPIO_PinAFConfig(COM_RX_PORT[COM], COM_RX_PIN_SOURCE[COM], COM_RX_AF[COM]);

	  /* Configure USART Tx as alternate function  */
	  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;

	  GPIO_InitStructure.GPIO_Pin = COM_TX_PIN[COM];
	  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	  GPIO_Init(COM_TX_PORT[COM], &GPIO_InitStructure);

	  /* Configure USART Rx as alternate function  */
	  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
	  GPIO_InitStructure.GPIO_Pin = COM_RX_PIN[COM];
	  GPIO_Init(COM_RX_PORT[COM], &GPIO_InitStructure);

	  /* USART configuration */
	  USART_Init(COM_USART[COM], USART_InitStruct);

	  /* Enable USART */
	  USART_Cmd(COM_USART[COM], ENABLE);
}
#endif
/*#####################################################*/
bool _uart_open(Uart_t* UartSettings)
{



	  GPIO_InitTypeDef  GPIO_InitStruct;

	  /*##-1- Enable peripherals and GPIO Clocks #################################*/
	  /* Enable GPIO TX/RX clock */
	  _gpio_init(UartSettings->TxPort);
	  _gpio_init(UartSettings->RxPort);

	  //USARTx_TX_GPIO_CLK_ENABLE();
	  //USARTx_RX_GPIO_CLK_ENABLE();
	  /* Enable USART1 clock */
	  switch(UartSettings->UartNr)
	  {
#ifdef __HAL_RCC_USART1_CLK_ENABLE
	  case 0:
		  __HAL_RCC_USART1_CLK_ENABLE();
		  break;
#endif
#ifdef __HAL_RCC_USART2_CLK_ENABLE
	  case 1:
		  __HAL_RCC_USART2_CLK_ENABLE();
		  break;
#endif
#ifdef __HAL_RCC_USART3_CLK_ENABLE
	  case 2:
		  __HAL_RCC_USART3_CLK_ENABLE();
		  break;
#endif
#ifdef __HAL_RCC_UART4_CLK_ENABLE
	  case 3:
		  __HAL_RCC_UART4_CLK_ENABLE();
		  break;
#endif
#ifdef __HAL_RCC_UART5_CLK_ENABLE
	  case 4:
		  __HAL_RCC_UART5_CLK_ENABLE();
		  break;
#endif
#ifdef __HAL_RCC_USART6_CLK_ENABLE
	  case 5:
		  __HAL_RCC_USART6_CLK_ENABLE();
		  break;
#endif
#ifdef __HAL_RCC_UART7_CLK_ENABLE
	  case 6:
		  __HAL_RCC_UART7_CLK_ENABLE();
		  break;
#endif
#ifdef __HAL_RCC_UART8_CLK_ENABLE
	  case 7:
		  __HAL_RCC_UART8_CLK_ENABLE();
		  break;
#endif
	  }
	  //USARTx_CLK_ENABLE();

	  /*##-2- Configure peripheral GPIO ##########################################*/
	  /* UART TX GPIO pin configuration  */
	  GPIO_InitStruct.Pin       = 1 << UartSettings->TxPin;
	  GPIO_InitStruct.Mode      = GPIO_MODE_AF_PP;
	  GPIO_InitStruct.Pull      = GPIO_NOPULL;
	  GPIO_InitStruct.Speed     = GPIO_SPEED_FREQ_HIGH;
	  switch(UartSettings->UartNr)
	  {
	  case 0:
		  GPIO_InitStruct.Alternate = GPIO_AF1_USART1;
		  break;
	  case 1:
		  GPIO_InitStruct.Alternate = GPIO_AF1_USART2;
		  break;
	  }
	  //GPIO_InitStruct.Alternate = USARTx_TX_AF;

	  HAL_GPIO_Init(GET_GPIO_PORT_ADDR[UartSettings->TxPort], &GPIO_InitStruct);

	  /* UART RX GPIO pin configuration  */
	  GPIO_InitStruct.Pin = 1 << UartSettings->RxPin;
	  //GPIO_InitStruct.Alternate = USARTx_RX_AF;

	  HAL_GPIO_Init(GET_GPIO_PORT_ADDR[UartSettings->RxPort], &GPIO_InitStruct);

	  UartSettings->udata = calloc(1, sizeof(UART_HandleTypeDef));
	  if(!UartSettings->udata)
		  return false;
	  UART_HandleTypeDef *UartHandle = (UART_HandleTypeDef *)UartSettings->udata;
	//USART_DeInit(COM_USART[UartSettings->UartNr]);
	//UART_nvic_config(UartSettings);
	UartSettings->BaseAddr = (unsigned int)UartSettings;
	UartHandle->Instance = COM_USART[UartSettings->UartNr];
	UartHandle->Init.BaudRate = UartSettings->BaudRate;
	UartHandle->Init.WordLength = UART_WORDLENGTH_8B;
	UartHandle->Init.StopBits = UART_STOPBITS_1;
	UartHandle->Init.Parity = UART_PARITY_NONE;
	UartHandle->Init.HwFlowCtl = UART_HWCONTROL_NONE;
	UartHandle->Init.Mode = UART_MODE_TX_RX;
	UartHandle->Init.OverSampling = UART_OVERSAMPLING_16;

	HAL_UART_Init(UartHandle);
	//UART_nvic_config(UartSettings);
	//STM_EVAL_COMInit(UartSettings, UartSettings->UartNr, &USART_InitStructure);
	  //while(1);
	//USART_TypeDef* base_addr = (USART_TypeDef*)UartSettings->BaseAddr;
	//base_addr->CR1 |= USART_Mode_Rx | USART_Mode_Tx;
	return true;//UartOpen(UartSettings);
}
/*#####################################################*/
bool _uart_close(Uart_t *UartSettings)
{
	HAL_UART_DeInit((UART_HandleTypeDef*)UartSettings->udata);
	if(UartSettings->udata)
		free(UartSettings->udata);
	return true;
}
/*#####################################################*/
void _UARTBaudSetRate(unsigned int BaseAddr, unsigned long BaudRate)
{
	//uart_set_baud_rate(BaseAddr, BaudRate);
}
/*#####################################################*/
void _UARTCharPut(unsigned int BaseAddr, unsigned char byteTx)
{
	Uart_t* UartSettings = (Uart_t *)BaseAddr;
	HAL_UART_Transmit(UartSettings->udata, &byteTx, 1, 10);
}
/*#####################################################*/
unsigned char _UARTCharGet(unsigned int BaseAddr)
{
	unsigned char data = 0;
	Uart_t* UartSettings = (Uart_t *)BaseAddr;
	HAL_UART_Receive(UartSettings->udata, &data, 1, 10);
	return data;//(signed char)USART_ReceiveData((USART_TypeDef*)BaseAddr);//UARTCharGet(BaseAddr);
}
/*#####################################################*/
bool _UARTCharPutNonBlocking(unsigned int BaseAddr, unsigned char byteTx)
{
	Uart_t* UartSettings = (Uart_t *)BaseAddr;
	HAL_StatusTypeDef status = HAL_UART_Transmit(UartSettings->udata, &byteTx, 1, 2);
	if(status == HAL_TIMEOUT || status == HAL_BUSY || status == HAL_ERROR)
		return false;//UARTCharPutNonBlocking((USART_TypeDef*)BaseAddr, byteTx);
	return true;
}
/*#####################################################*/
signed char _UARTCharGetNonBlocking(unsigned int BaseAddr)
{
	signed short data = 0;
	Uart_t* UartSettings = (Uart_t *)BaseAddr;
	HAL_StatusTypeDef status = HAL_UART_Receive((UART_HandleTypeDef *)UartSettings->udata, (unsigned char *)&data, 1, 2);
	if(status == HAL_TIMEOUT || status == HAL_BUSY || status == HAL_ERROR)
		return -1;//UARTCharPutNonBlocking((USART_TypeDef*)BaseAddr, byteTx);
	return data;
}
/*#####################################################*/
unsigned int _UARTRxErrorGet(unsigned int BaseAddr)
{
	return 0;//UARTRxErrorGet(BaseAddr);
}
/*#####################################################*/
