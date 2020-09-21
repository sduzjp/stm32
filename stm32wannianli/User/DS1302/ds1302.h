#ifndef __DS1302_H
#define __DS1302_H
#include "sys.h"
typedef struct
{
	u8 hour;
	u8 min;
	u8 sec;
	//公历日月年周
	u8 w_year;
	u8  w_month;
	u8  w_date;
	u8 week;
}_calendar_obj;
extern _calendar_obj calendar;//时钟结构体
//IO方向设置
#define DS1302_IO_IN()  {GPIOB->CRL&=0XFFFFFF0F;GPIOB->CRL|=8<<4;}
#define DS1302_IO_OUT() {GPIOB->CRL&=0XFFFFFF0F;GPIOB->CRL|=3<<4;}
//IO操作函数									   
#define	DS1302_DATA_OUT PBout(1) //数据端口	PB1 
#define	DS1302_DATA_IN  PBin(1)  //数据端口	PB1 

#define	DS1302_SCK  PBout(0)
#define	DS1302_RST  PBout(2)

//DS1302地址定义
#define ds1302_sec_add			  0x80		//秒数据地址
#define ds1302_min_add			  0x82		//分数据地址
#define ds1302_hr_add			    0x84		//时数据地址
#define ds1302_date_add			  0x86		//日数据地址
#define ds1302_month_add		  0x88		//月数据地址
#define ds1302_day_add			  0x8a		//星期数据地址
#define ds1302_year_add			  0x8c		//年数据地址
#define ds1302_control_add		0x8e		//控制数据地址
#define ds1302_charger_add		0x90 					 
#define ds1302_clkburst_add		0xbe

void DS1302_Init(void);
void DS1302_Write_Byte(u8 addr, u8 data);
u8 DS1302_Read_Byte(u8 addr);
void DS1302_Write_Time(void);
void DS1302_Read_Time(void);
void DS1302_Get_Time(u8 *time);
void DS1302GetTime(void);

extern u8 time_buf[8];



#endif
