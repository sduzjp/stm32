#ifndef _DELAY_MS_US
#define _DELAY_MS_US

#include"stm32f10x.h"
void delay_us( __IO uint32_t us);//1us
void delay_ms( __IO uint32_t ms);//1ms
void delay_s( __IO uint32_t s);//1s
void SysTick_Init(void);
void SysTick_Handler(void);





#endif /*_DELAY_MS_US*/

