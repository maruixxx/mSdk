/*
 * cm_l4.h
 *
 *  Created on: Jan 13, 2013
 *      Author: XxXx
 */

#ifndef CM_L4_H_
#define CM_L4_H_

typedef volatile unsigned int _L4PER_CM2_;

typedef struct
{
	_L4PER_CM2_ CM_L4PER_CLKSTCTRL;//0x00
	_L4PER_CM2_ RESERVED_0x00000004;//0x04
	_L4PER_CM2_ CM_L4PER_DYNAMICDEP;//0x08
	_L4PER_CM2_ RESERVED_0x0000000C;//0x0C
	_L4PER_CM2_ RESERVED_0x00000010;//0x10
	_L4PER_CM2_ RESERVED_0x00000014;//0x14
	_L4PER_CM2_ RESERVED_0x00000018;//0x18
	_L4PER_CM2_ RESERVED_0x0000001C;//0x1C
	_L4PER_CM2_ RESERVED_0x00000020;//0x20
	_L4PER_CM2_ RESERVED_0x00000024;//0x24
	_L4PER_CM2_ CM_L4PER_GPTIMER10_CLKCTRL;//0x28
	_L4PER_CM2_ RESERVED_0x0000002C;//0x28
	_L4PER_CM2_ CM_L4PER_GPTIMER11_CLKCTRL;//0x30
	_L4PER_CM2_ RESERVED_0x00000034;//0x34
	_L4PER_CM2_ CM_L4PER_GPTIMER2_CLKCTRL;//0x38
	_L4PER_CM2_ RESERVED_0x0000003C;//0x3C
	_L4PER_CM2_ CM_L4PER_GPTIMER3_CLKCTRL;//0x40
	_L4PER_CM2_ RESERVED_0x00000044;//0x44
	_L4PER_CM2_ CM_L4PER_GPTIMER4_CLKCTRL;//0x48
	_L4PER_CM2_ RESERVED_0x0000004C;//0x4C
	_L4PER_CM2_ CM_L4PER_GPTIMER9_CLKCTRL;//0x50
	_L4PER_CM2_ RESERVED_0x00000054;//0x54
	_L4PER_CM2_ CM_L4PER_ELM_CLKCTRL;//0x58
	_L4PER_CM2_ RESERVED_0x0000005C;//0x5C
	_L4PER_CM2_ CM_L4PER_GPIO2_CLKCTRL;//0x60
	_L4PER_CM2_ RESERVED_0x00000064;//0x64
	_L4PER_CM2_ CM_L4PER_GPIO3_CLKCTRL;//0x68
	_L4PER_CM2_ RESERVED_0x0000006C;//0x6C
	_L4PER_CM2_ CM_L4PER_GPIO4_CLKCTRL;//0x70
	_L4PER_CM2_ RESERVED_0x00000074;//0x74
	_L4PER_CM2_ CM_L4PER_GPIO5_CLKCTRL;//0x78
	_L4PER_CM2_ RESERVED_0x0000007C;//0x7C
	_L4PER_CM2_ CM_L4PER_GPIO6_CLKCTRL;//0x80
	_L4PER_CM2_ RESERVED_0x00000084;//0x84
	_L4PER_CM2_ CM_L4PER_HDQ1W_CLKCTRL;//0x88
	_L4PER_CM2_ RESERVED_0x0000008C;//0x8C
	_L4PER_CM2_ RESERVED_0x00000090;//0x90
	_L4PER_CM2_ RESERVED_0x00000094;//0x94
	_L4PER_CM2_ RESERVED_0x00000098;//0x98
	_L4PER_CM2_ RESERVED_0x0000009C;//0x9C
	_L4PER_CM2_ CM_L4PER_I2C1_CLKCTRL;//0xA0
	_L4PER_CM2_ RESERVED_0x000000A4;//0xA4
	_L4PER_CM2_ CM_L4PER_I2C2_CLKCTRL;//0xA8
	_L4PER_CM2_ RESERVED_0x000000Ac;//0xAC
	_L4PER_CM2_ CM_L4PER_I2C3_CLKCTRL;//0xB0
	_L4PER_CM2_ RESERVED_0x000000B4;//0xB4
	_L4PER_CM2_ CM_L4PER_I2C4_CLKCTRL;//0xB8
	_L4PER_CM2_ RESERVED_0x000000BC;//0xBC
	_L4PER_CM2_ CM_L4PER_L4PER_CLKCTRL;//0xC0
	_L4PER_CM2_ RESERVED_0x000000C4;//0xC4
	_L4PER_CM2_ RESERVED_0x000000C8;//0xC8
	_L4PER_CM2_ RESERVED_0x000000CC;//0xCC
	_L4PER_CM2_ RESERVED_0x000000D0;//0xD0
	_L4PER_CM2_ RESERVED_0x000000D4;//0xD4
	_L4PER_CM2_ RESERVED_0x000000D8;//0xD8
	_L4PER_CM2_ RESERVED_0x000000DC;//0xDC
	_L4PER_CM2_ CM_L4PER_MCBSP4_CLKCTRL;//0xE0
	_L4PER_CM2_ RESERVED_0x000000E4;//0xE4
	_L4PER_CM2_ RESERVED_0x000000E8;//0xE8
	_L4PER_CM2_ RESERVED_0x000000EC;//0xEC
	_L4PER_CM2_ CM_L4PER_MCSPI1_CLKCTRL;//0xF0
	_L4PER_CM2_ RESERVED_0x000000F4;//0xF4
	_L4PER_CM2_ CM_L4PER_MCSPI2_CLKCTRL;//0xF8
	_L4PER_CM2_ RESERVED_0x000000FC;//0xFC
	_L4PER_CM2_ CM_L4PER_MCSPI3_CLKCTRL;//0x100
	_L4PER_CM2_ RESERVED_0x00000104;//0x104
	_L4PER_CM2_ CM_L4PER_MCSPI4_CLKCTRL;//0x108
	_L4PER_CM2_ RESERVED_0x0000010C;//0x10C
	_L4PER_CM2_ CM_L4PER_MMCSD3_CLKCTRL;//0x110
	_L4PER_CM2_ RESERVED_0x00000114;//0x114
	_L4PER_CM2_ CM_L4PER_MMCSD4_CLKCTRL;//0x118
	_L4PER_CM2_ RESERVED_0x0000011C;//0x11C
	_L4PER_CM2_ RESERVED_0x00000120;//0x120
	_L4PER_CM2_ RESERVED_0x00000124;//0x124
	_L4PER_CM2_ RESERVED_0x00000128;//0x128
	_L4PER_CM2_ RESERVED_0x0000012C;//0x12C
	_L4PER_CM2_ RESERVED_0x00000130;//0x130
	_L4PER_CM2_ RESERVED_0x00000134;//0x134
	_L4PER_CM2_ CM_L4PER_SLIMBUS2_CLKCTRL;//0x138
	_L4PER_CM2_ RESERVED_0x0000013C;//0x13C
	_L4PER_CM2_ CM_L4PER_UART1_CLKCTRL;//0x140
	_L4PER_CM2_ RESERVED_0x00000144;//0x144
	_L4PER_CM2_ CM_L4PER_UART2_CLKCTRL;//0x148
	_L4PER_CM2_ RESERVED_0x0000014C;//0x14C
	_L4PER_CM2_ CM_L4PER_UART3_CLKCTRL;//0x150
	_L4PER_CM2_ RESERVED_0x00000154;//0x154
	_L4PER_CM2_ CM_L4PER_UART4_CLKCTRL;//0x158
	_L4PER_CM2_ RESERVED_0x0000015C;//0x15C
	_L4PER_CM2_ CM_L4PER_MMCSD5_CLKCTRL;//0x160
	_L4PER_CM2_ RESERVED_0x00000164;//0x164
	_L4PER_CM2_ RESERVED_0x00000168;//0x168
	_L4PER_CM2_ RESERVED_0x0000016C;//0x16C
	_L4PER_CM2_ RESERVED_0x00000170;//0x170
	_L4PER_CM2_ RESERVED_0x00000174;//0x174
	_L4PER_CM2_ RESERVED_0x00000178;//0x178
	_L4PER_CM2_ RESERVED_0x0000017C;//0x17C
	_L4PER_CM2_ CM_L4SEC_CLKSTCTRL;//0x180
	_L4PER_CM2_ CM_L4SEC_STATICDEP;//0x184
	_L4PER_CM2_ CM_L4SEC_DYNAMICDEP;//0x188
	_L4PER_CM2_ RESERVED_0x0000018C;//0x18C
	_L4PER_CM2_ RESERVED_0x00000190;//0x190
	_L4PER_CM2_ RESERVED_0x00000194;//0x194
	_L4PER_CM2_ RESERVED_0x00000198;//0x198
	_L4PER_CM2_ RESERVED_0x0000019C;//0x19C
	_L4PER_CM2_ CM_L4SEC_AES1_CLKCTRL;//0x1A0
	_L4PER_CM2_ RESERVED_0x000001A8;//0x1A8
	_L4PER_CM2_ CM_L4SEC_AES2_CLKCTRL;//0x1A8
	_L4PER_CM2_ RESERVED_0x000001Ac;//0x1Ac
	_L4PER_CM2_ CM_L4SEC_DES3DES_CLKCTRL;//0x1B0
	_L4PER_CM2_ RESERVED_0x000001B4;//0x1B4
	_L4PER_CM2_ CM_L4SEC_PKA_CLKCTRL;//0x1B8
	_L4PER_CM2_ RESERVED_0x000001BC;//0x1BC
	_L4PER_CM2_ CM_L4SEC_RNG_CLKCTRL;//0x1C0
	_L4PER_CM2_ RESERVED_0x000001C4;//0x1C4
	_L4PER_CM2_ CM_L4SEC_SHA2MD5_CLKCTRL;//0x1C8
	_L4PER_CM2_ RESERVED_0x000001CC;//0x1CC
	_L4PER_CM2_ RESERVED_0x000001D0;//0x1D0
	_L4PER_CM2_ RESERVED_0x000001D4;//0x1D4
	_L4PER_CM2_ CM_L4SEC_CRYPTODMA_CLKCTRL;//0x1D8
}L4PER_CM2_t;

