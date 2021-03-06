#include "key.h"

/**************************************************************************
函数功能：按键初始化
入口参数：无
返回  值：无 
**************************************************************************/
void KEY_Init(void)
{
	RCC->APB2ENR|=1<<2;               //使能PORTA时钟	   	 
	GPIOA->CRL&=0XFF0FFFFF;           
	GPIOA->CRL|=0X00800000;           
	GPIOA->ODR|=1<<5; //上拉	
} 
/**************************************************************************
函数功能：按键扫描
入口参数：双击等待时间
返回  值：按键状态 0：无动作 1：单击 2：双击 
**************************************************************************/
u8 click_N_Double (u8 time)
{
	static	u8 flag_key,count_key,double_key;	
	static	u16 count_single,Forever_count;
	if(KEY==0)Forever_count++;   //长按标志位未置1
	else Forever_count=0;
	if(0==KEY&&0==flag_key)flag_key=1;	
	if(0==count_key)
	{
		if(flag_key==1) 
		{
			double_key++;
			count_key=1;	
		}
		if(double_key==2) 
		{
			double_key=0;
			count_single=0;
			return 2;//双击执行的指令
		}	
	}
	if(1==KEY)flag_key=0,count_key=0;

	if(1==double_key)
	{
		count_single++;
		if(count_single>time&&Forever_count<time)
		{
			double_key=0;
			count_single=0;	
			return 1;//单击执行的指令
		}
		if(Forever_count>time)
		{
			double_key=0;
			count_single=0;	
		}
	}	
	return 0;
}
/**************************************************************************
函数功能：按键扫描
入口参数：无
返回  值：按键状态 0：无动作 1：单击 
**************************************************************************/
u8 click(void)
{
	static u8 flag_key=1;//按键按松开标志
	if(flag_key&&KEY==0)
	{
		flag_key=0;
		return 1;	// 按键按下
	}
	else if(1==KEY)	flag_key=1;
	return 0;//无按键按下
}
/**************************************************************************
函数功能：长按检测
入口参数：无
返回  值：按键状态 0：无动作 1：长按2s
**************************************************************************/
u8 Long_Press(void)
{
	static u16 Long_Press_count,Long_Press;
	if(Long_Press==0&&KEY==0) Long_Press_count++;   //长按标志位未置1
	else Long_Press_count=0; 
	if(Long_Press_count>200)		
	{
		Long_Press=1;	
		Long_Press_count=0;
		return 1;			//长按
	}				
	if(Long_Press==1)     //长按标志位置1
	{
		Long_Press=0;
	}
	return 0;			//无动作
}
/**************************************************************************
函数功能：选择运行的模式
入口参数：无
返回  值：无
**************************************************************************/
u8  select(void)
{
	int Angle=260;
	static u8 flag=1;
	int count;
	oled_show_once();  //OLED显示
	Encoder_Temp=abs((short)TIM3->CNT);
	count=Encoder_Temp;
	if(count<=Angle) Flag_Way=0;  //APP遥控模式
	else if(count>Angle&&count<=2*Angle) Flag_Way=1;  //PS2遥控模式
	else if(count>2*Angle&&count<=3*Angle) Flag_Way=2;	//CCD巡线模式
	else if(count>3*Angle&&count<=4*Angle) Flag_Way=3;	//电磁巡线模式
	else TIM3->CNT=0;
	if(Flag_Next==1)
	{
		OLED_Clear();//清除OLED屏幕 程序往下运行
		flag=0;
	}		
	return flag;	  
}

