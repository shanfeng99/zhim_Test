#ifndef _led_h_
#define _led_h_

#include "TP.h"

extern void WS2811_All_Gradual_P1(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F);
extern void WS2811_All_Gradual_P2(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F);
extern void WS2811_All_Gradual_P3(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F);
extern void WS2811_All_Gradual_P4(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F);
extern void WS2811_Loop_LtoR_P1(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle, u8 *b_Reset_F);
extern void WS2811_Loop_LtoR_P2(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle, u8 *b_Reset_F);
extern void WS2811_Loop_LtoR_P4(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle, u8 *b_Reset_F);
extern void WS2811_Static_P1(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle);
extern void WS2811_Static_P2(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle);
extern void WS2811_Static_P3(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle);
extern void WS2811_Static_P4(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle);
extern void WS2811_Loop_6Led_P1(u8 *b_Reset_F);
extern void WS2811_Loop_kai_P4(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F);
extern void WS2811_Loop_guan_P4(u8 b_LedLength, u32 *pdw_ColourStyle, u8 *b_Reset_F);
extern void WS2811_blood1_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F);


extern void WS2811_1P_En();
extern void WS2811_4P_En();



extern u32 code gpdw_Mushroom_Colour_Star[];
extern u32 code gpdw_Mushroom_Colour_White[];
extern u32 code gpdw_Mushroom_Colour_Red[];
extern u32 code gpdw_Mushroom_Colour_Greed[];
extern u32 code gpdw_Mushroom_Colour_Blue[];
extern u32 code gpdw_Mushroom_Colour_Rainbow[];
extern u32 code gpdw_Colour_Gradual_Rainbow[];
extern u32 code gpdw_Mushroom_Colour_Bonus[];
extern u32 code gpdw_Colour_Red_Yellow_Blue[];
extern u32 code gpdw_Colour_Red_Yellow_Blue_Gradual[];
extern u32 code gpdw_Colour_White[];
extern u32 code gpdw_Colour_Gradual_Rainbow1[];

extern u32 code gpdw_White_low[];
extern u32 code gpdw_dark[];


extern void WS2811_Loop_RtoL_P1(u8 b_LedLength, u8 b_FirstAddr, u32 *pdw_ColourStyle, u8 *b_Reset_F);
extern void WS2811_blood_P4(u8 b_LedLength, u8 b_DarkLength,u32 *pdw_ColourStyle, u8 *b_Reset_F);

#endif





