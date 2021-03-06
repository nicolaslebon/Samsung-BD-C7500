/***************************************************************************
 *     Copyright (c) 1999-2008, Broadcom Corporation
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
 * $brcm_Workfile: bchp_vide_host_reg.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 12/2/08 8:13p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Tue Dec  2 13:55:11 2008
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
 * $brcm_Log: /magnum/basemodules/chp/7635/rdb/a0/bchp_vide_host_reg.h $
 * 
 * Hydra_Software_Devel/1   12/2/08 8:13p albertl
 * PR48688: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_VIDE_HOST_REG_H__
#define BCHP_VIDE_HOST_REG_H__

/***************************************************************************
 *VIDE_HOST_REG
 ***************************************************************************/
#define BCHP_VIDE_HOST_REG_REG_0                 0x00290000 /* "Host word 0" */
#define BCHP_VIDE_HOST_REG_REG_1                 0x00290004 /* "Host word 1" */
#define BCHP_VIDE_HOST_REG_REG_2                 0x00290014 /* "Host Control Word" */

/***************************************************************************
 *REG_0 - "Host word 0"
 ***************************************************************************/
/* VIDE_HOST_REG :: REG_0 :: SectorNumber [31:24] */
#define BCHP_VIDE_HOST_REG_REG_0_SectorNumber_MASK                 0xff000000
#define BCHP_VIDE_HOST_REG_REG_0_SectorNumber_SHIFT                24

/* VIDE_HOST_REG :: REG_0 :: SectorCnt [23:16] */
#define BCHP_VIDE_HOST_REG_REG_0_SectorCnt_MASK                    0x00ff0000
#define BCHP_VIDE_HOST_REG_REG_0_SectorCnt_SHIFT                   16

/* VIDE_HOST_REG :: REG_0 :: Features [15:08] */
#define BCHP_VIDE_HOST_REG_REG_0_Features_MASK                     0x0000ff00
#define BCHP_VIDE_HOST_REG_REG_0_Features_SHIFT                    8

/* VIDE_HOST_REG :: REG_0 :: Data [07:00] */
#define BCHP_VIDE_HOST_REG_REG_0_Data_MASK                         0x000000ff
#define BCHP_VIDE_HOST_REG_REG_0_Data_SHIFT                        0

/***************************************************************************
 *REG_1 - "Host word 1"
 ***************************************************************************/
/* VIDE_HOST_REG :: REG_1 :: CommandStatus [31:24] */
#define BCHP_VIDE_HOST_REG_REG_1_CommandStatus_MASK                0xff000000
#define BCHP_VIDE_HOST_REG_REG_1_CommandStatus_SHIFT               24

/* VIDE_HOST_REG :: REG_1 :: DeviceHead [23:16] */
#define BCHP_VIDE_HOST_REG_REG_1_DeviceHead_MASK                   0x00ff0000
#define BCHP_VIDE_HOST_REG_REG_1_DeviceHead_SHIFT                  16

/* VIDE_HOST_REG :: REG_1 :: CylinderHigh [15:08] */
#define BCHP_VIDE_HOST_REG_REG_1_CylinderHigh_MASK                 0x0000ff00
#define BCHP_VIDE_HOST_REG_REG_1_CylinderHigh_SHIFT                8

/* VIDE_HOST_REG :: REG_1 :: CylinderLow [07:00] */
#define BCHP_VIDE_HOST_REG_REG_1_CylinderLow_MASK                  0x000000ff
#define BCHP_VIDE_HOST_REG_REG_1_CylinderLow_SHIFT                 0

/***************************************************************************
 *REG_2 - "Host Control Word"
 ***************************************************************************/
/* VIDE_HOST_REG :: REG_2 :: reserved0 [31:24] */
#define BCHP_VIDE_HOST_REG_REG_2_reserved0_MASK                    0xff000000
#define BCHP_VIDE_HOST_REG_REG_2_reserved0_SHIFT                   24

/* VIDE_HOST_REG :: REG_2 :: DeviceCtlAltStatus [23:16] */
#define BCHP_VIDE_HOST_REG_REG_2_DeviceCtlAltStatus_MASK           0x00ff0000
#define BCHP_VIDE_HOST_REG_REG_2_DeviceCtlAltStatus_SHIFT          16

/* VIDE_HOST_REG :: REG_2 :: reserved1 [15:00] */
#define BCHP_VIDE_HOST_REG_REG_2_reserved1_MASK                    0x0000ffff
#define BCHP_VIDE_HOST_REG_REG_2_reserved1_SHIFT                   0

#endif /* #ifndef BCHP_VIDE_HOST_REG_H__ */

/* End of File */
