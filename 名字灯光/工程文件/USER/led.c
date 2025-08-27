#include "TP.h"
#include "led.h"
#include <intrins.h> 

extern u8 xdata gb_TD10ms_Check1;
extern u8 xdata gb_TD10ms_Check2;
extern u8 xdata gb_TD10ms_Check3;
extern u8 xdata gb_TD10ms_Check4;
extern u8 xdata gb_TD10ms_Check5;
extern u8 xdata gb_TD10ms_Check6;



/*==========================================================================================
���� 
	void WS2811_1P_Bit0()
���� 
	ָ��0
���� 
	
����  
*/
void WS2811_1P_Bit0(){
	u8 b_Cot = 0;
	P36 = 1;
	for(b_Cot = 0;b_Cot < 1;b_Cot ++){_nop_();}
//	_nop_();
	P36 = 0;
	for(b_Cot = 0;b_Cot < 3;b_Cot ++){_nop_();}
}
void WS2811_1P_Bit1(){
	u8 b_Cot = 0;
	P36 = 1;
	for(b_Cot = 0;b_Cot < 3;b_Cot ++){_nop_();}
	P36 = 0;	
//	_nop_();
	for(b_Cot = 0;b_Cot < 3;b_Cot ++){_nop_();}
}
void WS2811_1P_En(){
	u8 b_Cot = 0;
	P36 = 0;
	for(b_Cot = 0;b_Cot < 150;b_Cot ++){_nop_();_nop_();}
}
/*==========================================================================================
���� 
	void WS2811_2P_Bit0()
���� 
	ָ��0
���� 
	
����  
*/
void WS2811_2P_Bit0(){
	u8 b_Cot = 0;
	P37 = 1;
//	for(b_Cot = 0;b_Cot < 1;b_Cot ++){_nop_();}
	_nop_();
	P37 = 0;	
	for(b_Cot = 0;b_Cot < 3;b_Cot ++){_nop_();}
}
void WS2811_2P_Bit1(){
	u8 b_Cot = 0;
	P37 = 1;
	for(b_Cot = 0;b_Cot < 3;b_Cot ++){_nop_();}
	P37 = 0;	
	for(b_Cot = 0;b_Cot < 3;b_Cot ++){_nop_();}
}
void WS2811_2P_En(){
	u8 b_Cot = 0;
	P37 = 0;
	for(b_Cot = 0;b_Cot < 150;b_Cot ++){_nop_();_nop_();}
}
/*==========================================================================================
���� 
	void WS2811_3P_Bit0()
���� 
	ָ��0
���� 
	
����  
*/
void WS2811_3P_Bit0(){
	u8 b_Cot = 0;
	P10 = 1;
//	for(b_Cot = 0;b_Cot < 1;b_Cot ++){_nop_();}
	_nop_();
	P10 = 0;	
	for(b_Cot = 0;b_Cot < 3;b_Cot ++){_nop_();}
}
void WS2811_3P_Bit1(){
	u8 b_Cot = 0;
	P10 = 1;
	for(b_Cot = 0;b_Cot < 3;b_Cot ++){_nop_();}
	P10 = 0;	
	for(b_Cot = 0;b_Cot < 3;b_Cot ++){_nop_();}
}
void WS2811_3P_En(){
	u8 b_Cot = 0;
	P10 = 0;
	for(b_Cot = 0;b_Cot < 150;b_Cot ++){_nop_();_nop_();}
}
/*==========================================================================================
���� 
	void WS2811_4P_Bit0()
���� 
	ָ��0
���� 
	
����  
*/
void WS2811_4P_Bit0(){
	u8 b_Cot = 0;
	P11 = 1;
//	for(b_Cot = 0;b_Cot < 1;b_Cot ++){_nop_();}
	_nop_();
	P11 = 0;	
	for(b_Cot = 0;b_Cot < 3;b_Cot ++){_nop_();}
}
void WS2811_4P_Bit1(){
	u8 b_Cot = 0;
	P11 = 1;
	for(b_Cot = 0;b_Cot < 3;b_Cot ++){_nop_();}
	P11 = 0;	
	for(b_Cot = 0;b_Cot < 3;b_Cot ++){_nop_();}
}
void WS2811_4P_En(){
	u8 b_Cot = 0;
	P11 = 0;
	for(b_Cot = 0;b_Cot < 150;b_Cot ++){_nop_();_nop_();}
}

