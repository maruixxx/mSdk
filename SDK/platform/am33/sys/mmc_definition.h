/*
 * mmc_def.h
 *
 *  Created on: Jul 20, 2012
 *      Author: Iulian Gheorghiu (morgoth.creator@gmail.com)
 */

#ifndef MMC_DEFINITION_H_
#define MMC_DEFINITION_H_

typedef volatile unsigned int MMC_REGISTER;



typedef struct mmc_s
{
	MMC_REGISTER RESERVED_0x00_TO_0x10C[(0x110 - 0x0) / sizeof(MMC_REGISTER)];
	MMC_REGISTER SYSSTATUS;		/* 0x110 */
	MMC_REGISTER RESERVED_0x118_TO_0x120[(0x124 - 0x118) / sizeof(MMC_REGISTER)];
	MMC_REGISTER CSRE;			/* 0x124 */
	MMC_REGISTER SYSTEST;		/* 0x128 */
	MMC_REGISTER CON;			/* 0x12C */
	MMC_REGISTER PWCNT;			/* 0x130 */
	MMC_REGISTER RESERVED_0x134_TO_0x1FC[(0x200 - 0x134) / sizeof(MMC_REGISTER)];
	MMC_REGISTER SDMASA;		/* 0x200 */
	MMC_REGISTER BLK;			/* 0x204 */
	MMC_REGISTER ARG;			/* 0x208 */
	MMC_REGISTER CMD;			/* 0x20C */
	MMC_REGISTER RSP10;			/* 0x210 */
	MMC_REGISTER RSP32;			/* 0x214 */
	MMC_REGISTER RSP54;			/* 0x218 */
	MMC_REGISTER RSP76;			/* 0x21C */
	MMC_REGISTER DATA;			/* 0x220 */
	MMC_REGISTER PSTATE;		/* 0x224 */
	MMC_REGISTER HCTL;			/* 0x228 */
	MMC_REGISTER SYSCTL;		/* 0x22C */
	MMC_REGISTER STAT;			/* 0x230 */
	MMC_REGISTER IE;			/* 0x234 */
	MMC_REGISTER ISE;			/* 0x238 */
	MMC_REGISTER AC12;			/* 0x23C */
	MMC_REGISTER CAPA;			/* 0x240 */
	MMC_REGISTER RESERVED_0x244;
	MMC_REGISTER CUR_CAPA;		/* 0x248 */
	MMC_REGISTER RESERVED_0x24C;
	MMC_REGISTER FE;			/* 0x250 */
	MMC_REGISTER ADMAES;		/* 0x254 */
	MMC_REGISTER ADMASAL;		/* 0x258 */
	MMC_REGISTER ADMASAH;		/* 0x25C */
	MMC_REGISTER RESERVED_0x258_TO_0x2F8[(0x2F8 - 0x258) / sizeof(MMC_REGISTER)];
	MMC_REGISTER REV;			/* 0x2FC */
}mmc_t;

#define MMC0_addr (0x48060000)
#define MMC0 (*(mmc_t *) 0x48060000)

#define MMCHS0_addr (0x48060000)
#define MMCHS0 (*(mmc_t *) 0x48060000)

#define MMC1_addr (0x481D8000)
#define MMC1 (*(mmc_t *) 0x481D8000)

#define MMCHS1_addr (0x481D8000)
#define MMCHS1 (*(mmc_t *) 0x481D8000)

#endif /* MMC_DEF_H_ */
