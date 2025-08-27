#include "TP.h"
#include "io.h"

/*==========================================================================================
函数: 
	u8 Input(u8 b_PinNum)				 
描述: 	
	指定口输入
参数: 
	- b_PinNum				端口号
		- 0x00				<>P00	
		- 0x01				<>P01
		- 0x02	 			<>P02
		- ...
返回: - 0 					低电平触发
*/
u8 Input(u8 b_PinNum){
	u8 b_ReturnDat = 1;
		 if(b_PinNum == 0x00){if(P00 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x01){if(P01 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x02){if(P02 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x03){if(P03 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x04){if(P04 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x05){if(P05 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x06){if(P06 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x07){if(P07 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x10){if(P10 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x11){if(P11 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x12){if(P12 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x13){if(P13 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x14){if(P14 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x15){if(P15 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x16){if(P16 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x17){if(P17 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x20){if(P20 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x21){if(P21 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x22){if(P22 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x23){if(P23 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x24){if(P24 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x25){if(P25 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x26){if(P26 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x27){if(P27 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x30){if(P30 == 0){b_ReturnDat = 0;}}	
	else if(b_PinNum == 0x32){if(P32 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x33){if(P33 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x34){if(P34 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x35){if(P35 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x36){if(P36 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x37){if(P37 == 0){b_ReturnDat = 0;}}	
	else if(b_PinNum == 0x40){if(P40 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x41){if(P41 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x42){if(P42 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x43){if(P43 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x44){if(P44 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x45){if(P45 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x46){if(P46 == 0){b_ReturnDat = 0;}}
	else if(b_PinNum == 0x47){if(P47 == 0){b_ReturnDat = 0;}}		
	return b_ReturnDat;
}
/*==========================================================================================
函数: 
	void Output(u8 b_PinNum, u8 b_Val)				 
描述: 	
	指定口输出
参数: 
	- b_PinNum				端口号
		- 0x00				<>P00	
		- 0x01				<>P01
		- 0x02	 			<>P02
		- ...
	- b_Val					
		- 1					<>高电平
		- 0					<>低电平
返回: 
*/
void Output(u8 b_PinNum, u8 b_Val){
	if(b_PinNum == 0x00){
		if(b_Val == 0){P00 = 0;}
		else {P00 = 1;}
	}
	else if(b_PinNum == 0x01){
		if(b_Val == 0){P01 = 0;}
		else {P01 = 1;}
	}	
	else if(b_PinNum == 0x02){
		if(b_Val == 0){P02 = 0;}
		else {P02 = 1;}
	}
	else if(b_PinNum == 0x03){
		if(b_Val == 0){P03 = 0;}
		else {P03 = 1;}
	}
	else if(b_PinNum == 0x04){
		if(b_Val == 0){P04 = 0;}
		else {P04 = 1;}
	}
	else if(b_PinNum == 0x05){
		if(b_Val == 0){P05 = 0;}
		else {P05 = 1;}
	}	
	else if(b_PinNum == 0x06){
		if(b_Val == 0){P06 = 0;}
		else {P06 = 1;}
	}
	else if(b_PinNum == 0x07){
		if(b_Val == 0){P07 = 0;}
		else {P07 = 1;}
	}
	else if(b_PinNum == 0x10){
		if(b_Val == 0){P10 = 0;}
		else {P10 = 1;}
	}		
	else if(b_PinNum == 0x11){
		if(b_Val == 0){P11 = 0;}
		else {P11 = 1;}
	}	
	else if(b_PinNum == 0x12){
		if(b_Val == 0){P12 = 0;}
		else {P12 = 1;}
	}
	else if(b_PinNum == 0x13){
		if(b_Val == 0){P13 = 0;}
		else {P13 = 1;}
	}
	else if(b_PinNum == 0x14){
		if(b_Val == 0){P14 = 0;}
		else {P14 = 1;}
	}
	else if(b_PinNum == 0x15){
		if(b_Val == 0){P15 = 0;}
		else {P15 = 1;}
	}	
	else if(b_PinNum == 0x16){
		if(b_Val == 0){P16 = 0;}
		else {P16 = 1;}
	}
	else if(b_PinNum == 0x17){
		if(b_Val == 0){P17 = 0;}
		else {P17 = 1;}
	}	
	else if(b_PinNum == 0x20){
		if(b_Val == 0){P20 = 0;}
		else {P20 = 1;}
	}		
	else if(b_PinNum == 0x21){
		if(b_Val == 0){P21 = 0;}
		else {P21 = 1;}
	}	
	else if(b_PinNum == 0x22){
		if(b_Val == 0){P22 = 0;}
		else {P22 = 1;}
	}
	else if(b_PinNum == 0x23){
		if(b_Val == 0){P23 = 0;}
		else {P23 = 1;}
	}
	else if(b_PinNum == 0x24){
		if(b_Val == 0){P24 = 0;}
		else {P24 = 1;}
	}
	else if(b_PinNum == 0x25){
		if(b_Val == 0){P25 = 0;}
		else {P25 = 1;}
	}	
	else if(b_PinNum == 0x26){
		if(b_Val == 0){P26 = 0;}
		else {P26 = 1;}
	}
	else if(b_PinNum == 0x27){
		if(b_Val == 0){P27 = 0;}
		else {P27 = 1;}
	}
	else if(b_PinNum == 0x30){
		if(b_Val == 0){P30 = 0;}
		else {P30 = 1;}
	}	
	else if(b_PinNum == 0x32){
		if(b_Val == 0){P32 = 0;}
		else {P32 = 1;}
	}
	else if(b_PinNum == 0x33){
		if(b_Val == 0){P33 = 0;}
		else {P33 = 1;}
	}
	else if(b_PinNum == 0x34){
		if(b_Val == 0){P34 = 0;}
		else {P34 = 1;}
	}
	else if(b_PinNum == 0x35){
		if(b_Val == 0){P35 = 0;}
		else {P35 = 1;}
	}	
	else if(b_PinNum == 0x36){
		if(b_Val == 0){P36 = 0;}
		else {P36 = 1;}
	}
	else if(b_PinNum == 0x37){
		if(b_Val == 0){P37 = 0;}
		else {P37 = 1;}
	}	
	else if(b_PinNum == 0x40){
		if(b_Val == 0){P40 = 0;}
		else {P40 = 1;}
	}		
	else if(b_PinNum == 0x41){
		if(b_Val == 0){P41 = 0;}
		else {P41 = 1;}
	}	
	else if(b_PinNum == 0x42){
		if(b_Val == 0){P42 = 0;}
		else {P42 = 1;}
	}
	else if(b_PinNum == 0x43){
		if(b_Val == 0){P43 = 0;}
		else {P43 = 1;}
	}
	else if(b_PinNum == 0x44){
		if(b_Val == 0){P44 = 0;}
		else {P44 = 1;}
	}
	else if(b_PinNum == 0x45){
		if(b_Val == 0){P45 = 0;}
		else {P45 = 1;}
	}	
	else if(b_PinNum == 0x46){
		if(b_Val == 0){P46 = 0;}
		else {P46 = 1;}
	}
	else if(b_PinNum == 0x47){
		if(b_Val == 0){P47 = 0;}
		else {P47 = 1;}
	}		
}






