/*
�ƴ�
0xF000:��ɫ
0x0F00:��
0x00F0:��ɫ
Ģ����
0x0000FF:��ɫ
0x00FF00:��
0xFF0000:��ɫ
0x00FFFF:��ɫ
0x0061FF:��ɫ
0xF020A0:��ɫ
0xFFFF00:����ɫ
DF3501
��Ģ���ƺ����෴
*/

/*��д��*/
u32 code gpdw_White_high[]={
20,	
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,
0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF
};

u32 code gpdw_White_low[]={
20,	
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0x333333,0x333333,0x333333,0x333333,0x333333,0x333333,0x333333,0x333333,0x333333,0x333333,
0x333333,0x333333,0x333333,0x333333,0x333333,0x333333,0x333333,0x333333,0x333333,0x333333
};

u32 code gpdw_skyBule_low[]={
20,	
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,
0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00
};

u32 code gpdw_dark[]={
20,	
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,
0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000
};

/*Ģ����*/
u32 code gpdw_Mushroom_Colour_Star[]={
20,	
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x010101,0x050505,0x111111,0x222222,
0x444444,0x888888,0xFFFFFF,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000
};

u32 code gpdw_Mushroom_Colour_White[]={
20,	
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0x888888,0x888888,0x888888,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,
0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000,0x000000
};

u32 code gpdw_Mushroom_Colour_Blue[]={
12,	
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,
0x0000FF,0x0000FF,
};
u32 code gpdw_Mushroom_Colour_Greed[]={
12,	
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0x00FF00,0x00FF00,0x00FF00,0x00FF00,0x00FF00,0x00FF00,0x00FF00,0x00FF00,0x00FF00,0x00FF00,
0x00FF00,0x00FF00,
};
u32 code gpdw_Mushroom_Colour_Red[]={
12,		
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0xFF0000,0xFF0000,0xFF0000,0xFF0000,0xFF0000,0xFF0000,0xFF0000,0xFF0000,0xFF0000,0xFF0000,
0xFF0000,0xFF0000,	
};
u32 code gpdw_Mushroom_Colour_Rainbow[]={
6,		
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0xFF0000,0xFF6100,0xFFFF00,0x00FF00,0x4169E1,0xFF00FF,
};
u32 code gpdw_Colour_Gradual_Rainbow[]={
24,		
//1------2--------3--------4--------5--------6--------7--------8--------9--------10������

0x0000FF,0x0000FF,0x0000FF,0x0000FF,//
0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,//
0xFF0020,0xFF0020,0xFF0020,0xFF0020,//
0x0000FF,0x0000FF,0x0000FF,0x0000FF,//
0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,//
0xFF0020,0xFF0020,0xFF0020,0xFF0020,//	
};
u32 code gpdw_Colour_Gradual_Rainbow1[]={
24,		
//1------2--------3--------4--------5--------6--------7--------8--------9--------10������


0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,//
0xFF0000,0xFF0000,0xFF0000,0xFF0000,//
0x20FF00,0x20FF00,0x20FF00,0x20FF00,//

0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,//
0xFF0000,0xFF0000,0xFF0000,0xFF0000,//
0x20FF00,0x20FF00,0x20FF00,0x20FF00,//	
};

u32 code gpdw_Colour_Red_Yellow_Blue[]={
36,	
//1------2--------3--------4--------5--------6--------7--------8--------9--------10	
0xFF00FF,0xFF00FF,0xFF00FF,0xFF00FF,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0x00FFFF,0x00FFFF,
0x00FFFF,0x00FFFF,
0xFF00FF,0xFF00FF,0xFF00FF,0xFF00FF,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0x00FFFF,0x00FFFF,
0x00FFFF,0x00FFFF,
0xFF00FF,0xFF00FF,0xFF00FF,0xFF00FF,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0x00FFFF,0x00FFFF,
0x00FFFF,0x00FFFF,	
//	0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,
//	0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,
//	0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,
//	0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,0x0000FF,
//	0x0000FF,0x0000FF,0x0000FF,0xA020F0,
};
u32 code gpdw_Colour_White[]={
20,
//1------2--------3--------4--------5--------6--------7--------8--------9--------10	
0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,
0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,0xFFFFFF,	
};

