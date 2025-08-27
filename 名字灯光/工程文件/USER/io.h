#ifndef _io_h_
#define _io_h_

#include "STC15F2KXX.H"                                             //芯片头文件  


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
extern u8 Input(u8 b_PinNum);
/*==========================================================================================
函数: 
	void Output(u8 b_PinNum, u8 b_Val)				 
描述: 	
	指定口输入
参数: 
	- b_PinNum				端口号
		- PORT_T01			<29>输出口1
		- PORT_T02	 		<30>输出口2
		- ...
		- PORT_T32 			<60>输出口32
		- PORT_LED			<>
	- b_Val					
		- 1					<>高电平
		- 0					<>低电平
返回: 
*/
extern void Output(u8 b_PinNum, u8 b_Val);




#endif
