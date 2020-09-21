#ifndef __LED_H
#define	__LED_H


#include "stm32f10x.h"


/* ����LED���ӵ�GPIO�˿�, �û�ֻ��Ҫ�޸�����Ĵ��뼴�ɸı���Ƶ�LED���� */
// R-��ɫ
#define LED1_GPIO_PORT    	GPIOA			              /* GPIO�˿� */
#define LED1_GPIO_CLK 	    RCC_APB2Periph_GPIOB		/* GPIO�˿�ʱ�� */
#define LED1_GPIO_PIN		GPIO_Pin_4		        /* ���ӵ�SCLʱ���ߵ�GPIO */

/** the macro definition to trigger the led on or off 
  * 1 - off
  *0 - on
  */
#define ON  0
#define OFF 1

/* ʹ�ñ�׼�Ĺ̼������IO*/
#define LED(a)	if (a)	\
					GPIO_SetBits(LED1_GPIO_PORT,LED1_GPIO_PIN);\
					else		\
					GPIO_ResetBits(LED1_GPIO_PORT,LED1_GPIO_PIN)


void LED_GPIO_Config(void);

#endif /* __LED_H */