u32 code gpdw_Colour_Red_Yellow_Blue_Gradual[]={
39,	
//1------2--------3--------4--------5--------6--------7--------8--------9--------10	
0xFF00FF,0xFF00FF,0xFF00FF,0xFF00FF,0xFF00FF,0xFF00FF,0xFF00FF,0xFF00FF,0xFF00FF,0xFF00FF,
0xFF40B0,0xFF8080,0xFFB040,
0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,
0xA0FF40,0x80FF80,0x40FFB0,
0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,0x00FFFF,
0x40A0FF,0x8080FF,0xB040FF,
};
u32 code gpdw_Mushroom_Colour_Bonus[]={
12,		
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0xFF0000,0xFF3000,0xFF6100,0xFFA000,0xFFFF00,0x80FF00,0x00FF00,0x20A060,0x4169E1,0x803080,
0xFF00FF,0xFF0080,	
};
//��0xFF0000,
//��0xFF6100,
//��0xFFFF00,
//��0x00FF00,
//��0x4169E1,
//��0xFF00FF,	
void WS2811_1P_1Led(u32 dw_Colour){
	u8  b_ColourBP = 0;
	u8  b_Cot = 0;
	//��
	b_ColourBP = (dw_Colour >> 8) & 0x0000FF;	
	for(b_Cot = 0;b_Cot < 8;b_Cot ++){
		if(b_ColourBP & 0x80)WS2811_1P_Bit1();
		else WS2811_1P_Bit0();
		b_ColourBP <<= 1;
	}		
	//��
	b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
	for(b_Cot = 0;b_Cot < 8;b_Cot ++){
		if(b_ColourBP & 0x80)WS2811_1P_Bit1();
		else WS2811_1P_Bit0();
		b_ColourBP <<= 1;
	}
	//��
		b_ColourBP = dw_Colour & 0x0000FF;	
	for(b_Cot = 0;b_Cot < 8;b_Cot ++){
		if(b_ColourBP & 0x80)WS2811_1P_Bit1();
		else WS2811_1P_Bit0();
		b_ColourBP <<= 1;
	}
}

void WS2811_2P_1Led(u8 b_Mode, u32 dw_Colour){
	u8  b_ColourBP = 0;
	u8  b_Cot = 0;
	if(b_Mode == 1){
		//��
		b_ColourBP = dw_Colour & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_2P_Bit1();
			else WS2811_2P_Bit0();
			b_ColourBP <<= 1;
		}
		//��
		b_ColourBP = (dw_Colour >> 8) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_2P_Bit1();
			else WS2811_2P_Bit0();
			b_ColourBP <<= 1;
		}	
		//��
		b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_2P_Bit1();
			else WS2811_2P_Bit0();
			b_ColourBP <<= 1;
		}
	}
	else if(b_Mode == 2){
		//��
		b_ColourBP = dw_Colour & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_2P_Bit1();
			else WS2811_2P_Bit0();
			b_ColourBP <<= 1;
		}
		//��
		b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_2P_Bit1();
			else WS2811_2P_Bit0();
			b_ColourBP <<= 1;
		}	
		//��
		b_ColourBP = (dw_Colour >> 8) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_2P_Bit1();
			else WS2811_2P_Bit0();
			b_ColourBP <<= 1;
		}	
		
	}
}


void WS2811_3P_1Led(u8 b_Mode, u32 dw_Colour){
	u8  b_ColourBP = 0;
	u8  b_Cot = 0;
	if(b_Mode == 1){
		//��
		b_ColourBP = dw_Colour & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_3P_Bit1();
			else WS2811_3P_Bit0();
			b_ColourBP <<= 1;
		}
		//��
		b_ColourBP = (dw_Colour >> 8) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_3P_Bit1();
			else WS2811_3P_Bit0();
			b_ColourBP <<= 1;
		}	
		//��
		b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_3P_Bit1();
			else WS2811_3P_Bit0();
			b_ColourBP <<= 1;
		}
	}	
	else if(b_Mode == 2){
		//��
		b_ColourBP = dw_Colour & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_3P_Bit1();
			else WS2811_3P_Bit0();
			b_ColourBP <<= 1;
		}
		//��
		b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_3P_Bit1();
			else WS2811_3P_Bit0();
			b_ColourBP <<= 1;
		}		
		//��
		b_ColourBP = (dw_Colour >> 8) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_3P_Bit1();
			else WS2811_3P_Bit0();
			b_ColourBP <<= 1;
		}	
	}
}

