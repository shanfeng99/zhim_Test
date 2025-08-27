#include "TP.h"
#include "system.h"
// 函数: void GPIO_Config(void)
// 描述: IO口初始化
// 参数: 
// 返回: 
// 版本: V1.0 2013-11-06 
//---------------------------------------------------------------------------
#define	GPIO_PullUp		0	//上拉准双向口
#define	GPIO_HighZ		1	//浮空输入
#define	GPIO_OUT_OD		2	//开漏输出
#define	GPIO_OUT_PP		3	//推挽输出

#define	GPIO_Pin_0		0x01	//IO引脚 Px.0
#define	GPIO_Pin_1		0x02	//IO引脚 Px.1
#define	GPIO_Pin_2		0x04	//IO引脚 Px.2
#define	GPIO_Pin_3		0x08	//IO引脚 Px.3
#define	GPIO_Pin_4		0x10	//IO引脚 Px.4
#define	GPIO_Pin_5		0x20	//IO引脚 Px.5
#define	GPIO_Pin_6		0x40	//IO引脚 Px.6
#define	GPIO_Pin_7		0x80	//IO引脚 Px.7
#define	GPIO_Pin_All	0xFF	//IO所有引脚
	
#define	GPIO_P0			0		
#define	GPIO_P1			1
#define	GPIO_P2			2
#define	GPIO_P3			3
#define	GPIO_P4			4
#define	GPIO_P5			5

typedef struct
{
	u8	Mode;		//IO模式,  		GPIO_PullUp,GPIO_HighZ,GPIO_OUT_OD,GPIO_OUT_PP
	u8	Pin;		//要设置的端口	
} GPIO_InitTypeDef;

//========================================================================
// 函数: u8	GPIO_Inilize(u8 GPIO, GPIO_InitTypeDef *GPIOx)
// 描述: 初始化IO口.
// 参数: GPIOx: 结构参数,请参考timer.h里的定义.
// 返回: 成功返回0, 空操作返回1,错误返回2.
// 版本: V1.0, 2012-10-22
//========================================================================
u8	GPIO_Inilize(u8 GPIO, GPIO_InitTypeDef *GPIOx)
{
	if(GPIO > GPIO_P5)				return 1;	//空操作
	if(GPIOx->Mode > GPIO_OUT_PP)	return 2;	//错误
	if(GPIO == GPIO_P0)
	{
		if(GPIOx->Mode == GPIO_PullUp)		P0M1 &= ~GPIOx->Pin,	P0M0 &= ~GPIOx->Pin;	 //上拉准双向口
		if(GPIOx->Mode == GPIO_HighZ)			P0M1 |=  GPIOx->Pin,	P0M0 &= ~GPIOx->Pin;	 //浮空输入
		if(GPIOx->Mode == GPIO_OUT_OD)		P0M1 |=  GPIOx->Pin,	P0M0 |=  GPIOx->Pin;	 //开漏输出
		if(GPIOx->Mode == GPIO_OUT_PP)		P0M1 &= ~GPIOx->Pin,	P0M0 |=  GPIOx->Pin;	 //推挽输出
	}
	if(GPIO == GPIO_P1)
	{
		if(GPIOx->Mode == GPIO_PullUp)		P1M1 &= ~GPIOx->Pin,	P1M0 &= ~GPIOx->Pin;	 //上拉准双向口
		if(GPIOx->Mode == GPIO_HighZ)		P1M1 |=  GPIOx->Pin,	P1M0 &= ~GPIOx->Pin;	 //浮空输入
		if(GPIOx->Mode == GPIO_OUT_OD)		P1M1 |=  GPIOx->Pin,	P1M0 |=  GPIOx->Pin;	 //开漏输出
		if(GPIOx->Mode == GPIO_OUT_PP)		P1M1 &= ~GPIOx->Pin,	P1M0 |=  GPIOx->Pin;	 //推挽输出
	}
	if(GPIO == GPIO_P2)
	{
		if(GPIOx->Mode == GPIO_PullUp)		P2M1 &= ~GPIOx->Pin,	P2M0 &= ~GPIOx->Pin;	 //上拉准双向口
		if(GPIOx->Mode == GPIO_HighZ)		P2M1 |=  GPIOx->Pin,	P2M0 &= ~GPIOx->Pin;	 //浮空输入
		if(GPIOx->Mode == GPIO_OUT_OD)		P2M1 |=  GPIOx->Pin,	P2M0 |=  GPIOx->Pin;	 //开漏输出
		if(GPIOx->Mode == GPIO_OUT_PP)		P2M1 &= ~GPIOx->Pin,	P2M0 |=  GPIOx->Pin;	 //推挽输出
	}
	if(GPIO == GPIO_P3)
	{
		if(GPIOx->Mode == GPIO_PullUp)		P3M1 &= ~GPIOx->Pin,	P3M0 &= ~GPIOx->Pin;	 //上拉准双向口
		if(GPIOx->Mode == GPIO_HighZ)		P3M1 |=  GPIOx->Pin,	P3M0 &= ~GPIOx->Pin;	 //浮空输入
		if(GPIOx->Mode == GPIO_OUT_OD)		P3M1 |=  GPIOx->Pin,	P3M0 |=  GPIOx->Pin;	 //开漏输出
		if(GPIOx->Mode == GPIO_OUT_PP)		P3M1 &= ~GPIOx->Pin,	P3M0 |=  GPIOx->Pin;	 //推挽输出
	}
	if(GPIO == GPIO_P4)
	{
		if(GPIOx->Mode == GPIO_PullUp)		P4M1 &= ~GPIOx->Pin,	P4M0 &= ~GPIOx->Pin;	 //上拉准双向口
		if(GPIOx->Mode == GPIO_HighZ)		P4M1 |=  GPIOx->Pin,	P4M0 &= ~GPIOx->Pin;	 //浮空输入
		if(GPIOx->Mode == GPIO_OUT_OD)		P4M1 |=  GPIOx->Pin,	P4M0 |=  GPIOx->Pin;	 //开漏输出
		if(GPIOx->Mode == GPIO_OUT_PP)		P4M1 &= ~GPIOx->Pin,	P4M0 |=  GPIOx->Pin;	 //推挽输出
	}
	if(GPIO == GPIO_P5)
	{
		if(GPIOx->Mode == GPIO_PullUp)		P5M1 &= ~GPIOx->Pin,	P5M0 &= ~GPIOx->Pin;	 //上拉准双向口
		if(GPIOx->Mode == GPIO_HighZ)		P5M1 |=  GPIOx->Pin,	P5M0 &= ~GPIOx->Pin;	 //浮空输入
		if(GPIOx->Mode == GPIO_OUT_OD)		P5M1 |=  GPIOx->Pin,	P5M0 |=  GPIOx->Pin;	 //开漏输出
		if(GPIOx->Mode == GPIO_OUT_PP)		P5M1 &= ~GPIOx->Pin,	P5M0 |=  GPIOx->Pin;	 //推挽输出
	}
	return 0;	//成功
}


