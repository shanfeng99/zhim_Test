#include "TP.h"
#include "system.h"
// ����: void GPIO_Config(void)
// ����: IO�ڳ�ʼ��
// ����: 
// ����: 
// �汾: V1.0 2013-11-06 
//---------------------------------------------------------------------------
#define	GPIO_PullUp		0	//����׼˫���
#define	GPIO_HighZ		1	//��������
#define	GPIO_OUT_OD		2	//��©���
#define	GPIO_OUT_PP		3	//�������

#define	GPIO_Pin_0		0x01	//IO���� Px.0
#define	GPIO_Pin_1		0x02	//IO���� Px.1
#define	GPIO_Pin_2		0x04	//IO���� Px.2
#define	GPIO_Pin_3		0x08	//IO���� Px.3
#define	GPIO_Pin_4		0x10	//IO���� Px.4
#define	GPIO_Pin_5		0x20	//IO���� Px.5
#define	GPIO_Pin_6		0x40	//IO���� Px.6
#define	GPIO_Pin_7		0x80	//IO���� Px.7
#define	GPIO_Pin_All	0xFF	//IO��������
	
#define	GPIO_P0			0		
#define	GPIO_P1			1
#define	GPIO_P2			2
#define	GPIO_P3			3
#define	GPIO_P4			4
#define	GPIO_P5			5

typedef struct
{
	u8	Mode;		//IOģʽ,  		GPIO_PullUp,GPIO_HighZ,GPIO_OUT_OD,GPIO_OUT_PP
	u8	Pin;		//Ҫ���õĶ˿�	
} GPIO_InitTypeDef;

//========================================================================
// ����: u8	GPIO_Inilize(u8 GPIO, GPIO_InitTypeDef *GPIOx)
// ����: ��ʼ��IO��.
// ����: GPIOx: �ṹ����,��ο�timer.h��Ķ���.
// ����: �ɹ�����0, �ղ�������1,���󷵻�2.
// �汾: V1.0, 2012-10-22
//========================================================================
u8	GPIO_Inilize(u8 GPIO, GPIO_InitTypeDef *GPIOx)
{
	if(GPIO > GPIO_P5)				return 1;	//�ղ���
	if(GPIOx->Mode > GPIO_OUT_PP)	return 2;	//����
	if(GPIO == GPIO_P0)
	{
		if(GPIOx->Mode == GPIO_PullUp)		P0M1 &= ~GPIOx->Pin,	P0M0 &= ~GPIOx->Pin;	 //����׼˫���
		if(GPIOx->Mode == GPIO_HighZ)			P0M1 |=  GPIOx->Pin,	P0M0 &= ~GPIOx->Pin;	 //��������
		if(GPIOx->Mode == GPIO_OUT_OD)		P0M1 |=  GPIOx->Pin,	P0M0 |=  GPIOx->Pin;	 //��©���
		if(GPIOx->Mode == GPIO_OUT_PP)		P0M1 &= ~GPIOx->Pin,	P0M0 |=  GPIOx->Pin;	 //�������
	}
	if(GPIO == GPIO_P1)
	{
		if(GPIOx->Mode == GPIO_PullUp)		P1M1 &= ~GPIOx->Pin,	P1M0 &= ~GPIOx->Pin;	 //����׼˫���
		if(GPIOx->Mode == GPIO_HighZ)		P1M1 |=  GPIOx->Pin,	P1M0 &= ~GPIOx->Pin;	 //��������
		if(GPIOx->Mode == GPIO_OUT_OD)		P1M1 |=  GPIOx->Pin,	P1M0 |=  GPIOx->Pin;	 //��©���
		if(GPIOx->Mode == GPIO_OUT_PP)		P1M1 &= ~GPIOx->Pin,	P1M0 |=  GPIOx->Pin;	 //�������
	}
	if(GPIO == GPIO_P2)
	{
		if(GPIOx->Mode == GPIO_PullUp)		P2M1 &= ~GPIOx->Pin,	P2M0 &= ~GPIOx->Pin;	 //����׼˫���
		if(GPIOx->Mode == GPIO_HighZ)		P2M1 |=  GPIOx->Pin,	P2M0 &= ~GPIOx->Pin;	 //��������
		if(GPIOx->Mode == GPIO_OUT_OD)		P2M1 |=  GPIOx->Pin,	P2M0 |=  GPIOx->Pin;	 //��©���
		if(GPIOx->Mode == GPIO_OUT_PP)		P2M1 &= ~GPIOx->Pin,	P2M0 |=  GPIOx->Pin;	 //�������
	}
	if(GPIO == GPIO_P3)
	{
		if(GPIOx->Mode == GPIO_PullUp)		P3M1 &= ~GPIOx->Pin,	P3M0 &= ~GPIOx->Pin;	 //����׼˫���
		if(GPIOx->Mode == GPIO_HighZ)		P3M1 |=  GPIOx->Pin,	P3M0 &= ~GPIOx->Pin;	 //��������
		if(GPIOx->Mode == GPIO_OUT_OD)		P3M1 |=  GPIOx->Pin,	P3M0 |=  GPIOx->Pin;	 //��©���
		if(GPIOx->Mode == GPIO_OUT_PP)		P3M1 &= ~GPIOx->Pin,	P3M0 |=  GPIOx->Pin;	 //�������
	}
	if(GPIO == GPIO_P4)
	{
		if(GPIOx->Mode == GPIO_PullUp)		P4M1 &= ~GPIOx->Pin,	P4M0 &= ~GPIOx->Pin;	 //����׼˫���
		if(GPIOx->Mode == GPIO_HighZ)		P4M1 |=  GPIOx->Pin,	P4M0 &= ~GPIOx->Pin;	 //��������
		if(GPIOx->Mode == GPIO_OUT_OD)		P4M1 |=  GPIOx->Pin,	P4M0 |=  GPIOx->Pin;	 //��©���
		if(GPIOx->Mode == GPIO_OUT_PP)		P4M1 &= ~GPIOx->Pin,	P4M0 |=  GPIOx->Pin;	 //�������
	}
	if(GPIO == GPIO_P5)
	{
		if(GPIOx->Mode == GPIO_PullUp)		P5M1 &= ~GPIOx->Pin,	P5M0 &= ~GPIOx->Pin;	 //����׼˫���
		if(GPIOx->Mode == GPIO_HighZ)		P5M1 |=  GPIOx->Pin,	P5M0 &= ~GPIOx->Pin;	 //��������
		if(GPIOx->Mode == GPIO_OUT_OD)		P5M1 |=  GPIOx->Pin,	P5M0 |=  GPIOx->Pin;	 //��©���
		if(GPIOx->Mode == GPIO_OUT_PP)		P5M1 &= ~GPIOx->Pin,	P5M0 |=  GPIOx->Pin;	 //�������
	}
	return 0;	//�ɹ�
}