void WS2811_4P_1Led(u8 b_Mode, u32 dw_Colour){
	u8  b_ColourBP = 0;
	u8  b_Cot = 0;
	if(b_Mode == 1){
		//��
		b_ColourBP = dw_Colour & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_4P_Bit1();
			else WS2811_4P_Bit0();
			b_ColourBP <<= 1;
		}
		//��
		b_ColourBP = (dw_Colour >> 8) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_4P_Bit1();
			else WS2811_4P_Bit0();
			b_ColourBP <<= 1;
		}	
		//��
		b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_4P_Bit1();
			else WS2811_4P_Bit0();
			b_ColourBP <<= 1;
		}
	}
	else if(b_Mode == 2){
		//��
		b_ColourBP = dw_Colour & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_4P_Bit1();
			else WS2811_4P_Bit0();
			b_ColourBP <<= 1;
		}
		//��
		b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_4P_Bit1();
			else WS2811_4P_Bit0();
			b_ColourBP <<= 1;
		}		
		//��
		b_ColourBP = (dw_Colour >> 8) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_4P_Bit1();
			else WS2811_4P_Bit0();
			b_ColourBP <<= 1;
		}	
	}
}

void WS2811_Loop_RtoL_P1(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle, u8 *b_Reset_F){  
  static u16 sw_LedCot = 0;//��ʽ�ļ���
	u16 xdata w_Cot = 0;
	u16 xdata w_LedAddr = 0;
	u16 xdata w_LedMax = (*pdw_ColourStyle);//����ƻ�ʽ�� ������,���ǵƴ��ĵ�����
	/*��ʽ��������*/
  EA = 0;
	for(w_Cot = 0;w_Cot < b_LedLength;w_Cot ++){//����ĵƹ�ָ��
		w_LedAddr = w_Cot + sw_LedCot;
		w_LedAddr %= w_LedMax;	
    WS2811_1P_1Led(*(pdw_ColourStyle + w_LedAddr + 1));
	}
  WS2811_1P_En(); 
	EA = 1;  
	if(++sw_LedCot >= w_LedMax){//���ε���Ե�ַ
		sw_LedCot = 0;
	}
}

void WS2811_Loop_LtoR_P1(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle, u8 *b_Reset_F){
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = b_FirstAddr - 1;        
	}
	EA = 0;
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
			b_LedAddr = 1 + b_Cot + sb_LedCot;
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ���
					b_LedAddr %= (u8)(*pdw_ColourStyle);
			}
			WS2811_1P_1Led(*(pdw_ColourStyle + b_LedAddr));
	}
	WS2811_1P_En(); 
	EA = 1;
	if(sb_LedCot == 0){
		sb_LedCot = (u8)(*pdw_ColourStyle) - 1;//���ֵ-1 ��Ϊ��ʼֵ��0
	}
	else sb_LedCot --;
}
void WS2811_Loop_LtoR_P2(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle, u8 *b_Reset_F){
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = b_FirstAddr - 1;        
	}
	EA = 0;
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
			b_LedAddr = 1 + b_Cot + sb_LedCot;
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ���
					b_LedAddr %= (u8)(*pdw_ColourStyle);
			}
			WS2811_2P_1Led(2, *(pdw_ColourStyle + b_LedAddr));
	}
	WS2811_2P_En(); 
	EA = 1;
	if(sb_LedCot == 0){
		sb_LedCot = (u8)(*pdw_ColourStyle) - 1;//���ֵ-1 ��Ϊ��ʼֵ��0
	}
	else sb_LedCot --;
}
void WS2811_Loop_LtoR_P3(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle, u8 *b_Reset_F){
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = b_FirstAddr - 1;        
	}
	EA = 0;
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
			b_LedAddr = 1 + b_Cot + sb_LedCot;
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ���
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			WS2811_3P_1Led(2, *(pdw_ColourStyle + b_LedAddr));
	}
	WS2811_3P_En(); 
	EA = 1;
	if(sb_LedCot == 0){
		sb_LedCot = (u8)(*pdw_ColourStyle) - 1;//���ֵ-1 ��Ϊ��ʼֵ��0
	}
	else sb_LedCot --;
}
void WS2811_Loop_LtoR_P4(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle, u8 *b_Reset_F){
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = b_FirstAddr - 1;        
	}
	EA = 0;
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
			b_LedAddr = 1 + b_Cot + sb_LedCot;
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ���
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));
	}
	WS2811_4P_En(); 
	EA = 1;
	if(sb_LedCot == 0){
		sb_LedCot = (u8)(*pdw_ColourStyle) - 1;//���ֵ-1 ��Ϊ��ʼֵ��0
	}
	else sb_LedCot --;
}

