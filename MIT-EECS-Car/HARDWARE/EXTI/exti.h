#ifndef __EXTI_H
#define __EXTI_H	

#include "sys.h"
  /**************************************************************************
作者：平衡小车之家
我的淘宝小店：http://shop114407458.taobao.com/
**************************************************************************/
#define INT PAin(12)   //PA12连接到MPU6050的中断引脚
void EXTI_Init(void);	//外部中断初始化		 					    
void EXTI9_5_IRQHandler(void) ;


#endif

























