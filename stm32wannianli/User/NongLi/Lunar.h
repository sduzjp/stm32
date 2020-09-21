#ifndef _LUNAR_H
#define _LUNAR_H

#include "sys.h"


//��ݱ�
extern unsigned char const year_code[597] ;
///////////////////////////////////////////////////////////////////////////////////////////////////////// 
//         ����Ϊ24����������س���			   
// 
//    ÿ��24������־��   
//    ����Ȥ�����ѿɰ����������ԭ�����������ݵı��
//    ���Ǻ���������ѿɸ��ҷ�EMAIL		   
/////////////////////////////////////////////////////////////////////////////////////////////////////////
extern unsigned char const YearMonthBit[160] ;
extern const unsigned char days[24] ;
//�Թ��������Ⱥ�����
extern   char *JieQiStr[24] ;
extern u8 NLmon,NLday;
extern u8 JQ;//�������
extern u8 JieQinum[24][2];



u8 GetChinaCalendar(u16  year,u8 month,u8 day,u8 *p);
u8 GetMoonDay(u8 month_p,unsigned short table_addr);
u8 GetJieQiStr(u16 year,u8 month,u8 day,u8 *str);



















#endif
