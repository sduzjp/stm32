#ifndef __LED_H
#define __LED_H

#include "sys.h"

//LED �˿ڶ���
#define 	LED 	PAout(4) // PA4

void LED_Init(void);  //��ʼ��
void Led_Flash(u16 time);

#endif