void WS2811_All_Gradual_P1(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F){
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedCot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = 1;        
	}
	EA = 0;//�жϹ�
	b_LedAddr = 1 + sb_LedCot;
	if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ���
			b_LedAddr -= (u8)(*pdw_ColourStyle);
	}
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
		WS2811_1P_1Led(*(pdw_ColourStyle + b_LedAddr));//�������ٸ���ͬһ����ɫ
	}
	WS2811_1P_En(); 
	EA = 1;
	sb_LedCot += 1;//ÿ�����ӵĵ�λ��
	if(sb_LedCot >= (*pdw_ColourStyle)){
		sb_LedCot = 0;//��Ϊ��ʼֵ��0
	}
}
void WS2811_All_Gradual_P2(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F){
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedCot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = 1;        
	}
	EA = 0;
	b_LedAddr = 1 + sb_LedCot;
	if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ���
			b_LedAddr -= (u8)(*pdw_ColourStyle);
	}
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
		WS2811_2P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//�������ٸ���ͬһ����ɫ
	}
	WS2811_2P_En(); 
	EA = 1;
	sb_LedCot += 1;//ÿ�����ӵĵ�λ��
	if(sb_LedCot >= (*pdw_ColourStyle)){
		sb_LedCot = 0;//��Ϊ��ʼֵ��0
	}
}
void WS2811_All_Gradual_P3(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F){
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedCot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = 1;        
	}
	EA = 0;
	b_LedAddr = 1 + sb_LedCot;
	if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ���
			b_LedAddr -= (u8)(*pdw_ColourStyle);
	}
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
		WS2811_3P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//�������ٸ���ͬһ����ɫ
	}
	WS2811_3P_En(); 
	EA = 1;
	sb_LedCot += 1;//ÿ�����ӵĵ�λ��
	if(sb_LedCot >= (*pdw_ColourStyle)){
		sb_LedCot = 0;//��Ϊ��ʼֵ��0
	}
}
void WS2811_All_Gradual_P4(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F){
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedCot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = 1;        
	}
	EA = 0;
	b_LedAddr = 1 + sb_LedCot;
	if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ���
			b_LedAddr -= (u8)(*pdw_ColourStyle);
	}
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
		WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//�������ٸ���ͬһ����ɫ
	}
	WS2811_4P_En(); 
	EA = 1;
	sb_LedCot += 1;//ÿ�����ӵĵ�λ��
	if(sb_LedCot >= (*pdw_ColourStyle)){
		sb_LedCot = 0;//��Ϊ��ʼֵ��0
	}
}
u32 code gpdw_Mushroom_Blink_Red[]={
10,		
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0xFF0000,0xBB0000,0x990000,0x770000,0x330000,0x000000,0x330000,0x770000,0x990000,0xBB0000,
};
u32 code gpdw_Mushroom_Blink_Orange[]={
10,		
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0xFF6100,0xBB5000,0x994000,0x772000,0x331000,0x000000,0x331000,0x772000,0x994000,0xBB5000,	
};
u32 code gpdw_Mushroom_Blink_Yellow[]={
10,		
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0xFFFF00,0xBBBB00,0x999900,0x777700,0x333300,0x000000,0x333300,0x777700,0x999900,0xBBBB00,	
};
u32 code gpdw_Mushroom_Blink_Greed[]={
10,		
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0x00FF00,0x00BB00,0x009900,0x007700,0x003300,0x000000,0x003300,0x007700,0x009900,0x00BB00,	
};
u32 code gpdw_Mushroom_Blink_Blue[]={
10,		
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0x4169E1,0x3060C0,0x204090,0x102050,0x081025,0x000000,0x081025,0x102050,0x204090,0x3060C0,	
};
u32 code gpdw_Mushroom_Blink_Purple[]={
10,		
//1------2--------3--------4--------5--------6--------7--------8--------9--------10
0xFF00FF,0xBB00BB,0x990099,0x770077,0x330033,0x000000,0x330033,0x770077,0x990099,0xBB00BB,	
};


