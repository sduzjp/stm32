/**
  ******************************************************************************
  * @file    main.c
  * @author  崇新学堂
  * @version V1.0
  * @date    2020-08-16
  * @brief   串口中断接收测试
  ******************************************************************************
  * @attention
  *
  * 实验平台:STM32F103C8T6 开发板 
  ******************************************************************************
  */ 
 
 
#include "stm32f10x.h"   
#include "bsp_usart.h"
#include "bsp_led.h"

/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */
int main(void)
{	
	uint8_t ch;
	//uint8_t a[10]={0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10};
	USART_Config();
	
	LED_GPIO_Config();
	
  /*初始化USART 配置模式为 115200 8-N-1，中断接收*/
	
	
	/* 发送一个字符串 */
//	Usart_SendString( DEBUG_USARTx,"小车串口测试\n");
	printf("MIT-EECS-小车串口测试实例\n");
	//Usart_SendArray(DEBUG_USARTx, a, 10); 
	while(1)
	{
		ch=USART_ReceiveData(DEBUG_USARTx);
		//printf("接收到字符：%x\n",ch);
		switch(ch)
		{
			case 1:
				LED(OFF);
				//USART_SendData(DEBUG_USARTx, ch);
				break;
			default:
				LED(ON);
				//USART_SendData(DEBUG_USARTx, ch);
		}
	}	
}
/*********************************************END OF FILE**********************/