/*==========================================================================================
函数 
	void IO_Init(void)
描述 
	接口初始化
参数 
	
返回  
*/
void IO_Init(void)
{
	GPIO_InitTypeDef	GPIO_InitStructure;					//结构体定义
//	GPIO_InitStructure.Pin  = GPIO_Pin_0
//							| GPIO_Pin_1
//							| GPIO_Pin_3
//							| GPIO_Pin_4
//							| GPIO_Pin_5
//							| GPIO_Pin_6
//							| GPIO_Pin_7;					//选定口
//	GPIO_InitStructure.Mode = GPIO_PullUp;					//上拉准双向口
//	GPIO_Inilize(GPIO_P0,&GPIO_InitStructure);				//初始化	
//	P00 = 1;
//	P01 = 1;
//	P03 = 1;
//	P04 = 1;
//	P05 = 1;
//	P06 = 1;
//	P07 = 1;
	GPIO_InitStructure.Pin  = GPIO_Pin_0
											 | GPIO_Pin_1
											 | GPIO_Pin_2
											 | GPIO_Pin_3
											 | GPIO_Pin_4
											 | GPIO_Pin_5
											 | GPIO_Pin_6
											 | GPIO_Pin_7;					//选定口
	GPIO_InitStructure.Mode = GPIO_PullUp;					//上拉准双向口
	GPIO_Inilize(GPIO_P1,&GPIO_InitStructure);				//初始化	
	P10 = 1;
	P11 = 1;
	P12 = 1;
	P13 = 1;
	P14 = 1;
	P15 = 1;
	P16 = 1;
	P17 = 1;
	GPIO_InitStructure.Pin  = GPIO_Pin_0
											 | GPIO_Pin_1
											 | GPIO_Pin_2
											 | GPIO_Pin_3
											 | GPIO_Pin_4
											 | GPIO_Pin_5
											 | GPIO_Pin_6
											 | GPIO_Pin_7;					//选定口
	GPIO_InitStructure.Mode = GPIO_PullUp;					//上拉准双向口
	GPIO_Inilize(GPIO_P2,&GPIO_InitStructure);				//初始化	
	P20 = 1;
	P21 = 1;
	P22 = 1;
	P23 = 1;
	P24 = 1;
	P25 = 1;
	P26 = 1;
	P27 = 1;	
	GPIO_InitStructure.Pin  = GPIO_Pin_0
											 | GPIO_Pin_1
											 | GPIO_Pin_2
											 | GPIO_Pin_3
											 | GPIO_Pin_4
											 | GPIO_Pin_5
											 | GPIO_Pin_6
											 | GPIO_Pin_7;					//选定口
	GPIO_InitStructure.Mode = GPIO_PullUp;					//上拉准双向口
	GPIO_Inilize(GPIO_P3,&GPIO_InitStructure);				//初始化	
	P30 = 1;
	P31 = 1;
	P32 = 1;
	P33 = 1;
	P34 = 1;
	P35 = 1;
	P36 = 1;
	P37 = 1;	
	GPIO_InitStructure.Pin  = GPIO_Pin_4
											 | GPIO_Pin_5;					//选定口
	GPIO_InitStructure.Mode = GPIO_PullUp;					//上拉准双向口
	GPIO_Inilize(GPIO_P5,&GPIO_InitStructure);				//初始化	
	P54 = 1;
	P55 = 1;
} 
/*==========================================================================================
函数 
	void Timer_Init(void)
描述 

参数 
	
返回  
*/
void Timer_Init(void)
{
	//定时器0
	AUXR &= 0x7F;	//定时器时钟12T模式
	TMOD &= 0xF0;	//设置定时器模式
	TL0 = 0xE5;		//设置定时初值
	TH0 = 0xBE;		//设置定时初值
	TF0 = 0;		//清除TF0标志
	TR0 = 1;		//定时器0开始计时
	PT0 = 1;		//定时器0最高优先级
//	//定时器1
//	AUXR &= 0xBF;	//定时器时钟12T模式,16位自动重载
//	TMOD &= 0x0F;	//设置定时器模式
//	TL1 = 0xE5;		//设置定时初值
//	TH1 = 0xBE;		//设置定时初值
//	TF1 = 0;		//清除TF1标志
//	TR1 = 1;		//定时器1开始计时	
}

