/*
 * Copyright (C) 2010 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 */
#ifndef __EPDC_REGS_V2_INCLUDED__
#define __EPDC_REGS_V2_INCLUDED__

extern void __iomem *epdc_base;

/*************************************
 * Register addresses
 **************************************/

#define EPDC_CTRL			(epdc_base + 0x000)
#define EPDC_CTRL_SET			(epdc_base + 0x004)
#define EPDC_CTRL_CLEAR		(epdc_base + 0x008)
#define EPDC_CTRL_TOGGLE		(epdc_base + 0x00C)
#define EPDC_WVADDR			(epdc_base + 0x020)
#define EPDC_WB_ADDR			(epdc_base + 0x030)
#define EPDC_RES			(epdc_base + 0x040)
#define EPDC_FORMAT			(epdc_base + 0x050)
#define EPDC_FORMAT_SET		(epdc_base + 0x054)
#define EPDC_FORMAT_CLEAR		(epdc_base + 0x058)
#define EPDC_FORMAT_TOGGLE		(epdc_base + 0x05C)
#define EPDC_FIFOCTRL			(epdc_base + 0x0A0)
#define EPDC_FIFOCTRL_SET		(epdc_base + 0x0A4)
#define EPDC_FIFOCTRL_CLEAR		(epdc_base + 0x0A8)
#define EPDC_FIFOCTRL_TOGGLE		(epdc_base + 0x0AC)
#define EPDC_UPD_ADDR			(epdc_base + 0x100)
#define EPDC_UPD_CORD			(epdc_base + 0x120)
#define EPDC_UPD_SIZE			(epdc_base + 0x140)
#define EPDC_UPD_CTRL			(epdc_base + 0x160)
#define EPDC_UPD_FIXED			(epdc_base + 0x180)
#define EPDC_TEMP			(epdc_base + 0x1A0)
#define EPDC_TCE_CTRL			(epdc_base + 0x200)
#define EPDC_TCE_SDCFG			(epdc_base + 0x220)
#define EPDC_TCE_GDCFG			(epdc_base + 0x240)
#define EPDC_TCE_HSCAN1		(epdc_base + 0x260)
#define EPDC_TCE_HSCAN2		(epdc_base + 0x280)
#define EPDC_TCE_VSCAN			(epdc_base + 0x2A0)
#define EPDC_TCE_OE			(epdc_base + 0x2C0)
#define EPDC_TCE_POLARITY		(epdc_base + 0x2E0)
#define EPDC_TCE_TIMING1		(epdc_base + 0x300)
#define EPDC_TCE_TIMING2		(epdc_base + 0x310)
#define EPDC_TCE_TIMING3		(epdc_base + 0x320)
#define EPDC_IRQ_MASK			(epdc_base + 0x400)
#define EPDC_IRQ_MASK_SET		(epdc_base + 0x404)
#define EPDC_IRQ_MASK_CLEAR		(epdc_base + 0x408)
#define EPDC_IRQ_MASK_TOGGLE		(epdc_base + 0x40C)
#define EPDC_IRQ			(epdc_base + 0x420)
#define EPDC_IRQ_SET			(epdc_base + 0x424)
#define EPDC_IRQ_CLEAR			(epdc_base + 0x428)
#define EPDC_IRQ_TOGGLE		(epdc_base + 0x42C)
#define EPDC_STATUS_LUTS		(epdc_base + 0x440)
#define EPDC_STATUS_LUTS_SET	(epdc_base + 0x444)
#define EPDC_STATUS_LUTS_CLEAR	(epdc_base + 0x448)
#define EPDC_STATUS_LUTS_TOGGLE	(epdc_base + 0x44C)
#define EPDC_STATUS_NEXTLUT		(epdc_base + 0x460)
#define EPDC_STATUS_COL		(epdc_base + 0x480)
#define EPDC_STATUS			(epdc_base + 0x4A0)
#define EPDC_STATUS_SET		(epdc_base + 0x4A4)
#define EPDC_STATUS_CLEAR		(epdc_base + 0x4A8)
#define EPDC_STATUS_TOGGLE		(epdc_base + 0x4AC)
#define EPDC_DEBUG			(epdc_base + 0x500)
#define EPDC_DEBUG_LUT0		(epdc_base + 0x540)
#define EPDC_DEBUG_LUT1		(epdc_base + 0x550)
#define EPDC_DEBUG_LUT2		(epdc_base + 0x560)
#define EPDC_DEBUG_LUT3		(epdc_base + 0x570)
#define EPDC_DEBUG_LUT4		(epdc_base + 0x580)
#define EPDC_DEBUG_LUT5		(epdc_base + 0x590)
#define EPDC_DEBUG_LUT6		(epdc_base + 0x5A0)
#define EPDC_DEBUG_LUT7		(epdc_base + 0x5B0)
#define EPDC_DEBUG_LUT8		(epdc_base + 0x5C0)
#define EPDC_DEBUG_LUT9		(epdc_base + 0x5D0)
#define EPDC_DEBUG_LUT10		(epdc_base + 0x5E0)
#define EPDC_DEBUG_LUT11		(epdc_base + 0x5F0)
#define EPDC_DEBUG_LUT12		(epdc_base + 0x600)
#define EPDC_DEBUG_LUT13		(epdc_base + 0x610)
#define EPDC_DEBUG_LUT14		(epdc_base + 0x620)
#define EPDC_DEBUG_LUT15		(epdc_base + 0x630)
#define EPDC_GPIO			(epdc_base + 0x700)
#define EPDC_VERSION			(epdc_base + 0x7F0)