//��̬��ʾ����仯
void WS2811_Static_P1(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle){
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	EA = 0;
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
			b_LedAddr = 1 + b_Cot + b_FirstAddr - 1;
			WS2811_1P_1Led(*(pdw_ColourStyle + b_LedAddr));
	}
	WS2811_1P_En(); 
	EA = 1;
}
void WS2811_Static_P2(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle){
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	EA = 0;
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
			b_LedAddr = 1 + b_Cot + b_FirstAddr - 1;
			WS2811_2P_1Led(2, *(pdw_ColourStyle + b_LedAddr));
	}
	WS2811_2P_En(); 
	EA = 1;
}
void WS2811_Static_P3(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle){
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	EA = 0;
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
			b_LedAddr = 1 + b_Cot + b_FirstAddr - 1;
			WS2811_3P_1Led(2, *(pdw_ColourStyle + b_LedAddr));
	}
	WS2811_3P_En(); 
	EA = 1;
}
void WS2811_Static_P4(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle){
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	EA = 0;
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
			b_LedAddr = 1 + b_Cot + b_FirstAddr - 1;
			WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));
	}
	WS2811_4P_En(); 
	EA = 1;
}

void WS2811_Loop_6Led_P1(u8 *b_Reset_F){
	static u8 sb_Led1Addr = 0;
	static u8 sb_Led2Addr = 0;
	static u8 sb_Led3Addr = 0;
	static u8 sb_Led4Addr = 0;
	static u8 sb_Led5Addr = 0;
	static u8 sb_Led6Addr = 0;
	static u8 sb_Led1Cot = 0;
	static u8 sb_Led2Cot = 0;
	static u8 sb_Led3Cot = 0;
	static u8 sb_Led4Cot = 0;
	static u8 sb_Led5Cot = 0;
	static u8 sb_Led6Cot = 0;
	static u8 sb_Led1Sum = 0;
	static u8 sb_Led2Sum = 0;
	static u8 sb_Led3Sum = 0;
	static u8 sb_Led4Sum = 0;
	static u8 sb_Led5Sum = 0;
	static u8 sb_Led6Sum = 0;	
	EA = 0;//ֹͣ�ж�	
	/*��1*/
	if(gb_TD10ms_Check1){//��˸״̬
		sb_Led1Addr = 1 + sb_Led1Cot;
		if(sb_Led1Addr > 10){//�����׸��ǳ���
			sb_Led1Addr -= 10;
		}
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Red[sb_Led1Addr]);
		sb_Led1Cot += 1;//ÿ�����ӵĵ�λ��
		if(sb_Led1Cot >= 10){
			sb_Led1Cot = 0;//��Ϊ��ʼֵ��0
			if(++sb_Led1Sum >= 2){
				sb_Led1Sum = 0;
				gb_TD10ms_Check1 = 0;
			}
		}		
	}
	else{
		sb_Led1Cot = 0;
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Red[1]);
	}
	/*��2*/
	if(gb_TD10ms_Check2){//��˸״̬
		sb_Led2Addr = 1 + sb_Led2Cot;
		if(sb_Led2Addr > 10){//�����׸��ǳ���
			sb_Led2Addr -= 10;
		}
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Purple[sb_Led2Addr]);
		sb_Led2Cot += 1;//ÿ�����ӵĵ�λ��
		if(sb_Led2Cot >= 10){
			sb_Led2Cot = 0;//��Ϊ��ʼֵ��0
			if(++sb_Led2Sum >= 2){
				sb_Led2Sum = 0;
				gb_TD10ms_Check2 = 0;
			}			
		}		
	}
	else{
		sb_Led2Cot = 0;
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Purple[1]);
	}	
	/*��3*/
	if(gb_TD10ms_Check3){//��˸״̬
		sb_Led3Addr = 1 + sb_Led3Cot;
		if(sb_Led3Addr > 10){//�����׸��ǳ���
			sb_Led3Addr -= 10;
		}
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Blue[sb_Led3Addr]);
		sb_Led3Cot += 1;//ÿ�����ӵĵ�λ��
		if(sb_Led3Cot >= 10){
			sb_Led3Cot = 0;//��Ϊ��ʼֵ��0
			if(++sb_Led3Sum >= 2){
				sb_Led3Sum = 0;
				gb_TD10ms_Check3 = 0;
			}			
		}		
	}
	else{
		sb_Led3Cot = 0;
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Blue[1]);
	}	
	/*��4��*/
	if(gb_TD10ms_Check4){//��˸״̬
		sb_Led4Addr = 1 + sb_Led4Cot;
		if(sb_Led4Addr > 10){//�����׸��ǳ���
			sb_Led4Addr -= 10;
		}
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Greed[sb_Led4Addr]);
		sb_Led4Cot += 1;//ÿ�����ӵĵ�λ��
		if(sb_Led4Cot >= 10){
			sb_Led4Cot = 0;//��Ϊ��ʼֵ��0
			if(++sb_Led4Sum >= 2){
				sb_Led4Sum = 0;
				gb_TD10ms_Check4 = 0;
			}			
		}		
	}
	else{
		sb_Led4Cot = 0;
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Greed[1]);
	}		
	/*��5��*/
	if(gb_TD10ms_Check5){//��˸״̬
		sb_Led5Addr = 1 + sb_Led5Cot;
		if(sb_Led5Addr > 10){//�����׸��ǳ���
			sb_Led5Addr -= 10;
		}
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Yellow[sb_Led5Addr]);
		sb_Led5Cot += 1;//ÿ�����ӵĵ�λ��
		if(sb_Led5Cot >= 10){
			sb_Led5Cot = 0;//��Ϊ��ʼֵ��0
			if(++sb_Led5Sum >= 2){
				sb_Led5Sum = 0;
				gb_TD10ms_Check5 = 0;
			}			
		}		
	}
	else{
		sb_Led5Cot = 0;
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Yellow[1]);
	}
	
	/*��6��*/
	if(gb_TD10ms_Check6){//��˸״̬
		sb_Led6Addr = 1 + sb_Led6Cot;
		if(sb_Led6Addr > 10){//�����׸��ǳ���
			sb_Led6Addr -= 10;
		}
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Orange[sb_Led6Addr]);
		sb_Led6Cot += 1;//ÿ�����ӵĵ�λ��
		if(sb_Led6Cot >= 10){
			sb_Led6Cot = 0;//��Ϊ��ʼֵ��0
			if(++sb_Led6Sum >= 2){
				sb_Led6Sum = 0;
				gb_TD10ms_Check6 = 0;
			}			
		}		
	}
	else{
		sb_Led6Cot = 0;
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Orange[1]);
	}	
	WS2811_1P_En(); 
	EA = 1;	
}

