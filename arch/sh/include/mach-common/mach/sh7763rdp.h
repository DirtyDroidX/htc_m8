#ifndef __ASM_SH_SH7763RDP_H
#define __ASM_SH_SH7763RDP_H

/*
 * linux/include/asm-sh/sh7763drp.h
 *
 * Copyright (C) 2008 Renesas Solutions
 * Copyright (C) 2008 Nobuhiro Iwamatsu <iwamatsu.nobuhiro@renesas.com>
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 */
#include <asm/addrspace.h>

#define MSTPCR1 0xFFC80038

#define PORT_PSEL0	0xFFEF0070
#define PORT_PSEL1	0xFFEF0072
#define PORT_PSEL2	0xFFEF0074
#define PORT_PSEL3	0xFFEF0076
#define PORT_PSEL4	0xFFEF0078

#define PORT_PACR	0xFFEF0000
#define PORT_PCCR	0xFFEF0004
#define PORT_PFCR	0xFFEF000A
#define PORT_PGCR	0xFFEF000C
#define PORT_PHCR	0xFFEF000E
#define PORT_PICR	0xFFEF0010
#define PORT_PJCR	0xFFEF0012
#define PORT_PKCR	0xFFEF0014
#define PORT_PLCR	0xFFEF0016
#define PORT_PMCR	0xFFEF0018
#define PORT_PNCR	0xFFEF001A

#define CPLD_BOARD_ID_ERV_REG	0xB1000000
#define CPLD_CPLD_CMD_REG		0xB1000006

#define USB_USBHSC	0xFFEC80f0

void init_sh7763rdp_IRQ(void);
int sh7763rdp_irq_demux(int irq);
#define __IO_PREFIX	sh7763rdp
#include <asm/io_generic.h>

#endif 
