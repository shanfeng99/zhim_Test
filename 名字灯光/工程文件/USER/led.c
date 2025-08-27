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
函数 
	void WS2811_1P_Bit0()
描述 
	指令0
参数 
	
返回  
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
函数 
	void WS2811_2P_Bit0()
描述 
	指令0
参数 
	
返回  
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
函数 
	void WS2811_3P_Bit0()
描述 
	指令0
参数 
	
返回  
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
函数 
	void WS2811_4P_Bit0()
描述 
	指令0
参数 
	
返回  
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
灯带
0xF000:蓝色
0x0F00:红
0x00F0:绿色
蘑菇灯
0x0000FF:红色
0x00FF00:绿
0xFF0000:蓝色
0x00FFFF:黄色
0x0061FF:橙色
0xF020A0:紫色
0xFFFF00:天蓝色
DF3501
与蘑菇灯红绿相反
*/

/*自写灯*/
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

/*蘑菇灯*/
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
//1------2--------3--------4--------5--------6--------7--------8--------9--------10红绿蓝

0x0000FF,0x0000FF,0x0000FF,0x0000FF,//
0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,//
0xFF0020,0xFF0020,0xFF0020,0xFF0020,//
0x0000FF,0x0000FF,0x0000FF,0x0000FF,//
0xFFFF00,0xFFFF00,0xFFFF00,0xFFFF00,//
0xFF0020,0xFF0020,0xFF0020,0xFF0020,//	
};
u32 code gpdw_Colour_Gradual_Rainbow1[]={
24,		
//1------2--------3--------4--------5--------6--------7--------8--------9--------10蓝红绿


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
//红0xFF0000,
//橙0xFF6100,
//黄0xFFFF00,
//绿0x00FF00,
//蓝0x4169E1,
//紫0xFF00FF,	
void WS2811_1P_1Led(u32 dw_Colour){
	u8  b_ColourBP = 0;
	u8  b_Cot = 0;
	//绿
	b_ColourBP = (dw_Colour >> 8) & 0x0000FF;	
	for(b_Cot = 0;b_Cot < 8;b_Cot ++){
		if(b_ColourBP & 0x80)WS2811_1P_Bit1();
		else WS2811_1P_Bit0();
		b_ColourBP <<= 1;
	}		
	//红
	b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
	for(b_Cot = 0;b_Cot < 8;b_Cot ++){
		if(b_ColourBP & 0x80)WS2811_1P_Bit1();
		else WS2811_1P_Bit0();
		b_ColourBP <<= 1;
	}
	//蓝
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
		//红
		b_ColourBP = dw_Colour & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_2P_Bit1();
			else WS2811_2P_Bit0();
			b_ColourBP <<= 1;
		}
		//绿
		b_ColourBP = (dw_Colour >> 8) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_2P_Bit1();
			else WS2811_2P_Bit0();
			b_ColourBP <<= 1;
		}	
		//蓝
		b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_2P_Bit1();
			else WS2811_2P_Bit0();
			b_ColourBP <<= 1;
		}
	}
	else if(b_Mode == 2){
		//红
		b_ColourBP = dw_Colour & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_2P_Bit1();
			else WS2811_2P_Bit0();
			b_ColourBP <<= 1;
		}
		//蓝
		b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_2P_Bit1();
			else WS2811_2P_Bit0();
			b_ColourBP <<= 1;
		}	
		//绿
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
		//红
		b_ColourBP = dw_Colour & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_3P_Bit1();
			else WS2811_3P_Bit0();
			b_ColourBP <<= 1;
		}
		//绿
		b_ColourBP = (dw_Colour >> 8) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_3P_Bit1();
			else WS2811_3P_Bit0();
			b_ColourBP <<= 1;
		}	
		//蓝
		b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_3P_Bit1();
			else WS2811_3P_Bit0();
			b_ColourBP <<= 1;
		}
	}	
	else if(b_Mode == 2){
		//红
		b_ColourBP = dw_Colour & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_3P_Bit1();
			else WS2811_3P_Bit0();
			b_ColourBP <<= 1;
		}
		//蓝
		b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_3P_Bit1();
			else WS2811_3P_Bit0();
			b_ColourBP <<= 1;
		}		
		//绿
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
		//红
		b_ColourBP = dw_Colour & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_4P_Bit1();
			else WS2811_4P_Bit0();
			b_ColourBP <<= 1;
		}
		//绿
		b_ColourBP = (dw_Colour >> 8) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_4P_Bit1();
			else WS2811_4P_Bit0();
			b_ColourBP <<= 1;
		}	
		//蓝
		b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_4P_Bit1();
			else WS2811_4P_Bit0();
			b_ColourBP <<= 1;
		}
	}
	else if(b_Mode == 2){
		//红
		b_ColourBP = dw_Colour & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_4P_Bit1();
			else WS2811_4P_Bit0();
			b_ColourBP <<= 1;
		}
		//蓝
		b_ColourBP = (dw_Colour >> 16) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_4P_Bit1();
			else WS2811_4P_Bit0();
			b_ColourBP <<= 1;
		}		
		//绿
		b_ColourBP = (dw_Colour >> 8) & 0x0000FF;	
		for(b_Cot = 0;b_Cot < 8;b_Cot ++){
			if(b_ColourBP & 0x80)WS2811_4P_Bit1();
			else WS2811_4P_Bit0();
			b_ColourBP <<= 1;
		}	
	}
}

