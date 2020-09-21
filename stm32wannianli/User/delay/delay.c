#include "delay.h"
#include "core_cm3.h"
#include "misc.h"
//��ʱ����

static __IO u32 TimingDelay;
 

void SysTick_Init(void)//�ж���ʱ
{
	//1000000 us
	//1000    ms
	//1       s
	SysTick_Config(SystemCoreClock / 1000000);
	SysTick->CTRL |=  SysTick_CTRL_ENABLE_Msk;
}


void SysTick_Handler(void)//�жϺ���
{
	/*д�����¼�*/
}


#if 0
// ����̼��⺯�� �� core_cm3.h��
static __INLINE uint32_t SysTick_Config(uint32_t ticks)
{ 
  // reload �Ĵ���Ϊ24bit�����ֵΪ2^24
	if (ticks > SysTick_LOAD_RELOAD_Msk)  return (1);
  
  // ���� reload �Ĵ����ĳ�ʼֵ	
  SysTick->LOAD  = (ticks & SysTick_LOAD_RELOAD_Msk) - 1;
	
	// �����ж����ȼ�Ϊ 1<<4-1 = 15�����ȼ�Ϊ���
  NVIC_SetPriority (SysTick_IRQn, (1<<__NVIC_PRIO_BITS) - 1); 
	
	// ���� counter ��������ֵ
  SysTick->VAL   = 0;
	
	// ����systick ��ʱ��Ϊ 72M
	// ʹ���ж�
	// ʹ��systick
  SysTick->CTRL  = SysTick_CTRL_CLKSOURCE_Msk | 
                   SysTick_CTRL_TICKINT_Msk   | 
                   SysTick_CTRL_ENABLE_Msk;                    
  return (0); 
}
#endif



void delay_us( __IO uint32_t us)//1us
{while(us--);
//	uint32_t i;
//	SysTick_Config(72);//72MHzʱ��
//	
//	for(i=0;i<us;i++)
//	{
//		// ����������ֵ��С��0��ʱ��CRTL�Ĵ�����λ16����1	
//		while( !((SysTick->CTRL)&(1<<16)) );
//	}
//	// �ر�SysTick��ʱ��
//	SysTick->CTRL &=~SysTick_CTRL_ENABLE_Msk;
}



void delay_ms( __IO uint32_t ms)//1ms
{
	uint32_t i;	
	SysTick_Config(72000);//72MHzʱ��
	
	for(i=0;i<ms;i++)
	{
		// ����������ֵ��С��0��ʱ��CRTL�Ĵ�����λ16����1
		// ����1ʱ����ȡ��λ����0
		while( !((SysTick->CTRL)&(1<<16)) );
	}
	// �ر�SysTick��ʱ��
	SysTick->CTRL &=~ SysTick_CTRL_ENABLE_Msk;
}

void delay_s( __IO uint32_t ms)//1s
{
	uint32_t i;	
	SysTick_Config(72000000);//72MHzʱ��
	
	for(i=0;i<ms;i++)
	{
		// ����������ֵ��С��0��ʱ��CRTL�Ĵ�����λ16����1
		// ����1ʱ����ȡ��λ����0
		while( !((SysTick->CTRL)&(1<<16)) );
	}
	// �ر�SysTick��ʱ��
	SysTick->CTRL &=~ SysTick_CTRL_ENABLE_Msk;
}




