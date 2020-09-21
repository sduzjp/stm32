#include "stm32f10x.h"

void delay_ms(int xms)
{
	int i,j;
	for(i=0;i<xms;i++)
	for(j=0;j<250;j++)
	{;;;;}
}

int main()
{
	//打开GPIOB端口的时钟
	//*(unsigned int *)0x40021018|=(1<<3);
	RCC_APB2ENR|=(1<<3);
	//清空控制PB0的端口位
	GPIOB_CRL&=~(0x0f<<(4*0));
	//配置PB0为通用推挽输出，速度为10MHZ
	GPIOB_CRL|=(1<<(4*0));
	//配置IO口为输出
	//*(unsigned int *)0x40010C00|=(1<<(4*0));//点亮红灯4*5，点亮蓝灯4*1
	//控制ODR寄存器
	//*(unsigned int *)0x40010C0C&=~(1<<0);
	GPIOB_ODR|=(0<<0);
	while(1);
	//delay_ms(10000);
	//*(unsigned int *)0x40010C0C|=~(0<<0);
	/*while(1)//实现LED灯的闪烁
	{
		*(unsigned int *)0x40010C0C&=~(1<<0);
		delay_ms(10000);
		*(unsigned int *)0x40010C0C|=~(0<<0);
		delay_ms(10000);
	}*/
}
//骗过编译器
void SystemInit(void)
{

}