void WS2811_Loop_RtoL_P1(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle, u8 *b_Reset_F){  
  static u16 sw_LedCot = 0;//花式的计数
	u16 xdata w_Cot = 0;
	u16 xdata w_LedAddr = 0;
	u16 xdata w_LedMax = (*pdw_ColourStyle);//这个灯花式的 灯总数,不是灯带的灯总数
	/*花式向里面走*/
  EA = 0;
	for(w_Cot = 0;w_Cot < b_LedLength;w_Cot ++){//输出的灯光指令
		w_LedAddr = w_Cot + sw_LedCot;
		w_LedAddr %= w_LedMax;	
    WS2811_1P_1Led(*(pdw_ColourStyle + w_LedAddr + 1));
	}
  WS2811_1P_En(); 
	EA = 1;  
	if(++sw_LedCot >= w_LedMax){//本次的相对地址
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
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度
					b_LedAddr %= (u8)(*pdw_ColourStyle);
			}
			WS2811_1P_1Led(*(pdw_ColourStyle + b_LedAddr));
	}
	WS2811_1P_En(); 
	EA = 1;
	if(sb_LedCot == 0){
		sb_LedCot = (u8)(*pdw_ColourStyle) - 1;//最大值-1 因为开始值是0
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
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度
					b_LedAddr %= (u8)(*pdw_ColourStyle);
			}
			WS2811_2P_1Led(2, *(pdw_ColourStyle + b_LedAddr));
	}
	WS2811_2P_En(); 
	EA = 1;
	if(sb_LedCot == 0){
		sb_LedCot = (u8)(*pdw_ColourStyle) - 1;//最大值-1 因为开始值是0
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
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			WS2811_3P_1Led(2, *(pdw_ColourStyle + b_LedAddr));
	}
	WS2811_3P_En(); 
	EA = 1;
	if(sb_LedCot == 0){
		sb_LedCot = (u8)(*pdw_ColourStyle) - 1;//最大值-1 因为开始值是0
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
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));
	}
	WS2811_4P_En(); 
	EA = 1;
	if(sb_LedCot == 0){
		sb_LedCot = (u8)(*pdw_ColourStyle) - 1;//最大值-1 因为开始值是0
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
	EA = 0;//中断关
	b_LedAddr = 1 + sb_LedCot;
	if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度
			b_LedAddr -= (u8)(*pdw_ColourStyle);
	}
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
		WS2811_1P_1Led(*(pdw_ColourStyle + b_LedAddr));//连续多少个灯同一个颜色
	}
	WS2811_1P_En(); 
	EA = 1;
	sb_LedCot += 1;//每次增加的灯位置
	if(sb_LedCot >= (*pdw_ColourStyle)){
		sb_LedCot = 0;//因为开始值是0
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
	if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度
			b_LedAddr -= (u8)(*pdw_ColourStyle);
	}
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
		WS2811_2P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//连续多少个灯同一个颜色
	}
	WS2811_2P_En(); 
	EA = 1;
	sb_LedCot += 1;//每次增加的灯位置
	if(sb_LedCot >= (*pdw_ColourStyle)){
		sb_LedCot = 0;//因为开始值是0
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
	if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度
			b_LedAddr -= (u8)(*pdw_ColourStyle);
	}
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
		WS2811_3P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//连续多少个灯同一个颜色
	}
	WS2811_3P_En(); 
	EA = 1;
	sb_LedCot += 1;//每次增加的灯位置
	if(sb_LedCot >= (*pdw_ColourStyle)){
		sb_LedCot = 0;//因为开始值是0
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
	if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度
			b_LedAddr -= (u8)(*pdw_ColourStyle);
	}
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){
		WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//连续多少个灯同一个颜色
	}
	WS2811_4P_En(); 
	EA = 1;
	sb_LedCot += 1;//每次增加的灯位置
	if(sb_LedCot >= (*pdw_ColourStyle)){
		sb_LedCot = 0;//因为开始值是0
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


//静态显示不会变化
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
	EA = 0;//停止中断	
	/*灯1*/
	if(gb_TD10ms_Check1){//闪烁状态
		sb_Led1Addr = 1 + sb_Led1Cot;
		if(sb_Led1Addr > 10){//数组首个是长度
			sb_Led1Addr -= 10;
		}
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Red[sb_Led1Addr]);
		sb_Led1Cot += 1;//每次增加的灯位置
		if(sb_Led1Cot >= 10){
			sb_Led1Cot = 0;//因为开始值是0
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
	/*灯2*/
	if(gb_TD10ms_Check2){//闪烁状态
		sb_Led2Addr = 1 + sb_Led2Cot;
		if(sb_Led2Addr > 10){//数组首个是长度
			sb_Led2Addr -= 10;
		}
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Purple[sb_Led2Addr]);
		sb_Led2Cot += 1;//每次增加的灯位置
		if(sb_Led2Cot >= 10){
			sb_Led2Cot = 0;//因为开始值是0
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
	/*灯3*/
	if(gb_TD10ms_Check3){//闪烁状态
		sb_Led3Addr = 1 + sb_Led3Cot;
		if(sb_Led3Addr > 10){//数组首个是长度
			sb_Led3Addr -= 10;
		}
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Blue[sb_Led3Addr]);
		sb_Led3Cot += 1;//每次增加的灯位置
		if(sb_Led3Cot >= 10){
			sb_Led3Cot = 0;//因为开始值是0
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
	/*灯4绿*/
	if(gb_TD10ms_Check4){//闪烁状态
		sb_Led4Addr = 1 + sb_Led4Cot;
		if(sb_Led4Addr > 10){//数组首个是长度
			sb_Led4Addr -= 10;
		}
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Greed[sb_Led4Addr]);
		sb_Led4Cot += 1;//每次增加的灯位置
		if(sb_Led4Cot >= 10){
			sb_Led4Cot = 0;//因为开始值是0
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
	/*灯5蓝*/
	if(gb_TD10ms_Check5){//闪烁状态
		sb_Led5Addr = 1 + sb_Led5Cot;
		if(sb_Led5Addr > 10){//数组首个是长度
			sb_Led5Addr -= 10;
		}
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Yellow[sb_Led5Addr]);
		sb_Led5Cot += 1;//每次增加的灯位置
		if(sb_Led5Cot >= 10){
			sb_Led5Cot = 0;//因为开始值是0
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
	
	/*灯6紫*/
	if(gb_TD10ms_Check6){//闪烁状态
		sb_Led6Addr = 1 + sb_Led6Cot;
		if(sb_Led6Addr > 10){//数组首个是长度
			sb_Led6Addr -= 10;
		}
		WS2811_1P_1Led(gpdw_Mushroom_Blink_Orange[sb_Led6Addr]);
		sb_Led6Cot += 1;//每次增加的灯位置
		if(sb_Led6Cot >= 10){
			sb_Led6Cot = 0;//因为开始值是0
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
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			if((b_Cot+1) < sb_LedCot)
			WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));
			else WS2811_4P_1Led(2, 0x000000);
	}
	WS2811_4P_En(); 
	EA = 1;
	if(sb_LedCot == b_LedLength){
		sb_LedCot = 0;//最大值-1 因为开始值是0
	}
	else sb_LedCot ++;
}


/*
void WS2811_Loop_guan_P4(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F)
效果：灯光逐个变暗，调用一次灭一个灯
b_LedLength：灯光长度
pdw_ColourStyle：灯光效果颜色
b_Reset_F：复位；置1复位（复位后再次调用从全亮开始）
*/
void WS2811_Loop_guan_P4(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F){
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){//b_Reset_F置1复位
		(*b_Reset_F) = 0;
		sb_LedCot = 0;        
	}
	EA = 0;					//锁住中断，防止中断打乱灯光信号数据发送
	for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){//循环b_LedLength次，即灯光效果长度次
			b_LedAddr = 1 + b_Cot;
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度，若长于数组则回到数组第一位
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			if((b_Cot+1) < sb_LedCot)//函数内循环次数小于函数运行次数发送灭灯信号
				WS2811_4P_1Led(2, 0x000000);			
			else WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//其他亮灯
	}
	WS2811_4P_En(); 																//灯光信号结束
	EA = 1;																				//重启中断
	if(sb_LedCot == b_LedLength){ //函数调用次数超过灯光长度值0，灯光效果重新开始
		sb_LedCot = 0;//最大值-1 因为开始值是0
	}
	else sb_LedCot ++;//函数被调用一次加1
}
/*
void WS2811_blood_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F)
参数：
		b_LedLength:灯光效果的总长
		b_DarkLength:灯光效果中黑暗部分占的长度
		pdw_ColourStyle::亮灯效果
*/

void WS2811_blood_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F){//顺序点亮
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = 0;        
	}
	EA = 0;																	//锁住中断，防止中断打乱灯光信号数据发送
	b_LedLength=b_LedLength-b_DarkLength;//计算亮灯数
		for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){//循环亮参数颜色长度次
			b_LedAddr = 1 + b_Cot;								//灯的位置
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度，如果大于数组长度，回到数组头
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//赋值灯
	}
	for(b_Cot = 0; b_Cot < b_DarkLength; b_Cot++){//循环黑暗灯次
			b_LedAddr = 1 + b_Cot;
			if(b_LedAddr > (u8)(*gpdw_dark)){//数组首个是长度，如果大于数组长度，回到数组头
					b_LedAddr -= (u8)(*gpdw_dark);
			}
			WS2811_4P_1Led(2, *(gpdw_dark + b_LedAddr));
			
	}
	WS2811_4P_En(); 					//灯光信号结束
	EA = 1;										//重启中断
