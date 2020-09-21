#ifndef _LUNAR_H
#define _LUNAR_H

#include "sys.h"


//年份表
extern unsigned char const year_code[597] ;
///////////////////////////////////////////////////////////////////////////////////////////////////////// 
//         以下为24节气计算相关程序			   
// 
//    每年24节气标志表   
//    有兴趣的朋友可按照上面给的原理添加其它年份的表格
//    不是很清楚的朋友可给我发EMAIL		   
/////////////////////////////////////////////////////////////////////////////////////////////////////////
extern unsigned char const YearMonthBit[160] ;
extern const unsigned char days[24] ;
//以公历日期先后排序
extern   char *JieQiStr[24] ;
extern u8 NLmon,NLday;
extern u8 JQ;//节气序号
extern u8 JieQinum[24][2];



u8 GetChinaCalendar(u16  year,u8 month,u8 day,u8 *p);
u8 GetMoonDay(u8 month_p,unsigned short table_addr);
u8 GetJieQiStr(u16 year,u8 month,u8 day,u8 *str);



















#endif
