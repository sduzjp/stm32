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
	//��GPIOB�˿ڵ�ʱ��
	//*(unsigned int *)0x40021018|=(1<<3);
	RCC_APB2ENR|=(1<<3);
	//��տ���PB0�Ķ˿�λ
	GPIOB_CRL&=~(0x0f<<(4*0));
	//����PB0Ϊͨ������������ٶ�Ϊ10MHZ
	GPIOB_CRL|=(1<<(4*0));
	//����IO��Ϊ���
	//*(unsigned int *)0x40010C00|=(1<<(4*0));//�������4*5����������4*1
	//����ODR�Ĵ���
	//*(unsigned int *)0x40010C0C&=~(1<<0);
	GPIOB_ODR|=(0<<0);
	while(1);
	//delay_ms(10000);
	//*(unsigned int *)0x40010C0C|=~(0<<0);
	/*while(1)//ʵ��LED�Ƶ���˸
	{
		*(unsigned int *)0x40010C0C&=~(1<<0);
		delay_ms(10000);
		*(unsigned int *)0x40010C0C|=~(0<<0);
		delay_ms(10000);
	}*/
}
//ƭ��������
void SystemInit(void)
{

}