/*==========================================================================================
���� 
	void IO_Init(void)
���� 
	�ӿڳ�ʼ��
���� 
	
����  
*/
void IO_Init(void)
{
	GPIO_InitTypeDef	GPIO_InitStructure;					//�ṹ�嶨��
//	GPIO_InitStructure.Pin  = GPIO_Pin_0
//							| GPIO_Pin_1
//							| GPIO_Pin_3
//							| GPIO_Pin_4
//							| GPIO_Pin_5
//							| GPIO_Pin_6
//							| GPIO_Pin_7;					//ѡ����
//	GPIO_InitStructure.Mode = GPIO_PullUp;					//����׼˫���
//	GPIO_Inilize(GPIO_P0,&GPIO_InitStructure);				//��ʼ��	
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
											 | GPIO_Pin_7;					//ѡ����
	GPIO_InitStructure.Mode = GPIO_PullUp;					//����׼˫���
	GPIO_Inilize(GPIO_P1,&GPIO_InitStructure);				//��ʼ��	
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
											 | GPIO_Pin_7;					//ѡ����
	GPIO_InitStructure.Mode = GPIO_PullUp;					//����׼˫���
	GPIO_Inilize(GPIO_P2,&GPIO_InitStructure);				//��ʼ��	
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
											 | GPIO_Pin_7;					//ѡ����
	GPIO_InitStructure.Mode = GPIO_PullUp;					//����׼˫���
	GPIO_Inilize(GPIO_P3,&GPIO_InitStructure);				//��ʼ��	
	P30 = 1;
	P31 = 1;
	P32 = 1;
	P33 = 1;
	P34 = 1;
	P35 = 1;
	P36 = 1;
	P37 = 1;	
	GPIO_InitStructure.Pin  = GPIO_Pin_4
											 | GPIO_Pin_5;					//ѡ����
	GPIO_InitStructure.Mode = GPIO_PullUp;					//����׼˫���
	GPIO_Inilize(GPIO_P5,&GPIO_InitStructure);				//��ʼ��	
	P54 = 1;
	P55 = 1;
} 
/*==========================================================================================
���� 
	void Timer_Init(void)
���� 

���� 
	
����  
*/
void Timer_Init(void)
{
	//��ʱ��0
	AUXR &= 0x7F;	//��ʱ��ʱ��12Tģʽ
	TMOD &= 0xF0;	//���ö�ʱ��ģʽ
	TL0 = 0xE5;		//���ö�ʱ��ֵ
	TH0 = 0xBE;		//���ö�ʱ��ֵ
	TF0 = 0;		//���TF0��־
	TR0 = 1;		//��ʱ��0��ʼ��ʱ
	PT0 = 1;		//��ʱ��0������ȼ�
//	//��ʱ��1
//	AUXR &= 0xBF;	//��ʱ��ʱ��12Tģʽ,16λ�Զ�����
//	TMOD &= 0x0F;	//���ö�ʱ��ģʽ
//	TL1 = 0xE5;		//���ö�ʱ��ֵ
//	TH1 = 0xBE;		//���ö�ʱ��ֵ
//	TF1 = 0;		//���TF1��־
//	TR1 = 1;		//��ʱ��1��ʼ��ʱ	
}

