/*
 * Copyright (c) 2018, NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#if defined(CONFIG_HAS_DTS_I2C)

#define DT_HDC1008_NAME			DT_INTEL_QMSI_SS_I2C_80012000_TI_HDC1008_40_LABEL
#define DT_HDC1008_I2C_MASTER_DEV_NAME	DT_INTEL_QMSI_SS_I2C_80012000_TI_HDC1008_40_BUS_NAME
#define DT_HDC1008_I2C_ADDR			DT_INTEL_QMSI_SS_I2C_80012000_TI_HDC1008_40_BASE_ADDRESS

#endif /* CONFIG_HAS_DTS_I2C */

#if defined(CONFIG_HAS_DTS_GPIO)

#define DT_HDC1008_GPIO_DEV_NAME		DT_INTEL_QMSI_SS_I2C_80012000_TI_HDC1008_40_DRDY_GPIOS_CONTROLLER
#define DT_HDC1008_GPIO_PIN_NUM		DT_INTEL_QMSI_SS_I2C_80012000_TI_HDC1008_40_DRDY_GPIOS_PIN

#endif /* CONFIG_HAS_DTS_GPIO */
