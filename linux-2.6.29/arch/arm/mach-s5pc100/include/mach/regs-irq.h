/* linux/arch/arm/mach-s5pc100/include/mach/regs-irq.h
 *
 * Copyright 2008 Openmoko, Inc.
 * Copyright 2008 Simtec Electronics
 *	http://armlinux.simtec.co.uk/
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * S5PC1XX - IRQ register definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_REGS_IRQ_H
#define __ASM_ARCH_REGS_IRQ_H __FILE__

#include <asm/hardware/vic.h>
#include <mach/map.h>
/* interrupt controller */
#define S5PC100_VIC0REG(x)          		((x) + S3C_VA_VIC0)
#define S5PC100_VIC1REG(x)          		((x) + S3C_VA_VIC1)
#define S5PC100_VIC2REG(x)         		((x) + S3C_VA_VIC2)

#define S5PC100_VIC0IRQSTATUS 			S5PC100_VIC0REG(0x000)
#define S5PC100_VIC0FIQSTATUS 			S5PC100_VIC0REG(0x004)
#define S5PC100_VIC0RAWINTR 			S5PC100_VIC0REG(0x008)
#define S5PC100_VIC0INTSELECT 			S5PC100_VIC0REG(0x00C)
#define S5PC100_VIC0INTENABLE 			S5PC100_VIC0REG(0x010)
#define S5PC100_VIC0INTENCLEAR 			S5PC100_VIC0REG(0x014)
#define S5PC100_VIC0SOFTINT 			S5PC100_VIC0REG(0x018)
#define S5PC100_VIC0SOFTINTCLEAR 		S5PC100_VIC0REG(0x01C)
#define S5PC100_VIC0PROTECTION 			S5PC100_VIC0REG(0x020)
#define S5PC100_VIC0SWPRIORITYMASK 		S5PC100_VIC0REG(0x024)
#define S5PC100_VIC0PRIORITYDAISY 		S5PC100_VIC0REG(0x028)
#define S5PC100_VIC0VECTADDR0 			S5PC100_VIC0REG(0x100)
#define S5PC100_VIC0VECTADDR1 			S5PC100_VIC0REG(0x104)
#define S5PC100_VIC0VECTADDR2 			S5PC100_VIC0REG(0x108)
#define S5PC100_VIC0VECTADDR3 			S5PC100_VIC0REG(0x10C)
#define S5PC100_VIC0VECTADDR4 			S5PC100_VIC0REG(0x110)
#define S5PC100_VIC0VECTADDR5 			S5PC100_VIC0REG(0x114)
#define S5PC100_VIC0VECTADDR6 			S5PC100_VIC0REG(0x118)
#define S5PC100_VIC0VECTADDR7 			S5PC100_VIC0REG(0x11C)
#define S5PC100_VIC0VECTADDR8 			S5PC100_VIC0REG(0x120)
#define S5PC100_VIC0VECTADDR9 			S5PC100_VIC0REG(0x124)
#define S5PC100_VIC0VECTADDR10 			S5PC100_VIC0REG(0x128)
#define S5PC100_VIC0VECTADDR11 			S5PC100_VIC0REG(0x12C)
#define S5PC100_VIC0VECTADDR12 			S5PC100_VIC0REG(0x130)
#define S5PC100_VIC0VECTADDR13 			S5PC100_VIC0REG(0x134)
#define S5PC100_VIC0VECTADDR14 			S5PC100_VIC0REG(0x138)
#define S5PC100_VIC0VECTADDR15 			S5PC100_VIC0REG(0x13C)
#define S5PC100_VIC0VECTADDR16 			S5PC100_VIC0REG(0x140)
#define S5PC100_VIC0VECTADDR17 			S5PC100_VIC0REG(0x144)
#define S5PC100_VIC0VECTADDR18 			S5PC100_VIC0REG(0x148)
#define S5PC100_VIC0VECTADDR19 			S5PC100_VIC0REG(0x14C)
#define S5PC100_VIC0VECTADDR20 			S5PC100_VIC0REG(0x150)
#define S5PC100_VIC0VECTADDR21 			S5PC100_VIC0REG(0x154)
#define S5PC100_VIC0VECTADDR22 			S5PC100_VIC0REG(0x158)
#define S5PC100_VIC0VECTADDR23 			S5PC100_VIC0REG(0x15C)
#define S5PC100_VIC0VECTADDR24 			S5PC100_VIC0REG(0x160)
#define S5PC100_VIC0VECTADDR25 			S5PC100_VIC0REG(0x164)
#define S5PC100_VIC0VECTADDR26 			S5PC100_VIC0REG(0x168)
#define S5PC100_VIC0VECTADDR27 			S5PC100_VIC0REG(0x16C)
#define S5PC100_VIC0VECTADDR28 			S5PC100_VIC0REG(0x170)
#define S5PC100_VIC0VECTADDR29 			S5PC100_VIC0REG(0x174)
#define S5PC100_VIC0VECTADDR30 			S5PC100_VIC0REG(0x178)
#define S5PC100_VIC0VECTADDR31 			S5PC100_VIC0REG(0x17C)
#define S5PC100_VIC0VECPRIORITY0 		S5PC100_VIC0REG(0x200)
#define S5PC100_VIC0VECTPRIORITY1 		S5PC100_VIC0REG(0x204)
#define S5PC100_VIC0VECTPRIORITY2 		S5PC100_VIC0REG(0x208)
#define S5PC100_VIC0VECTPRIORITY3 		S5PC100_VIC0REG(0x20C)
#define S5PC100_VIC0VECTPRIORITY4 		S5PC100_VIC0REG(0x210)
#define S5PC100_VIC0VECTPRIORITY5 		S5PC100_VIC0REG(0x214)
#define S5PC100_VIC0VECTPRIORITY6 		S5PC100_VIC0REG(0x218)
#define S5PC100_VIC0VECTPRIORITY7 		S5PC100_VIC0REG(0x21C)
#define S5PC100_VIC0VECTPRIORITY8 		S5PC100_VIC0REG(0x220)
#define S5PC100_VIC0VECTPRIORITY9 		S5PC100_VIC0REG(0x224)
#define S5PC100_VIC0VECTPRIORITY10 		S5PC100_VIC0REG(0x228)
#define S5PC100_VIC0VECTPRIORITY11 		S5PC100_VIC0REG(0x22C)
#define S5PC100_VIC0VECTPRIORITY12 		S5PC100_VIC0REG(0x230)
#define S5PC100_VIC0VECTPRIORITY13 		S5PC100_VIC0REG(0x234)
#define S5PC100_VIC0VECTPRIORITY14 		S5PC100_VIC0REG(0x238)
#define S5PC100_VIC0VECTPRIORITY15 		S5PC100_VIC0REG(0x23C)
#define S5PC100_VIC0VECTPRIORITY16 		S5PC100_VIC0REG(0x240)
#define S5PC100_VIC0VECTPRIORITY17 		S5PC100_VIC0REG(0x244)
#define S5PC100_VIC0VECTPRIORITY18 		S5PC100_VIC0REG(0x248)
#define S5PC100_VIC0VECTPRIORITY19 		S5PC100_VIC0REG(0x24C)
#define S5PC100_VIC0VECTPRIORITY20 		S5PC100_VIC0REG(0x250)
#define S5PC100_VIC0VECTPRIORITY21 		S5PC100_VIC0REG(0x254)
#define S5PC100_VIC0VECTPRIORITY22 		S5PC100_VIC0REG(0x258)
#define S5PC100_VIC0VECTPRIORITY23 		S5PC100_VIC0REG(0x25C)
#define S5PC100_VIC0VECTPRIORITY24 		S5PC100_VIC0REG(0x260)
#define S5PC100_VIC0VECTPRIORITY25 		S5PC100_VIC0REG(0x264)
#define S5PC100_VIC0VECTPRIORITY26 		S5PC100_VIC0REG(0x268)
#define S5PC100_VIC0VECTPRIORITY27 		S5PC100_VIC0REG(0x26C)
#define S5PC100_VIC0VECTPRIORITY28 		S5PC100_VIC0REG(0x270)
#define S5PC100_VIC0VECTPRIORITY29 		S5PC100_VIC0REG(0x274)
#define S5PC100_VIC0VECTPRIORITY30 		S5PC100_VIC0REG(0x278)
#define S5PC100_VIC0VECTPRIORITY31 		S5PC100_VIC0REG(0x27C)
#define S5PC100_VIC0ADDRESS 			S5PC100_VIC0REG(0xF00)
#define S5PC100_VIC0PERIPHID0 			S5PC100_VIC0REG(0xFE0)
#define S5PC100_VIC0PERIPHID1 			S5PC100_VIC0REG(0xFE4)
#define S5PC100_VIC0PERIPHID2 			S5PC100_VIC0REG(0xFE8)
#define S5PC100_VIC0PERIPHID3 			S5PC100_VIC0REG(0xFEC)
#define S5PC100_VIC0PCELLID0 			S5PC100_VIC0REG(0xFF0)
#define S5PC100_VIC0PCELLID1 			S5PC100_VIC0REG(0xFF4)
#define S5PC100_VIC0PCELLID2 			S5PC100_VIC0REG(0xFF8)
#define S5PC100_VIC0PCELLID3 			S5PC100_VIC0REG(0xFFC)
#define S5PC100_VIC1IRQSTATUS 			S5PC100_VIC1REG(0x000)
#define S5PC100_VIC1FIQSTATUS 			S5PC100_VIC1REG(0x004)
#define S5PC100_VIC1RAWINTR 			S5PC100_VIC1REG(0x008)
#define S5PC100_VIC1INTSELECT 			S5PC100_VIC1REG(0x00C)
#define S5PC100_VIC1INTENABLE 			S5PC100_VIC1REG(0x010)
#define S5PC100_VIC1INTENCLEAR 			S5PC100_VIC1REG(0x014)
#define S5PC100_VIC1SOFTINT 			S5PC100_VIC1REG(0x018)
#define S5PC100_VIC1SOFTINTCLEAR 		S5PC100_VIC1REG(0x01C)
#define S5PC100_VIC1PROTECTION 			S5PC100_VIC1REG(0x020)
#define S5PC100_VIC1SWPRIORITYMASK 		S5PC100_VIC1REG(0x024)
#define S5PC100_VIC1PRIORITYDAISY 		S5PC100_VIC1REG(0x028)
#define S5PC100_VIC1VECTADDR0 			S5PC100_VIC1REG(0x100)
#define S5PC100_VIC1VECTADDR1 			S5PC100_VIC1REG(0x104)
#define S5PC100_VIC1VECTADDR2 			S5PC100_VIC1REG(0x108)
#define S5PC100_VIC1VECTADDR3 			S5PC100_VIC1REG(0x10C)
#define S5PC100_VIC1VECTADDR4 			S5PC100_VIC1REG(0x110)
#define S5PC100_VIC1VECTADDR5 			S5PC100_VIC1REG(0x114)
#define S5PC100_VIC1VECTADDR6 			S5PC100_VIC1REG(0x118)
#define S5PC100_VIC1VECTADDR7 			S5PC100_VIC1REG(0x11C)
#define S5PC100_VIC1VECTADDR8 			S5PC100_VIC1REG(0x120)
#define S5PC100_VIC1VECTADDR9 			S5PC100_VIC1REG(0x124)
#define S5PC100_VIC1VECTADDR10 			S5PC100_VIC1REG(0x128)
#define S5PC100_VIC1VECTADDR11 			S5PC100_VIC1REG(0x12C)
#define S5PC100_VIC1VECTADDR12 			S5PC100_VIC1REG(0x130)
#define S5PC100_VIC1VECTADDR13 			S5PC100_VIC1REG(0x134)
#define S5PC100_VIC1VECTADDR14 			S5PC100_VIC1REG(0x138)
#define S5PC100_VIC1VECTADDR15 			S5PC100_VIC1REG(0x13C)
#define S5PC100_VIC1VECTADDR16 			S5PC100_VIC1REG(0x140)
#define S5PC100_VIC1VECTADDR17 			S5PC100_VIC1REG(0x144)
#define S5PC100_VIC1VECTADDR18 			S5PC100_VIC1REG(0x148)
#define S5PC100_VIC1VECTADDR19 			S5PC100_VIC1REG(0x14C)
#define S5PC100_VIC1VECTADDR20 			S5PC100_VIC1REG(0x150)
#define S5PC100_VIC1VECTADDR21 			S5PC100_VIC1REG(0x154)
#define S5PC100_VIC1VECTADDR22 			S5PC100_VIC1REG(0x158)
#define S5PC100_VIC1VECTADDR23 			S5PC100_VIC1REG(0x15C)
#define S5PC100_VIC1VECTADDR24 			S5PC100_VIC1REG(0x160)
#define S5PC100_VIC1VECTADDR25 			S5PC100_VIC1REG(0x164)
#define S5PC100_VIC1VECTADDR26 			S5PC100_VIC1REG(0x168)
#define S5PC100_VIC1VECTADDR27 			S5PC100_VIC1REG(0x16C)
#define S5PC100_VIC1VECTADDR28 			S5PC100_VIC1REG(0x170)
#define S5PC100_VIC1VECTADDR29 			S5PC100_VIC1REG(0x174)
#define S5PC100_VIC1VECTADDR30 			S5PC100_VIC1REG(0x178)
#define S5PC100_VIC1VECTADDR31 			S5PC100_VIC1REG(0x17C)
#define S5PC100_VIC1VECPRIORITY0 		S5PC100_VIC1REG(0x200)
#define S5PC100_VIC1VECTPRIORITY1 		S5PC100_VIC1REG(0x204)
#define S5PC100_VIC1VECTPRIORITY2 		S5PC100_VIC1REG(0x208)
#define S5PC100_VIC1VECTPRIORITY3 		S5PC100_VIC1REG(0x20C)
#define S5PC100_VIC1VECTPRIORITY4 		S5PC100_VIC1REG(0x210)
#define S5PC100_VIC1VECTPRIORITY5 		S5PC100_VIC1REG(0x214)
#define S5PC100_VIC1VECTPRIORITY6 		S5PC100_VIC1REG(0x218)
#define S5PC100_VIC1VECTPRIORITY7 		S5PC100_VIC1REG(0x21C)
#define S5PC100_VIC1VECTPRIORITY8 		S5PC100_VIC1REG(0x220)
#define S5PC100_VIC1VECTPRIORITY9 		S5PC100_VIC1REG(0x224)
#define S5PC100_VIC1VECTPRIORITY10 		S5PC100_VIC1REG(0x228)
#define S5PC100_VIC1VECTPRIORITY11 		S5PC100_VIC1REG(0x22C)
#define S5PC100_VIC1VECTPRIORITY12 		S5PC100_VIC1REG(0x230)
#define S5PC100_VIC1VECTPRIORITY13 		S5PC100_VIC1REG(0x234)
#define S5PC100_VIC1VECTPRIORITY14 		S5PC100_VIC1REG(0x238)
#define S5PC100_VIC1VECTPRIORITY15 		S5PC100_VIC1REG(0x23C)
#define S5PC100_VIC1VECTPRIORITY16 		S5PC100_VIC1REG(0x240)
#define S5PC100_VIC1VECTPRIORITY17 		S5PC100_VIC1REG(0x244)
#define S5PC100_VIC1VECTPRIORITY18 		S5PC100_VIC1REG(0x248)
#define S5PC100_VIC1VECTPRIORITY19 		S5PC100_VIC1REG(0x24C)
#define S5PC100_VIC1VECTPRIORITY20 		S5PC100_VIC1REG(0x250)
#define S5PC100_VIC1VECTPRIORITY21 		S5PC100_VIC1REG(0x254)
#define S5PC100_VIC1VECTPRIORITY22 		S5PC100_VIC1REG(0x258)
#define S5PC100_VIC1VECTPRIORITY23 		S5PC100_VIC1REG(0x25C)
#define S5PC100_VIC1VECTPRIORITY24 		S5PC100_VIC1REG(0x260)
#define S5PC100_VIC1VECTPRIORITY25 		S5PC100_VIC1REG(0x264)
#define S5PC100_VIC1VECTPRIORITY26 		S5PC100_VIC1REG(0x268)
#define S5PC100_VIC1VECTPRIORITY27 		S5PC100_VIC1REG(0x26C)
#define S5PC100_VIC1VECTPRIORITY28 		S5PC100_VIC1REG(0x270)
#define S5PC100_VIC1VECTPRIORITY29 		S5PC100_VIC1REG(0x274)
#define S5PC100_VIC1VECTPRIORITY30 		S5PC100_VIC1REG(0x278)
#define S5PC100_VIC1VECTPRIORITY31 		S5PC100_VIC1REG(0x27C)
#define S5PC100_VIC1ADDRESS 			S5PC100_VIC1REG(0xF00)
#define S5PC100_VIC1PERIPHID0 			S5PC100_VIC1REG(0xFE0)
#define S5PC100_VIC1PERIPHID1 			S5PC100_VIC1REG(0xFE4)
#define S5PC100_VIC1PERIPHID2 			S5PC100_VIC1REG(0xFE8)
#define S5PC100_VIC1PCELLID0 			S5PC100_VIC1REG(0xFF0)
#define S5PC100_VIC1PCELLID1 			S5PC100_VIC1REG(0xFF4)
#define S5PC100_VIC1PCELLID2 			S5PC100_VIC1REG(0xFF8)
#define S5PC100_VIC1PCELLID3 			S5PC100_VIC1REG(0xFFC)
#define S5PC100_VIC2IRQSTATUS 			S5PC100_VIC2REG(0x000)
#define S5PC100_VIC2FIQSTATUS 			S5PC100_VIC2REG(0x004)
#define S5PC100_VIC2RAWINTR 			S5PC100_VIC2REG(0x008)
#define S5PC100_VIC2INTSELECT 			S5PC100_VIC2REG(0x00C)
#define S5PC100_VIC2INTENABLE 			S5PC100_VIC2REG(0x010)
#define S5PC100_VIC2INTENCLEAR 			S5PC100_VIC2REG(0x014)
#define S5PC100_VIC2SOFTINT 			S5PC100_VIC2REG(0x018)
#define S5PC100_VIC2SOFTINTCLEAR 		S5PC100_VIC2REG(0x01C)
#define S5PC100_VIC2PROTECTION 			S5PC100_VIC2REG(0x020)
#define S5PC100_VIC2SWPRIORITYMASK 		S5PC100_VIC2REG(0x024)
#define S5PC100_VIC2PRIORITYDAISY 		S5PC100_VIC2REG(0x028)
#define S5PC100_VIC2VECTADDR0 			S5PC100_VIC2REG(0x100)
#define S5PC100_VIC2VECTADDR1 			S5PC100_VIC2REG(0x104)
#define S5PC100_VIC2VECTADDR2 			S5PC100_VIC2REG(0x108)
#define S5PC100_VIC2VECTADDR3 			S5PC100_VIC2REG(0x10C)
#define S5PC100_VIC2VECTADDR4 			S5PC100_VIC2REG(0x110)
#define S5PC100_VIC2VECTADDR5 			S5PC100_VIC2REG(0x114)
#define S5PC100_VIC2VECTADDR6 			S5PC100_VIC2REG(0x118)
#define S5PC100_VIC2VECTADDR7 			S5PC100_VIC2REG(0x11C)
#define S5PC100_VIC2VECTADDR8 			S5PC100_VIC2REG(0x120)
#define S5PC100_VIC2VECTADDR9 			S5PC100_VIC2REG(0x124)
#define S5PC100_VIC2VECTADDR10 			S5PC100_VIC2REG(0x128)
#define S5PC100_VIC2VECTADDR11 			S5PC100_VIC2REG(0x12C)
#define S5PC100_VIC2VECTADDR12 			S5PC100_VIC2REG(0x130)
#define S5PC100_VIC2VECTADDR13 			S5PC100_VIC2REG(0x134)
#define S5PC100_VIC2VECTADDR14 			S5PC100_VIC2REG(0x138)
#define S5PC100_VIC2VECTADDR15 			S5PC100_VIC2REG(0x13C)
#define S5PC100_VIC2VECTADDR16 			S5PC100_VIC2REG(0x140)
#define S5PC100_VIC2VECTADDR17 			S5PC100_VIC2REG(0x144)
#define S5PC100_VIC2VECTADDR18 			S5PC100_VIC2REG(0x148)
#define S5PC100_VIC2VECTADDR19 			S5PC100_VIC2REG(0x14C)
#define S5PC100_VIC2VECTADDR20 			S5PC100_VIC2REG(0x150)
#define S5PC100_VIC2VECTADDR21 			S5PC100_VIC2REG(0x154)
#define S5PC100_VIC2VECTADDR22 			S5PC100_VIC2REG(0x158)
#define S5PC100_VIC2VECTADDR23 			S5PC100_VIC2REG(0x15C)
#define S5PC100_VIC2VECTADDR24 			S5PC100_VIC2REG(0x160)
#define S5PC100_VIC2VECTADDR25 			S5PC100_VIC2REG(0x164)
#define S5PC100_VIC2VECTADDR26 			S5PC100_VIC2REG(0x168)
#define S5PC100_VIC2VECTADDR27 			S5PC100_VIC2REG(0x16C)
#define S5PC100_VIC2VECTADDR28 			S5PC100_VIC2REG(0x170)
#define S5PC100_VIC2VECTADDR29 			S5PC100_VIC2REG(0x174)
#define S5PC100_VIC2VECTADDR30 			S5PC100_VIC2REG(0x178)
#define S5PC100_VIC2VECTADDR31 			S5PC100_VIC2REG(0x17C)
#define S5PC100_VIC2VECPRIORITY0 		S5PC100_VIC2REG(0x200)
#define S5PC100_VIC2VECTPRIORITY1 		S5PC100_VIC2REG(0x204)
#define S5PC100_VIC2VECTPRIORITY2 		S5PC100_VIC2REG(0x208)
#define S5PC100_VIC2VECTPRIORITY3 		S5PC100_VIC2REG(0x20C)
#define S5PC100_VIC2VECTPRIORITY4 		S5PC100_VIC2REG(0x210)
#define S5PC100_VIC2VECTPRIORITY5 		S5PC100_VIC2REG(0x214)
#define S5PC100_VIC2VECTPRIORITY6 		S5PC100_VIC2REG(0x218)
#define S5PC100_VIC2VECTPRIORITY7 		S5PC100_VIC2REG(0x21C)
#define S5PC100_VIC2VECTPRIORITY8 		S5PC100_VIC2REG(0x220)
#define S5PC100_VIC2VECTPRIORITY9 		S5PC100_VIC2REG(0x224)
#define S5PC100_VIC2VECTPRIORITY10 		S5PC100_VIC2REG(0x228)
#define S5PC100_VIC2VECTPRIORITY11 		S5PC100_VIC2REG(0x22C)
#define S5PC100_VIC2VECTPRIORITY12 		S5PC100_VIC2REG(0x230)
#define S5PC100_VIC2VECTPRIORITY13 		S5PC100_VIC2REG(0x234)
#define S5PC100_VIC2VECTPRIORITY14 		S5PC100_VIC2REG(0x238)
#define S5PC100_VIC2VECTPRIORITY15 		S5PC100_VIC2REG(0x23C)
#define S5PC100_VIC2VECTPRIORITY16 		S5PC100_VIC2REG(0x240)
#define S5PC100_VIC2VECTPRIORITY17 		S5PC100_VIC2REG(0x244)
#define S5PC100_VIC2VECTPRIORITY18 		S5PC100_VIC2REG(0x248)
#define S5PC100_VIC2VECTPRIORITY19 		S5PC100_VIC2REG(0x24C)
#define S5PC100_VIC2VECTPRIORITY20 		S5PC100_VIC2REG(0x250)
#define S5PC100_VIC2VECTPRIORITY21 		S5PC100_VIC2REG(0x254)
#define S5PC100_VIC2VECTPRIORITY22 		S5PC100_VIC2REG(0x258)
#define S5PC100_VIC2VECTPRIORITY23 		S5PC100_VIC2REG(0x25C)
#define S5PC100_VIC2VECTPRIORITY24 		S5PC100_VIC2REG(0x260)
#define S5PC100_VIC2VECTPRIORITY25 		S5PC100_VIC2REG(0x264)
#define S5PC100_VIC2VECTPRIORITY26 		S5PC100_VIC2REG(0x268)
#define S5PC100_VIC2VECTPRIORITY27 		S5PC100_VIC2REG(0x26C)
#define S5PC100_VIC2VECTPRIORITY28 		S5PC100_VIC2REG(0x270)
#define S5PC100_VIC2VECTPRIORITY29 		S5PC100_VIC2REG(0x274)
#define S5PC100_VIC2VECTPRIORITY30 		S5PC100_VIC2REG(0x278)
#define S5PC100_VIC2VECTPRIORITY31 		S5PC100_VIC2REG(0x27C)
#define S5PC100_VIC2ADDRESS 			S5PC100_VIC2REG(0xF00)
#define S5PC100_VIC2PERIPHID0 			S5PC100_VIC2REG(0xFE0)
#define S5PC100_VIC2PERIPHID1 			S5PC100_VIC2REG(0xFE4)
#define S5PC100_VIC2PERIPHID2 			S5PC100_VIC2REG(0xFE8)
#define S5PC100_VIC2PERIPHID3 			S5PC100_VIC2REG(0xFEC)
#define S5PC100_VIC2PCELLID0 			S5PC100_VIC2REG(0xFF0)
#define S5PC100_VIC2PCELLID1 			S5PC100_VIC2REG(0xFF4)
#define S5PC100_VIC2PCELLID2 			S5PC100_VIC2REG(0xFF8)
#define S5PC100_VIC2PCELLID3 			S5PC100_VIC2REG(0xFFC)

#endif /* __ASM_ARCH_REGS_IRQ_H */