void WS2811_Loop_kai_P4(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F){
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = 0;        
	}
	EA = 0;
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
			b_LedAddr = 1 + b_Cot;
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ���
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			if((b_Cot+1) < sb_LedCot)
			WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));
			else WS2811_4P_1Led(2, 0x000000);
	}
	WS2811_4P_En(); 
	EA = 1;
	if(sb_LedCot == b_LedLength){
		sb_LedCot = 0;//���ֵ-1 ��Ϊ��ʼֵ��0
	}
	else sb_LedCot ++;
}


/*
void WS2811_Loop_guan_P4(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F)
Ч�����ƹ�����䰵������һ����һ����
b_LedLength���ƹⳤ��
pdw_ColourStyle���ƹ�Ч����ɫ
b_Reset_F����λ����1��λ����λ���ٴε��ô�ȫ����ʼ��
*/
void WS2811_Loop_guan_P4(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F){
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){//b_Reset_F��1��λ
		(*b_Reset_F) = 0;
		sb_LedCot = 0;        
	}
	EA = 0;					//��ס�жϣ���ֹ�жϴ��ҵƹ��ź����ݷ���
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){//ѭ��b_LedLength�Σ����ƹ�Ч�����ȴ�
			b_LedAddr = 1 + b_Cot;
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ��ȣ�������������ص������һλ
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			if((b_Cot+1) < sb_LedCot)//������ѭ������С�ں������д�����������ź�
				WS2811_4P_1Led(2, 0x000000);			
			else WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//��������
	}
	WS2811_4P_En(); 																//�ƹ��źŽ���
	EA = 1;																				//�����ж�
	if(sb_LedCot == b_LedLength){ //�������ô��������ƹⳤ��ֵ0���ƹ�Ч�����¿�ʼ
		sb_LedCot = 0;//���ֵ-1 ��Ϊ��ʼֵ��0
	}
	else sb_LedCot ++;//����������һ�μ�1
}
/*
void WS2811_blood_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F)
������
		b_LedLength:�ƹ�Ч�����ܳ�
		b_DarkLength:�ƹ�Ч���кڰ�����ռ�ĳ���
		pdw_ColourStyle::����Ч��
*/