/*
 * Register field definitions
 */

enum {
/* EPDC_CTRL field values */
	EPDC_CTRL_SFTRST = 0x80000000,
	EPDC_CTRL_CLKGATE = 0x40000000,
	EPDC_CTRL_SRAM_POWERDOWN = 0x100,
	EPDC_CTRL_UPD_DATA_SWIZZLE_MASK = 0xC0,
	EPDC_CTRL_UPD_DATA_SWIZZLE_NO_SWAP = 0,
	EPDC_CTRL_UPD_DATA_SWIZZLE_ALL_BYTES_SWAP = 0x40,
	EPDC_CTRL_UPD_DATA_SWIZZLE_HWD_SWAP = 0x80,
	EPDC_CTRL_UPD_DATA_SWIZZLE_HWD_BYTE_SWAP = 0xC0,
	EPDC_CTRL_LUT_DATA_SWIZZLE_MASK = 0x30,
	EPDC_CTRL_LUT_DATA_SWIZZLE_NO_SWAP = 0,
	EPDC_CTRL_LUT_DATA_SWIZZLE_ALL_BYTES_SWAP = 0x10,
	EPDC_CTRL_LUT_DATA_SWIZZLE_HWD_SWAP = 0x20,
	EPDC_CTRL_LUT_DATA_SWIZZLE_HWD_BYTE_SWAP = 0x30,
	EPDC_CTRL_BURST_LEN_8_8 = 0x1,
	EPDC_CTRL_BURST_LEN_8_16 = 0,

/* EPDC_RES field values */
	EPDC_RES_VERTICAL_MASK = 0x1FFF0000,
	EPDC_RES_VERTICAL_OFFSET = 16,
	EPDC_RES_HORIZONTAL_MASK = 0x1FFF,
	EPDC_RES_HORIZONTAL_OFFSET = 0,

/* EPDC_FORMAT field values */
	EPDC_FORMAT_BUF_PIXEL_SCALE_ROUND = 0x1000000,
	EPDC_FORMAT_DEFAULT_TFT_PIXEL_MASK = 0xFF0000,
	EPDC_FORMAT_DEFAULT_TFT_PIXEL_OFFSET = 16,
	EPDC_FORMAT_BUF_PIXEL_FORMAT_P2N = 0x200,
	EPDC_FORMAT_BUF_PIXEL_FORMAT_P3N = 0x300,
	EPDC_FORMAT_BUF_PIXEL_FORMAT_P4N = 0x400,
	EPDC_FORMAT_BUF_PIXEL_FORMAT_P5N = 0x500,
	EPDC_FORMAT_TFT_PIXEL_FORMAT_2BIT = 0x0,
	EPDC_FORMAT_TFT_PIXEL_FORMAT_2BIT_VCOM = 0x1,
	EPDC_FORMAT_TFT_PIXEL_FORMAT_4BIT = 0x2,
	EPDC_FORMAT_TFT_PIXEL_FORMAT_4BIT_VCOM = 0x3,

/* EPDC_FIFOCTRL field values */
	EPDC_FIFOCTRL_ENABLE_PRIORITY = 0x80000000,
	EPDC_FIFOCTRL_FIFO_INIT_LEVEL_MASK = 0xFF0000,
	EPDC_FIFOCTRL_FIFO_INIT_LEVEL_OFFSET = 16,
	EPDC_FIFOCTRL_FIFO_H_LEVEL_MASK = 0xFF00,
	EPDC_FIFOCTRL_FIFO_H_LEVEL_OFFSET = 8,
	EPDC_FIFOCTRL_FIFO_L_LEVEL_MASK = 0xFF,
	EPDC_FIFOCTRL_FIFO_L_LEVEL_OFFSET = 0,

/* EPDC_UPD_CORD field values */
	EPDC_UPD_CORD_YCORD_MASK = 0x1FFF0000,
	EPDC_UPD_CORD_YCORD_OFFSET = 16,
	EPDC_UPD_CORD_XCORD_MASK = 0x1FFF,
	EPDC_UPD_CORD_XCORD_OFFSET = 0,

/* EPDC_UPD_SIZE field values */
	EPDC_UPD_SIZE_HEIGHT_MASK = 0x1FFF0000,
	EPDC_UPD_SIZE_HEIGHT_OFFSET = 16,
	EPDC_UPD_SIZE_WIDTH_MASK = 0x1FFF,
	EPDC_UPD_SIZE_WIDTH_OFFSET = 0,

/* EPDC_UPD_CTRL field values */
	EPDC_UPD_CTRL_USE_FIXED = 0x80000000,
	EPDC_UPD_CTRL_LUT_SEL_MASK = 0xF0000,
	EPDC_UPD_CTRL_LUT_SEL_OFFSET = 16,
	EPDC_UPD_CTRL_WAVEFORM_MODE_MASK = 0xFF00,
	EPDC_UPD_CTRL_WAVEFORM_MODE_OFFSET = 8,
	EPDC_UPD_CTRL_UPDATE_MODE_FULL = 0x1,

/* EPDC_UPD_FIXED field values */
	EPDC_UPD_FIXED_FIXNP_EN = 0x80000000,
	EPDC_UPD_FIXED_FIXCP_EN = 0x40000000,
	EPDC_UPD_FIXED_FIXNP_MASK = 0xFF00,
	EPDC_UPD_FIXED_FIXNP_OFFSET = 8,
	EPDC_UPD_FIXED_FIXCP_MASK = 0xFF,
	EPDC_UPD_FIXED_FIXCP_OFFSET = 0,

/* EPDC_TCE_CTRL field values */
	EPDC_TCE_CTRL_VSCAN_HOLDOFF_MASK = 0x1FF0000,
	EPDC_TCE_CTRL_VSCAN_HOLDOFF_OFFSET = 16,
	EPDC_TCE_CTRL_VCOM_VAL_MASK = 0xC00,
	EPDC_TCE_CTRL_VCOM_VAL_OFFSET = 10,
	EPDC_TCE_CTRL_VCOM_MODE_AUTO = 0x200,
	EPDC_TCE_CTRL_VCOM_MODE_MANUAL = 0x000,
	EPDC_TCE_CTRL_DDR_MODE_ENABLE = 0x100,
	EPDC_TCE_CTRL_LVDS_MODE_CE_ENABLE = 0x80,
	EPDC_TCE_CTRL_LVDS_MODE_ENABLE = 0x40,
	EPDC_TCE_CTRL_SCAN_DIR_1_UP = 0x20,
	EPDC_TCE_CTRL_SCAN_DIR_0_UP = 0x10,
	EPDC_TCE_CTRL_DUAL_SCAN_ENABLE = 0x8,
	EPDC_TCE_CTRL_SDDO_WIDTH_16BIT = 0x4,
	EPDC_TCE_CTRL_PIXELS_PER_SDCLK_2 = 1,
	EPDC_TCE_CTRL_PIXELS_PER_SDCLK_4 = 2,
	EPDC_TCE_CTRL_PIXELS_PER_SDCLK_8 = 3,

/* EPDC_TCE_SDCFG field values */
	EPDC_TCE_SDCFG_SDCLK_HOLD = 0x200000,
	EPDC_TCE_SDCFG_SDSHR = 0x100000,
	EPDC_TCE_SDCFG_NUM_CE_MASK = 0xF0000,
	EPDC_TCE_SDCFG_NUM_CE_OFFSET = 16,
	EPDC_TCE_SDCFG_SDDO_REFORMAT_STANDARD = 0,
	EPDC_TCE_SDCFG_SDDO_REFORMAT_FLIP_PIXELS = 0x4000,
	EPDC_TCE_SDCFG_SDDO_INVERT_ENABLE = 0x2000,
	EPDC_TCE_SDCFG_PIXELS_PER_CE_MASK = 0x1FFF,
	EPDC_TCE_SDCFG_PIXELS_PER_CE_OFFSET = 0,

/* EPDC_TCE_GDCFG field values */
	EPDC_TCE_SDCFG_GDRL = 0x10,
	EPDC_TCE_SDCFG_GDOE_MODE_DELAYED_GDCLK = 0x2,
	EPDC_TCE_SDCFG_GDSP_MODE_FRAME_SYNC = 0x1,
	EPDC_TCE_SDCFG_GDSP_MODE_ONE_LINE = 0x0,

/* EPDC_TCE_HSCAN1 field values */
	EPDC_TCE_HSCAN1_LINE_SYNC_WIDTH_MASK = 0xFFF0000,
	EPDC_TCE_HSCAN1_LINE_SYNC_WIDTH_OFFSET = 16,
	EPDC_TCE_HSCAN1_LINE_SYNC_MASK = 0xFFF,
	EPDC_TCE_HSCAN1_LINE_SYNC_OFFSET = 0,

/* EPDC_TCE_HSCAN2 field values */
	EPDC_TCE_HSCAN2_LINE_END_MASK = 0xFFF0000,
	EPDC_TCE_HSCAN2_LINE_END_OFFSET = 16,
	EPDC_TCE_HSCAN2_LINE_BEGIN_MASK = 0xFFF,
	EPDC_TCE_HSCAN2_LINE_BEGIN_OFFSET = 0,

/* EPDC_TCE_VSCAN field values */
	EPDC_TCE_VSCAN_FRAME_END_MASK = 0xFF0000,
	EPDC_TCE_VSCAN_FRAME_END_OFFSET = 16,
	EPDC_TCE_VSCAN_FRAME_BEGIN_MASK = 0xFF00,
	EPDC_TCE_VSCAN_FRAME_BEGIN_OFFSET = 8,
	EPDC_TCE_VSCAN_FRAME_SYNC_MASK = 0xFF,
	EPDC_TCE_VSCAN_FRAME_SYNC_OFFSET = 0,

/* EPDC_TCE_OE field values */
	EPDC_TCE_OE_SDOED_WIDTH_MASK = 0xFF000000,
	EPDC_TCE_OE_SDOED_WIDTH_OFFSET = 24,
	EPDC_TCE_OE_SDOED_DLY_MASK = 0xFF0000,
	EPDC_TCE_OE_SDOED_DLY_OFFSET = 16,
	EPDC_TCE_OE_SDOEZ_WIDTH_MASK = 0xFF00,
	EPDC_TCE_OE_SDOEZ_WIDTH_OFFSET = 8,
	EPDC_TCE_OE_SDOEZ_DLY_MASK = 0xFF,
	EPDC_TCE_OE_SDOEZ_DLY_OFFSET = 0,

/* EPDC_TCE_POLARITY field values */
	EPDC_TCE_POLARITY_GDSP_POL_ACTIVE_HIGH = 0x10,
	EPDC_TCE_POLARITY_GDOE_POL_ACTIVE_HIGH = 0x8,
	EPDC_TCE_POLARITY_SDOE_POL_ACTIVE_HIGH = 0x4,
	EPDC_TCE_POLARITY_SDLE_POL_ACTIVE_HIGH = 0x2,
	EPDC_TCE_POLARITY_SDCE_POL_ACTIVE_HIGH = 0x1,

/* EPDC_TCE_TIMING1 field values */
	EPDC_TCE_TIMING1_SDLE_SHIFT_NONE = 0x00,
	EPDC_TCE_TIMING1_SDLE_SHIFT_1 = 0x10,
	EPDC_TCE_TIMING1_SDLE_SHIFT_2 = 0x20,
	EPDC_TCE_TIMING1_SDLE_SHIFT_3 = 0x30,
	EPDC_TCE_TIMING1_SDCLK_INVERT = 0x8,
	EPDC_TCE_TIMING1_SDCLK_SHIFT_NONE = 0,
	EPDC_TCE_TIMING1_SDCLK_SHIFT_1CYCLE = 1,
	EPDC_TCE_TIMING1_SDCLK_SHIFT_2CYCLES = 2,
	EPDC_TCE_TIMING1_SDCLK_SHIFT_3CYCLES = 3,

/* EPDC_TCE_TIMING2 field values */
	EPDC_TCE_TIMING2_GDCLK_HP_MASK = 0xFFFF0000,
	EPDC_TCE_TIMING2_GDCLK_HP_OFFSET = 16,
	EPDC_TCE_TIMING2_GDSP_OFFSET_MASK = 0xFFFF,
	EPDC_TCE_TIMING2_GDSP_OFFSET_OFFSET = 0,

/* EPDC_TCE_TIMING3 field values */
	EPDC_TCE_TIMING3_GDOE_OFFSET_MASK = 0xFFFF0000,
	EPDC_TCE_TIMING3_GDOE_OFFSET_OFFSET = 16,
	EPDC_TCE_TIMING3_GDCLK_OFFSET_MASK = 0xFFFF,
	EPDC_TCE_TIMING3_GDCLK_OFFSET_OFFSET = 0,

/* EPDC_IRQ_MASK/EPDC_IRQ field values */
	EPDC_IRQ_WB_CMPLT_IRQ = 0x10000,
	EPDC_IRQ_LUT_COL_IRQ = 0x20000,
	EPDC_IRQ_TCE_UNDERRUN_IRQ = 0x40000,
	EPDC_IRQ_FRAME_END_IRQ = 0x80000,
	EPDC_IRQ_BUS_ERROR_IRQ = 0x100000,
	EPDC_IRQ_TCE_IDLE_IRQ = 0x200000,

/* EPDC_STATUS_NEXTLUT field values */
	EPDC_STATUS_NEXTLUT_NEXT_LUT_VALID = 0x100,
	EPDC_STATUS_NEXTLUT_NEXT_LUT_MASK = 0xF,
	EPDC_STATUS_NEXTLUT_NEXT_LUT_OFFSET = 0,

/* EPDC_STATUS field values */
	EPDC_STATUS_LUTS_UNDERRUN = 0x4,
	EPDC_STATUS_LUTS_BUSY = 0x2,
	EPDC_STATUS_WB_BUSY = 0x1,

/* EPDC_DEBUG field values */
	EPDC_DEBUG_UNDERRUN_RECOVER = 0x2,
	EPDC_DEBUG_COLLISION_OFF = 0x1,

/* EPDC_GPIO field values */
	EPDC_GPIO_PWRCOM = 0x40,
	EPDC_GPIO_PWRCTRL_MASK = 0x3C,
	EPDC_GPIO_PWRCTRL_OFFSET = 2,
	EPDC_GPIO_BDR_MASK = 0x3,
	EPDC_GPIO_BDR_OFFSET = 0,
};

#endif	/* __EPDC_REGS_V2_INCLUDED__ */
