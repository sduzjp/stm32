/**
  ******************************************************************************
  * @file    main.c
  * @author  ����ѧ��
  * @version V1.0
  * @date    2020-08-16
  * @brief   �����жϽ��ղ���
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:STM32F103C8T6 ������ 
  ******************************************************************************
  */ 
 
 
#include "stm32f10x.h"   
#include "bsp_usart.h"
#include "bsp_led.h"

/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */
int main(void)
{	
	uint8_t ch;
	//uint8_t a[10]={0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x10};
	USART_Config();
	
	LED_GPIO_Config();
	
  /*��ʼ��USART ����ģʽΪ 115200 8-N-1���жϽ���*/
	
	
	/* ����һ���ַ��� */
//	Usart_SendString( DEBUG_USARTx,"С�����ڲ���\n");
	printf("MIT-EECS-С�����ڲ���ʵ��\n");
	//Usart_SendArray(DEBUG_USARTx, a, 10); 
	while(1)
	{
		ch=USART_ReceiveData(DEBUG_USARTx);
		//printf("���յ��ַ���%x\n",ch);
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
