#ifndef  __ADC_H
#define  __ADC_H
#include "sys.h"

#define ADC0831_PORT    GPIOA
#define ADC0831_PORT_CLK    RCC_APB2Periph_GPIOA

#define ADC0831_CS    GPIO_Pin_5
#define ADC0831_CLK   GPIO_Pin_6
#define ADC0831_DO    GPIO_Pin_7


#define ADC0831_CS_ON   GPIO_ResetBits(ADC0831_PORT,ADC0831_CS)
#define ADC0831_CS_OFF  GPIO_SetBits(ADC0831_PORT,ADC0831_CS)

#define ADC0831_CLK_ON   GPIO_ResetBits(ADC0831_PORT,ADC0831_CLK)
#define ADC0831_CLK_OFF  GPIO_SetBits(ADC0831_PORT,ADC0831_CLK)

#define ADC0831_DO_ON   GPIO_ResetBits(ADC0831_PORT,ADC0831_DO)
#define ADC0831_DO_OFF  GPIO_SetBits(ADC0831_PORT,ADC0831_DO)


void ADC_GPIO_Config(void);
u8 ADC0831_ReadADCByte(void);

#endif
