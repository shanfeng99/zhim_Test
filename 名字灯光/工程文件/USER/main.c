/*==========================================================================================
设计者:
      BLAZE
设计日期:
      2016年3月4日
24Mhz晶振	  
==========================================================================================*/
/*头文件*/
#include "STC15F2KXX.H"                                             //芯片头文件                 
#include <intrins.h>                                              //公共函数
#include "TP.h"
#include "system.h"
#include "io.h"
#include "led.h"
#include "expand.h"


u8 xdata gb_TD10ms_WS2811_P1 = 0;
u8 xdata gb_TD10ms_WS2811_P2 = 0;
u8 xdata gb_TD10ms_WS2811_P3 = 0;
u8 xdata gb_TD10ms_WS2811_P4 = 0;
u8 xdata gb_TD10ms_Check1 = 0;
u8 xdata gb_TD10ms_Check2 = 0;
u8 xdata gb_TD10ms_Check3 = 0;
u8 xdata gb_TD10ms_Check4 = 0;
u8 xdata gb_TD10ms_Check5 = 0;
u8 xdata gb_TD10ms_Check6 = 0;
u8 xdata gb_TD10ms_CheckSum = 0;
u8 xdata gb_TD10ms_StatusSum = 0;
u16 xdata  gw_TD10ms_WS2811_StyleChange = 0;


//u8 Check_Input(void){
////	u8 b_ReturnDat = 3;
////	static u8 sb_Status1Sum = 0;
////	static u8 sb_Status2Sum = 0;
////	static u8 sb_Status3Sum = 0;
////	//收到指令处理
////	if(!gb_TD10ms_StatusSum){
////		gb_TD10ms_StatusSum = 2;
////		/*待机*/
////		if((!TPIN_01) && (TPIN_02)){
////			if(++sb_Status1Sum > 10){//持续0.2秒信号
////				sb_Status1Sum = 0xA1;
////			}
////		}
////		else{
////			if(sb_Status1Sum == 0xA1){
////				gb_TD10ms_WS2811_P1 = 0;//即时刷新灯光效果
////				gb_TD10ms_WS2811_P2 = 0;//即时刷新灯光效果
////				gb_TD10ms_WS2811_P3 = 0;//即时刷新灯光效果
////				gb_TD10ms_WS2811_P4 = 0;//即时刷新灯光效果
////			}
////			sb_Status1Sum = 0;
////		}
////		/*中奖*/
////		if((TPIN_01) && (!TPIN_02)){
////			if(++sb_Status2Sum > 10){
////				sb_Status2Sum = 0xA1;
////			}
////		}
////		else{
////			if(sb_Status2Sum == 0xA1){
////				gb_TD10ms_WS2811_P1 = 0;//即时刷新灯光效果
////				gb_TD10ms_WS2811_P2 = 0;//即时刷新灯光效果
////				gb_TD10ms_WS2811_P3 = 0;//即时刷新灯光效果
////				gb_TD10ms_WS2811_P4 = 0;//即时刷新灯光效果
////			}			
////			sb_Status2Sum = 0;
////		}
////		/*游戏*/
////		if((TPIN_01) && (TPIN_02)){
////			if(++sb_Status3Sum > 10){
////				sb_Status3Sum = 0xA1;
////			}
////		}
////		else{
////			if(sb_Status3Sum == 0xA1){
////				gb_TD10ms_WS2811_P1 = 0;//即时刷新灯光效果
////				gb_TD10ms_WS2811_P2 = 0;//即时刷新灯光效果
////				gb_TD10ms_WS2811_P3 = 0;//即时刷新灯光效果
////				gb_TD10ms_WS2811_P4 = 0;//即时刷新灯光效果
////			}	
////			sb_Status3Sum = 0;
////		}
////	}
////	if(sb_Status1Sum == 0xA1)b_ReturnDat = 1;
////	else if(sb_Status2Sum == 0xA1)b_ReturnDat = 2;
////	else if(sb_Status3Sum == 0xA1)b_ReturnDat = 3;
////	return b_ReturnDat;
//}

/*==========================================================================================
函数 
	void main(void)
描述 
	主函数
参数 
	
返回  
*/
//u8 gb_TD1ms_Test =  0;