void WS2811_blood_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F){//˳�����
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = 0;        
	}
	EA = 0;																	//��ס�жϣ���ֹ�жϴ��ҵƹ��ź����ݷ���
	b_LedLength=b_LedLength-b_DarkLength;//����������
		for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){//ѭ����������ɫ���ȴ�
			b_LedAddr = 1 + b_Cot;								//�Ƶ�λ��
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ��ȣ�����������鳤�ȣ��ص�����ͷ
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//��ֵ��
	}
	for(b_Cot = 0; b_Cot < b_DarkLength; b_Cot++){//ѭ���ڰ��ƴ�
			b_LedAddr = 1 + b_Cot;
			if(b_LedAddr > (u8)(*gpdw_dark)){//�����׸��ǳ��ȣ�����������鳤�ȣ��ص�����ͷ
					b_LedAddr -= (u8)(*gpdw_dark);
			}
			WS2811_4P_1Led(2, *(gpdw_dark + b_LedAddr));
			
	}
	WS2811_4P_En(); 					//�ƹ��źŽ���
	EA = 1;										//�����ж�
//	if(sb_LedCot == b_LedLength){
//		sb_LedCot = 0;//���ֵ-1 ��Ϊ��ʼֵ��0
//	}
//	else sb_LedCot ++;
}

/*������
void WS2811_blood_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F)

		b_LedLength:�ƹ�Ч�����ܳ�
		b_DarkLength:�ƹ�Ч���кڰ�����ռ�ĳ���
		pdw_ColourStyle::����Ч��
*/

void WS2811_blood1_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F){//˳�����
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = 0;        
	}
	EA = 0;																	//��ס�жϣ���ֹ�жϴ��ҵƹ��ź����ݷ���
	b_LedLength=b_LedLength-b_DarkLength;//����������
		for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){//ѭ����������ɫ���ȴ�
			b_LedAddr = 1 + b_Cot;								//�Ƶ�λ��
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ��ȣ�����������鳤�ȣ��ص�����ͷ
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//��ֵ��
	}
	for(b_Cot = 0; b_Cot < b_DarkLength; b_Cot++){//ѭ���ڰ��ƴ�
			b_LedAddr = 1 + b_Cot;
			if(b_LedAddr > (u8)(*gpdw_White_low)){//�����׸��ǳ��ȣ�����������鳤�ȣ��ص�����ͷ
					b_LedAddr -= (u8)(*gpdw_White_low);
			}
			WS2811_4P_1Led(2, *(gpdw_White_low + b_LedAddr));
			
	}
	WS2811_4P_En(); 					//�ƹ��źŽ���
	EA = 1;										//�����ж�
//	if(sb_LedCot == b_LedLength){
//		sb_LedCot = 0;//���ֵ-1 ��Ϊ��ʼֵ��0
//	}
//	else sb_LedCot ++;
}

/*
void WS2811_shuiliu_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F)
������
		b_LedLength:�ƹ�Ч�����ܳ�
		b_DarkLength:�ƹ�Ч���кڰ�����ռ�ĳ���
		pdw_ColourStyle::����Ч��
*/

void WS2811_shuiliu_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F){//˳�����
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = 0;        
	}
	EA = 0;																	//��ס�жϣ���ֹ�жϴ��ҵƹ��ź����ݷ���
	b_LedLength=b_LedLength-b_DarkLength;//����������
		for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){//ѭ����������ɫ���ȴ�
			b_LedAddr = 1 + b_Cot;								//�Ƶ�λ��
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//�����׸��ǳ��ȣ�����������鳤�ȣ��ص�����ͷ
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//��ֵ��
	}
	for(b_Cot = 0; b_Cot < b_DarkLength; b_Cot++){//ѭ���ڰ��ƴ�
			b_LedAddr = 1 + b_Cot;
			if(b_LedAddr > (u8)(*gpdw_dark)){//�����׸��ǳ��ȣ�����������鳤�ȣ��ص�����ͷ
					b_LedAddr -= (u8)(*gpdw_dark);
			}
			WS2811_4P_1Led(2, *(gpdw_dark + b_LedAddr));
			
	}
	WS2811_4P_En(); 					//�ƹ��źŽ���
	EA = 1;										//�����ж�
}