#define L4PER_CM2 (*(L4PER_CM2_t *) 0x4A009400)

typedef enum
{
	CM_L4PER_MODULEMODE_gp = 0,
	CM_L4PER_MODULEMODE_gm = 3 << CM_L4PER_MODULEMODE_gp,
	CM_L4PER_MODULEMODE_DISABLED = 0,
	CM_L4PER_MODULEMODE_AUTOMATIC = 1,
	CM_L4PER_MODULEMODE_EXPLICIT_ENABLE = 2
}CM_L4PER_MODULEMODE_enum;

typedef enum
{
	CM_L4PER_OPTFCLKEN_DBCLK_bp = 8,
	CM_L4PER_OPTFCLKEN_DBCLK_bm = 1 << CM_L4PER_OPTFCLKEN_DBCLK_bp,
	CM_L4PER_OPTFCLKEN_DBCLK_CLOCK_DISABLED = 0,
	CM_L4PER_OPTFCLKEN_DBCLK_CLOCK_ENABLED = 1
}CM_L4PER_OPTFCLKEN_DBCLK_enum;

typedef enum
{
	CM_L4PER_IDLEST_gp = 16,
	CM_L4PER_IDLEST_gm = 3 << CM_L4PER_IDLEST_gp,
	CM_L4PER_IDLEST_FULL_FUNCTIONAL = 0,
	CM_L4PER_IDLEST_TRANSITION = 1,
	CM_L4PER_IDLEST_IDLE = 3,
	CM_L4PER_IDLEST_DISABLED = 3
}CM_L4PER_IDLEST_enum;

#endif /* CM_L4_H_ */
