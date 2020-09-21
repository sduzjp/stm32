#include "exti.h"
  /**************************************************************************
作者：平衡小车之家
我的淘宝小店：http://shop114407458.taobao.com/
**************************************************************************/
/**************************************************************************
函数功能：外部中断初始化
入口参数：无
返回  值：无 
**************************************************************************/
void EXTI_Init(void)
{
	RCC->APB2ENR|=1<<2;    //使能PORTA时钟	   	 
	GPIOA->CRH&=0XFFF0FFFF; 
	GPIOA->CRH|=0X00080000;//PA12上拉输入
	GPIOA->ODR|=1<<12;     //PA12上拉	
	Ex_NVIC_Config(GPIO_A,5,FTIR);		//下降沿触发
	MY_NVIC_Init(2,1,EXTI9_5_IRQn,2);  	//抢占2，子优先级1，组2
}


//warning：没有返回值，int改成void
void EXTI9_5_IRQHandler(void) 
{    
	if(KEY==0)		
	{   
		EXTI->PR=1<<5;   
		Flag_Next=1;
	}
}






