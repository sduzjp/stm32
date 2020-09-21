#include "adc.h"
#include "delay.h"
//adc配置，仿真用不到

void ADC_GPIO_Config(void){
    GPIO_InitTypeDef GPIO_InitStructure;
	  RCC_APB2PeriphClockCmd(ADC0831_PORT_CLK, ENABLE);	//使能ADC1，GPIOC时钟
 	  
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;	//

		GPIO_InitStructure.GPIO_Pin = ADC0831_CS; //
    GPIO_Init(ADC0831_PORT, &GPIO_InitStructure); //初始化PC4
	  GPIO_InitStructure.GPIO_Pin = ADC0831_CLK; //
    GPIO_Init(ADC0831_PORT, &GPIO_InitStructure); //初始化PC4
		
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;	//模拟输入
		GPIO_InitStructure.GPIO_Pin = ADC0831_DO; //
    GPIO_Init(ADC0831_PORT, &GPIO_InitStructure); //初始化PC4

}

u8 ADC0831_ReadADCByte(void)
{
	u8 i,m;
	ADC0831_DO_OFF;
	delay_us(2);
	ADC0831_CS_ON;
	delay_us(2);
	ADC0831_CLK_ON;
	delay_us(5);
	ADC0831_CLK_OFF;
	delay_us(2);
	ADC0831_CLK_ON;
	delay_us(2);
	ADC0831_CLK_OFF;
	delay_us(2);
	ADC0831_CLK_ON;
	delay_us(2);
	m = 0;
	for(i=0;i<8;i++)
	{
		ADC0831_CLK_OFF;
		delay_us(2);
		if(GPIO_ReadInputDataBit(ADC0831_PORT,ADC0831_DO)==1)
		{
			m |= 0x01;
			if(i<7)
				m = m<<1;
			
		}else
		{
			if(i<7)
				m = m<<1;
		}
		ADC0831_CLK_ON;
		delay_us(2);
	}
	/*ADC0831_CLK_OFF;
	delay_us(2);
	ADC0831_CLK_ON;
	delay_us(2);*/
	ADC0831_CS_OFF;
	delay_us(5);
	return m;
}

/*
u8 ADC0831_ReadADCByte(void)
{
	u8 i,m;
	ADC0831_DO_OFF;
	delay_us(2);
	ADC0831_CS_ON;
	delay_us(2);
	ADC0831_CLK_ON;
	delay_us(5);
	ADC0831_CLK_OFF;
	delay_us(2);
	ADC0831_CLK_ON;
	delay_us(2);
	ADC0831_CLK_OFF;
	delay_us(2);
	ADC0831_CLK_ON;
	delay_us(2);
	m = 0;
	ADC0831_CLK_OFF;
	m = m|(GPIO_ReadInputDataBit(ADC0831_PORT,ADC0831_DO)&0x01);
	ADC0831_CLK_ON;
	for(i=0;i<7;i++)
	{
		ADC0831_CLK_OFF;
		m = m<<1;
		m = m|(GPIO_ReadInputDataBit(ADC0831_PORT,ADC0831_DO)&0x01);
		ADC0831_CLK_ON;
	}
	ADC0831_CS_OFF;
	ADC0831_CLK_ON;
	return m;
}
*/


