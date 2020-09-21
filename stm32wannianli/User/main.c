#include "stm32f10x.h" 
#include "delay.h"
#include "sys.h"
#include "lcd.h"
#include "adc.h"
#include "bsp_key.h"
#include "DTH11.h"
#include "ds1302.h"
#include <stdio.h> 
#include "Lunar.h"
void BJinit(void)//����IO��ʼ��
{
	
	GPIO_InitTypeDef GPIO_InitStructure; 
	
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_1;

	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;

	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;

	GPIO_Init(GPIOA,&GPIO_InitStructure);
	
  PAout(1)=1;//�رձ���
}
u8 Alarm[3]={8,0,0};
int main(void)
{
	u8  wd=0,APm=0,Sz=0,fg=0;      
  u8  sd=0,tp[3],Dt=100,Wt,St;	
	u32 tt=100,cnt=1000;
	u8 str[20];
	LCD_Init();
	BJinit();//
  DHT11_Init() ;            //��ʪ�ȴ�������ʼ��
	DS1302_Init();
	Key_GPIO_Config();
	//ADC_GPIO_Config();

 	DS1302GetTime(); 
 Alarm[0]=calendar.hour;
 Alarm[1]=calendar.min;
 Alarm[2]=0; 	
 //��ȡDHT11 ��ʪ��

 DHT11_Read_Data(&wd,&sd) ;	
	while(1)
	{
		if(Key_Scan(KEY1_GPIO_PORT,KEY1_GPIO_PIN) == KEY_ON  )//AM PM
		{
			if(APm==1)APm=0; //24Сʱ��
			else APm=1;      //1212Сʱ��
			if(APm==0)snprintf((void*)str,20,"%02d:%02d:%02d   ",calendar.hour,calendar.min,calendar.sec);
			 else
			 {
				 if(calendar.hour>12)snprintf((void*)str,20,"%02d:%02d:%02d PM",calendar.hour-12,calendar.min,calendar.sec);
				 else snprintf((void*)str,20,"%02d:%02d:%02d AM",calendar.hour,calendar.min,calendar.sec);
			 }
			 LCD_DIS_Char(2,0,str,MIDDLE);
		} 

		if( Key_Scan(KEY2_GPIO_PORT,KEY2_GPIO_PIN) == KEY_ON  )
		{
			if(Sz==0&&fg==0)//����ģʽ
			{ 
				Sz=1;
			  snprintf((void*)str,20,"SET %02d:%02d:%02d   %d",Alarm[0],Alarm[1],Alarm[2],fg);
				LCD_DIS_Char(4,0,str,MIDDLE); 
			}
			else if(fg==2)// ����ģʽ
			{ 
				Sz=0;
				fg=0;
			  snprintf((void*)str,20,"Alarm: %02d:%02d:%02d ",Alarm[0],Alarm[1],Alarm[2]);
				LCD_DIS_Char(4,0,str,MIDDLE); 
			} 
			else 
			{ fg++; 
				 snprintf((void*)str,20,"SET %02d:%02d:%02d   %d",Alarm[0],Alarm[1],Alarm[2],fg);
				LCD_DIS_Char(4,0,str,MIDDLE); 
			}
		}	
		if(Sz==1)	//����ģʽ
		{
			  if( Key_Scan(KEY3_GPIO_PORT,KEY3_GPIO_PIN) == KEY_ON  )//+
				{
					 if(Alarm[fg]<59)Alarm[fg]++;//  ���� 
					 snprintf((void*)str,20,"%02d:%02d:%02d",Alarm[0],Alarm[1],Alarm[2]);
			     LCD_DIS_Char(4,32,str,MIDDLE);
				}
				if( Key_Scan(KEY4_GPIO_PORT,KEY4_GPIO_PIN) == KEY_ON  )//-
				{
					 if(Alarm[fg]>0)Alarm[fg]--;//ʱ ����  
					snprintf((void*)str,20,"%02d:%02d:%02d",Alarm[0],Alarm[1],Alarm[2]);
			    LCD_DIS_Char(4,32,str,MIDDLE);
				} 
				 
		}	
		else //ˢ����ʾģʽ
		{   if( Key_Scan(KEY3_GPIO_PORT,KEY3_GPIO_PIN) == KEY_ON  ) PAout(1)=1;//�رձ���
				if(cnt++>10000)
				{  cnt=0;
					 DS1302GetTime();  
				}
				if(Dt!=calendar.w_date)//�շ����仯
				{
					 Dt=calendar.w_date;
					 snprintf((void*)str,20,"%02d-%02d-%02d",calendar.w_year,calendar.w_month,calendar.w_date);
					 LCD_DIS_Char(0,0,str,MIDDLE);//ˢ������ 
					 //����תũ��
					 GetChinaCalendar(2000+calendar.w_year,calendar.w_month,calendar.w_date, &str[0]); 
					 snprintf((void*)str,20,"%02d-%02d",NLmon,NLday);
					 LCD_DIS_Char(0,88,str,MIDDLE);//��ʾũ��
					//��ȡ����
					 GetJieQiStr(2000+calendar.w_year,calendar.w_month,calendar.w_date, &str[0]); 
					snprintf((void*)str,2,"%s",JieQinum[JQ]);
					tp[0]=JieQinum[JQ][0]+1;
					tp[1]=JieQinum[JQ][1]+1;
					tp[2]=0; 
					LCD_DIS_WORD(2,96,tp,LONG);//��ʾ����
					//���ӱ���ֵ ʱ���� 
					snprintf((void*)str,20,"Alarm: %02d:%02d:%02d",Alarm[0],Alarm[1],Alarm[2]);
					LCD_DIS_Char(4,0,str,MIDDLE); 
				}	 
				if(tt!=calendar.sec)//�뷢���仯	if(1!=1)//
				{  tt=calendar.sec; 
					 if(APm==0)snprintf((void*)str,20,"%02d:%02d:%02d   ",calendar.hour,calendar.min,calendar.sec);
					 else
					 {
						 if(calendar.hour>12)snprintf((void*)str,20,"%02d:%02d:%02d PM",calendar.hour-12,calendar.min,calendar.sec);
						 else snprintf((void*)str,20,"%02d:%02d:%02d AM",calendar.hour,calendar.min,calendar.sec);
					 }
					 LCD_DIS_Char(2,0,str,MIDDLE); 

		//			//��ȡDHT11 ��ʪ��
						DHT11_Read_Data(&wd,&sd) ;
						if(Wt!=wd||St!=sd)//�¶Ȼ���ʪ�ȷ����仯
						{
							snprintf((void*)str,20,"WD = %2d  SD = %2d",wd,sd);
							LCD_DIS_Char(6,0,str,MIDDLE);
							Wt=wd;
							St=sd;
						}
					 
					if(Alarm[0]==calendar.hour&&Alarm[1]==calendar.min&&Alarm[2]==calendar.sec)//���ﱨ��ʱ��
					{
						PAout(1)=0;//��������
					}				
						
				}
		}
		


	}	
}
