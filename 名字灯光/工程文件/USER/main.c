/*==========================================================================================
�����:
      BLAZE
�������:
      2016��3��4��
24Mhz����	  
==========================================================================================*/
/*ͷ�ļ�*/
#include "STC15F2KXX.H"                                             //оƬͷ�ļ�                 
#include <intrins.h>                                              //��������
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
////	//�յ�ָ���
////	if(!gb_TD10ms_StatusSum){
////		gb_TD10ms_StatusSum = 2;
////		/*����*/
////		if((!TPIN_01) && (TPIN_02)){
////			if(++sb_Status1Sum > 10){//����0.2���ź�
////				sb_Status1Sum = 0xA1;
////			}
////		}
////		else{
////			if(sb_Status1Sum == 0xA1){
////				gb_TD10ms_WS2811_P1 = 0;//��ʱˢ�µƹ�Ч��
////				gb_TD10ms_WS2811_P2 = 0;//��ʱˢ�µƹ�Ч��
////				gb_TD10ms_WS2811_P3 = 0;//��ʱˢ�µƹ�Ч��
////				gb_TD10ms_WS2811_P4 = 0;//��ʱˢ�µƹ�Ч��
////			}
////			sb_Status1Sum = 0;
////		}
////		/*�н�*/
////		if((TPIN_01) && (!TPIN_02)){
////			if(++sb_Status2Sum > 10){
////				sb_Status2Sum = 0xA1;
////			}
////		}
////		else{
////			if(sb_Status2Sum == 0xA1){
////				gb_TD10ms_WS2811_P1 = 0;//��ʱˢ�µƹ�Ч��
////				gb_TD10ms_WS2811_P2 = 0;//��ʱˢ�µƹ�Ч��
////				gb_TD10ms_WS2811_P3 = 0;//��ʱˢ�µƹ�Ч��
////				gb_TD10ms_WS2811_P4 = 0;//��ʱˢ�µƹ�Ч��
////			}			
////			sb_Status2Sum = 0;
////		}
////		/*��Ϸ*/
////		if((TPIN_01) && (TPIN_02)){
////			if(++sb_Status3Sum > 10){
////				sb_Status3Sum = 0xA1;
////			}
////		}
////		else{
////			if(sb_Status3Sum == 0xA1){
////				gb_TD10ms_WS2811_P1 = 0;//��ʱˢ�µƹ�Ч��
////				gb_TD10ms_WS2811_P2 = 0;//��ʱˢ�µƹ�Ч��
////				gb_TD10ms_WS2811_P3 = 0;//��ʱˢ�µƹ�Ч��
////				gb_TD10ms_WS2811_P4 = 0;//��ʱˢ�µƹ�Ч��
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
���� 
	void main(void)
���� 
	������
���� 
	
����  
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
IO_Init();//�ӿڳ�ʼ��
Timer_Init();//��ʱ����ʼ��	
/*�ж��ܿ���*/
EA = 1;//���ж�	
ET0 = 1;//����ʱ��0�ж�
//ET1 = 1;//����ʱ��1�ж�
//IE2 |= 0x04;//����ʱ��2�ж�
WS2811_1P_En();//������ʼ��
WS2811_1P_En();//������ʼ��
WS2811_4P_En();//������ʼ��	
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
����
	void Timer0_1ms(void)				 
���� 	
	��ʱ��0,1Tģʽ,16λ�Զ���װ,1ms�ж�һ��,�����ȼ�
���� 

���� 
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
����
	void Timer1_10ms(void)				 
���� 	
	��ʱ��1,16λ�Զ���װ,10ms�ж�һ��,�����ȼ�
���� 

���� 
*/
void Timer1_10ms(void) interrupt TIMER1_VECTOR
{
//	if(gw_TD10ms_StyleChange)gw_TD10ms_StyleChange --;
}	
	