//	if(sb_LedCot == b_LedLength){
//		sb_LedCot = 0;//最大值-1 因为开始值是0
//	}
//	else sb_LedCot ++;
}

/*参数：
void WS2811_blood_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F)

		b_LedLength:灯光效果的总长
		b_DarkLength:灯光效果中黑暗部分占的长度
		pdw_ColourStyle::亮灯效果
*/

void WS2811_blood1_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F){//顺序点亮
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = 0;        
	}
	EA = 0;																	//锁住中断，防止中断打乱灯光信号数据发送
	b_LedLength=b_LedLength-b_DarkLength;//计算亮灯数
		for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){//循环亮参数颜色长度次
			b_LedAddr = 1 + b_Cot;								//灯的位置
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度，如果大于数组长度，回到数组头
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//赋值灯
	}
	for(b_Cot = 0; b_Cot < b_DarkLength; b_Cot++){//循环黑暗灯次
			b_LedAddr = 1 + b_Cot;
			if(b_LedAddr > (u8)(*gpdw_White_low)){//数组首个是长度，如果大于数组长度，回到数组头
					b_LedAddr -= (u8)(*gpdw_White_low);
			}
			WS2811_4P_1Led(2, *(gpdw_White_low + b_LedAddr));
			
	}
	WS2811_4P_En(); 					//灯光信号结束
	EA = 1;										//重启中断
