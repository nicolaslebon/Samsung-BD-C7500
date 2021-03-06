/***************************************************************************
 *     Copyright (c) 1999-2008, Broadcom Corporation
 *     All Rights Reserved
 *     Confidential Property of Broadcom Corporation
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
 * $brcm_Workfile: bchp_bsp_cmdbuf.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 12/2/08 5:32p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Tue Dec  2 14:04:21 2008
 *                 MD5 Checksum         90975bbcdf76045bb6bd092e6bdf481b
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7635/rdb/a0/bchp_bsp_cmdbuf.h $
 * 
 * Hydra_Software_Devel/1   12/2/08 5:32p albertl
 * PR48688: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_BSP_CMDBUF_H__
#define BCHP_BSP_CMDBUF_H__

/***************************************************************************
 *BSP_CMDBUF - BSP Command Buffer
 ***************************************************************************/

/***************************************************************************
 *DMEM%i - Data Memory Address 0..511
 ***************************************************************************/
#define BCHP_BSP_CMDBUF_DMEMi_ARRAY_BASE                           0x00307800
#define BCHP_BSP_CMDBUF_DMEMi_ARRAY_START                          0
#define BCHP_BSP_CMDBUF_DMEMi_ARRAY_END                            511
#define BCHP_BSP_CMDBUF_DMEMi_ARRAY_ELEMENT_SIZE                   32

/***************************************************************************
 *DMEM%i - Data Memory Address 0..511
 ***************************************************************************/
/* BSP_CMDBUF :: DMEMi :: DATA [31:00] */
#define BCHP_BSP_CMDBUF_DMEMi_DATA_MASK                            0xffffffff
#define BCHP_BSP_CMDBUF_DMEMi_DATA_SHIFT                           0


#endif /* #ifndef BCHP_BSP_CMDBUF_H__ */

/* End of File */
