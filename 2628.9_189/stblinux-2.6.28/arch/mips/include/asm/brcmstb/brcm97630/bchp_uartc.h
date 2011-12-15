/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *     All Rights Reserved
 *
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed with the hope that it will be useful, but without
 * any warranty; without even the implied warranty of merchantability or
 * fitness for a particular purpose.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 *
 * $brcm_Workfile: bchp_uartc.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 5/14/09 2:02a $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Wed May 13 17:31:34 2009
 *                 MD5 Checksum         397c7e3e68fca5836958d6d3dcfe31f9
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7630/rdb/b0/bchp_uartc.h $
 * 
 * Hydra_Software_Devel/1   5/14/09 2:02a tdo
 * PR55087: Initial check in
 *
 ***************************************************************************/

#ifndef BCHP_UARTC_H__
#define BCHP_UARTC_H__

/***************************************************************************
 *UARTC - UART C
 ***************************************************************************/
#define BCHP_UARTC_RBR                           0x00406b80 /* Receive Buffer Register */
#define BCHP_UARTC_THR                           0x00406b80 /* Transmit Holding Register */
#define BCHP_UARTC_DLH                           0x00406b84 /* Divisor Latch High */
#define BCHP_UARTC_DLL                           0x00406b80 /* Divisor Latch Low */
#define BCHP_UARTC_IER                           0x00406b84 /* Interrupt Enable Register */
#define BCHP_UARTC_IIR                           0x00406b88 /* Interrupt Identity Register */
#define BCHP_UARTC_FCR                           0x00406b88 /* FIFO Control Register */
#define BCHP_UARTC_LCR                           0x00406b8c /* Line Control Register */
#define BCHP_UARTC_MCR                           0x00406b90 /* Modem Control Register */
#define BCHP_UARTC_LSR                           0x00406b94 /* Line Status Register */
#define BCHP_UARTC_MSR                           0x00406b98 /* Modem Status Register */
#define BCHP_UARTC_SCR                           0x00406b9c /* Scratchpad Register */

#endif /* #ifndef BCHP_UARTC_H__ */

/* End of File */