//	if(sb_LedCot == b_LedLength){
//		sb_LedCot = 0;//最大值-1 因为开始值是0
//	}
//	else sb_LedCot ++;
}

/*
void WS2811_shuiliu_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F)
参数：
		b_LedLength:灯光效果的总长
		b_DarkLength:灯光效果中黑暗部分占的长度
		pdw_ColourStyle::亮灯效果
*/

void WS2811_shuiliu_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F){//顺序点亮
	static u8 xdata sb_LedCot = 0;
	u8 xdata b_Cot = 0;
	u8 xdata b_LedAddr = 0;
	if((*b_Reset_F) == 1){
		(*b_Reset_F) = 0;
		sb_LedCot = 0;        
	}
	EA = 0;																	//锁住中断，防止中断打乱灯光信号数据发送
	b_LedLength=b_LedLength-b_DarkLength;//计算亮灯数
		for(b_Cot = 0; b_Cot < b_LedLength; b_Cot++){//循环亮参数颜色长度次
			b_LedAddr = 1 + b_Cot;								//灯的位置
			if(b_LedAddr > (u8)(*pdw_ColourStyle)){//数组首个是长度，如果大于数组长度，回到数组头
					b_LedAddr -= (u8)(*pdw_ColourStyle);
			}
			WS2811_4P_1Led(2, *(pdw_ColourStyle + b_LedAddr));//赋值灯
	}
	for(b_Cot = 0; b_Cot < b_DarkLength; b_Cot++){//循环黑暗灯次
			b_LedAddr = 1 + b_Cot;
			if(b_LedAddr > (u8)(*gpdw_dark)){//数组首个是长度，如果大于数组长度，回到数组头
					b_LedAddr -= (u8)(*gpdw_dark);
			}
			WS2811_4P_1Led(2, *(gpdw_dark + b_LedAddr));
			
	}
	WS2811_4P_En(); 					//灯光信号结束
	EA = 1;										//重启中断
}