void main(void){
u8 xdata b_Step = 0;    	
u8 b_Din = 0;
u8 b_TestCot = 0;	
u8 b_Status = 1;	
u8 b_StatusBP = 1;
u8 b_Check01Sum = 0;
u8 b_Check02Sum = 0;
u8 b_Check03Sum = 0;
u8 b_Check04Sum = 0;
u8 b_Check05Sum = 0;
u8 b_Check06Sum = 0;	
u8 b_Status1Sum = 0;
u8 b_Status2Sum = 0;
u8 b_Status3Sum = 0;	
u8 i = 0;
u8 j = 0;
	u8 k = 20;
IO_Init();//接口初始化
Timer_Init();//定时器初始化	
/*中断总开关*/
EA = 1;//开中断	
ET0 = 1;//允许定时器0中断
//ET1 = 1;//允许定时器1中断
//IE2 |= 0x04;//允许定时器2中断
WS2811_1P_En();//开机初始化
WS2811_1P_En();//开机初始化
WS2811_4P_En();//开机初始化	
b_Step = 0;
TPOUT_TESTLED=0;
while(1){

	if((!gb_TD10ms_WS2811_P4)&&(b_Step==0)){
		WS2811_blood_P4(3, 3,gpdw_White_low,0);
		b_Step=1;
		gb_TD10ms_WS2811_P4=10;
	}
	if((!gb_TD10ms_WS2811_P4)&&(b_Step==1)){
		WS2811_blood_P4(3, 2,gpdw_White_low,0);
		b_Step=2;
		gb_TD10ms_WS2811_P4=10;
	}
	if((!gb_TD10ms_WS2811_P4)&&(b_Step==2)){
		WS2811_blood_P4(3, 1,gpdw_White_low,0);
		b_Step=6;
		gb_TD10ms_WS2811_P4=10;
	}
	if((!gb_TD10ms_WS2811_P4)&&(b_Step==6)){
		WS2811_blood_P4(3, 0,gpdw_White_low,0);
		b_Step=3;
		gb_TD10ms_WS2811_P4=10;
	}
	if((!gb_TD10ms_WS2811_P4)&&(b_Step==3)){
		WS2811_blood1_P4(3, 3,gpdw_dark,0);
		b_Step=4;
		gb_TD10ms_WS2811_P4=10;
	}
	if((!gb_TD10ms_WS2811_P4)&&(b_Step==4)){
		WS2811_blood1_P4(3, 2,gpdw_dark,0);
		b_Step=5;
		gb_TD10ms_WS2811_P4=10;
	}
	if((!gb_TD10ms_WS2811_P4)&&(b_Step==5)){
		WS2811_blood1_P4(3, 1,gpdw_dark,0);
		b_Step=7;
		gb_TD10ms_WS2811_P4=10;
	}
	if((!gb_TD10ms_WS2811_P4)&&(b_Step==7)){
		WS2811_blood1_P4(3, 0,gpdw_dark,0);
		b_Step=0;
		gb_TD10ms_WS2811_P4=10;
	}
}
}









/*==========================================================================================
函数
	void Timer0_1ms(void)				 
描述 	
	定时器0,1T模式,16位自动重装,1ms中断一次,高优先级
参数 

返回 
*/
void Timer0_1ms(void) interrupt TIMER0_VECTOR
{	
//	if(gw_TD10ms_StyleChange)gw_TD10ms_StyleChange --;
	if(gb_TD10ms_WS2811_P1)gb_TD10ms_WS2811_P1 --;
	if(gb_TD10ms_WS2811_P2)gb_TD10ms_WS2811_P2 --;
	if(gb_TD10ms_WS2811_P3)gb_TD10ms_WS2811_P3 --;
	if(gb_TD10ms_WS2811_P4)gb_TD10ms_WS2811_P4 --;
	if(gw_TD10ms_WS2811_StyleChange)gw_TD10ms_WS2811_StyleChange --;
	if(gb_TD10ms_Check1)gb_TD10ms_Check1 --;
	if(gb_TD10ms_Check2)gb_TD10ms_Check2 --;
	if(gb_TD10ms_Check3)gb_TD10ms_Check3 --;
	if(gb_TD10ms_Check4)gb_TD10ms_Check4 --;
	if(gb_TD10ms_Check5)gb_TD10ms_Check5 --;
	if(gb_TD10ms_Check6)gb_TD10ms_Check6 --;
//	if(gb_TD10ms_StatusSum)gb_TD10ms_StatusSum --;
	if(gb_TD10ms_CheckSum)gb_TD10ms_CheckSum --;
}
/*==========================================================================================
函数
	void Timer1_10ms(void)				 
描述 	
	定时器1,16位自动重装,10ms中断一次,低优先级
参数 

返回 
*/
void Timer1_10ms(void) interrupt TIMER1_VECTOR
{
//	if(gw_TD10ms_StyleChange)gw_TD10ms_StyleChange --;
}	
	