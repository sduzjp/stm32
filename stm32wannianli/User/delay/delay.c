#include "delay.h"
#include "core_cm3.h"
#include "misc.h"
//延时函数

static __IO u32 TimingDelay;
 

void SysTick_Init(void)//中断延时
{
	//1000000 us
	//1000    ms
	//1       s
	SysTick_Config(SystemCoreClock / 1000000);
	SysTick->CTRL |=  SysTick_CTRL_ENABLE_Msk;
}


void SysTick_Handler(void)//中断函数
{
	/*写处理事件*/
}


#if 0
// 这个固件库函数 在 core_cm3.h中
static __INLINE uint32_t SysTick_Config(uint32_t ticks)
{ 
  // reload 寄存器为24bit，最大值为2^24
	if (ticks > SysTick_LOAD_RELOAD_Msk)  return (1);
  
  // 配置 reload 寄存器的初始值	
  SysTick->LOAD  = (ticks & SysTick_LOAD_RELOAD_Msk) - 1;
	
	// 配置中断优先级为 1<<4-1 = 15，优先级为最低
  NVIC_SetPriority (SysTick_IRQn, (1<<__NVIC_PRIO_BITS) - 1); 
	
	// 配置 counter 计数器的值
  SysTick->VAL   = 0;
	
	// 配置systick 的时钟为 72M
	// 使能中断
	// 使能systick
  SysTick->CTRL  = SysTick_CTRL_CLKSOURCE_Msk | 
                   SysTick_CTRL_TICKINT_Msk   | 
                   SysTick_CTRL_ENABLE_Msk;                    
  return (0); 
}
#endif



void delay_us( __IO uint32_t us)//1us
{while(us--);
//	uint32_t i;
//	SysTick_Config(72);//72MHz时钟
//	
//	for(i=0;i<us;i++)
//	{
//		// 当计数器的值减小到0的时候，CRTL寄存器的位16会置1	
//		while( !((SysTick->CTRL)&(1<<16)) );
//	}
//	// 关闭SysTick定时器
//	SysTick->CTRL &=~SysTick_CTRL_ENABLE_Msk;
}



void delay_ms( __IO uint32_t ms)//1ms
{
	uint32_t i;	
	SysTick_Config(72000);//72MHz时钟
	
	for(i=0;i<ms;i++)
	{
		// 当计数器的值减小到0的时候，CRTL寄存器的位16会置1
		// 当置1时，读取该位会清0
		while( !((SysTick->CTRL)&(1<<16)) );
	}
	// 关闭SysTick定时器
	SysTick->CTRL &=~ SysTick_CTRL_ENABLE_Msk;
}

void delay_s( __IO uint32_t ms)//1s
{
	uint32_t i;	
	SysTick_Config(72000000);//72MHz时钟
	
	for(i=0;i<ms;i++)
	{
		// 当计数器的值减小到0的时候，CRTL寄存器的位16会置1
		// 当置1时，读取该位会清0
		while( !((SysTick->CTRL)&(1<<16)) );
	}
	// 关闭SysTick定时器
	SysTick->CTRL &=~ SysTick_CTRL_ENABLE_Msk;
}




