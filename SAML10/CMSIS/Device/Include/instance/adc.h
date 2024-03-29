/**
 * \file
 *
 * \brief Instance description for ADC
 *
 * Copyright (c) 2018 Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAML10_ADC_INSTANCE_
#define _SAML10_ADC_INSTANCE_

/* ========== Register definition for ADC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_ADC_CTRLA              (0x42001C00) /**< \brief (ADC) Control A */
#define REG_ADC_CTRLB              (0x42001C01) /**< \brief (ADC) Control B */
#define REG_ADC_REFCTRL            (0x42001C02) /**< \brief (ADC) Reference Control */
#define REG_ADC_EVCTRL             (0x42001C03) /**< \brief (ADC) Event Control */
#define REG_ADC_INTENCLR           (0x42001C04) /**< \brief (ADC) Interrupt Enable Clear */
#define REG_ADC_INTENSET           (0x42001C05) /**< \brief (ADC) Interrupt Enable Set */
#define REG_ADC_INTFLAG            (0x42001C06) /**< \brief (ADC) Interrupt Flag Status and Clear */
#define REG_ADC_SEQSTATUS          (0x42001C07) /**< \brief (ADC) Sequence Status */
#define REG_ADC_INPUTCTRL          (0x42001C08) /**< \brief (ADC) Input Control */
#define REG_ADC_CTRLC              (0x42001C0A) /**< \brief (ADC) Control C */
#define REG_ADC_AVGCTRL            (0x42001C0C) /**< \brief (ADC) Average Control */
#define REG_ADC_SAMPCTRL           (0x42001C0D) /**< \brief (ADC) Sample Time Control */
#define REG_ADC_WINLT              (0x42001C0E) /**< \brief (ADC) Window Monitor Lower Threshold */
#define REG_ADC_WINUT              (0x42001C10) /**< \brief (ADC) Window Monitor Upper Threshold */
#define REG_ADC_GAINCORR           (0x42001C12) /**< \brief (ADC) Gain Correction */
#define REG_ADC_OFFSETCORR         (0x42001C14) /**< \brief (ADC) Offset Correction */
#define REG_ADC_SWTRIG             (0x42001C18) /**< \brief (ADC) Software Trigger */
#define REG_ADC_DBGCTRL            (0x42001C1C) /**< \brief (ADC) Debug Control */
#define REG_ADC_SYNCBUSY           (0x42001C20) /**< \brief (ADC) Synchronization Busy */
#define REG_ADC_RESULT             (0x42001C24) /**< \brief (ADC) Result */
#define REG_ADC_SEQCTRL            (0x42001C28) /**< \brief (ADC) Sequence Control */
#define REG_ADC_CALIB              (0x42001C2C) /**< \brief (ADC) Calibration */
#else
#define REG_ADC_CTRLA              (*(RwReg8 *)0x42001C00UL) /**< \brief (ADC) Control A */
#define REG_ADC_CTRLB              (*(RwReg8 *)0x42001C01UL) /**< \brief (ADC) Control B */
#define REG_ADC_REFCTRL            (*(RwReg8 *)0x42001C02UL) /**< \brief (ADC) Reference Control */
#define REG_ADC_EVCTRL             (*(RwReg8 *)0x42001C03UL) /**< \brief (ADC) Event Control */
#define REG_ADC_INTENCLR           (*(RwReg8 *)0x42001C04UL) /**< \brief (ADC) Interrupt Enable Clear */
#define REG_ADC_INTENSET           (*(RwReg8 *)0x42001C05UL) /**< \brief (ADC) Interrupt Enable Set */
#define REG_ADC_INTFLAG            (*(RwReg8 *)0x42001C06UL) /**< \brief (ADC) Interrupt Flag Status and Clear */
#define REG_ADC_SEQSTATUS          (*(RoReg8 *)0x42001C07UL) /**< \brief (ADC) Sequence Status */
#define REG_ADC_INPUTCTRL          (*(RwReg16*)0x42001C08UL) /**< \brief (ADC) Input Control */
#define REG_ADC_CTRLC              (*(RwReg16*)0x42001C0AUL) /**< \brief (ADC) Control C */
#define REG_ADC_AVGCTRL            (*(RwReg8 *)0x42001C0CUL) /**< \brief (ADC) Average Control */
#define REG_ADC_SAMPCTRL           (*(RwReg8 *)0x42001C0DUL) /**< \brief (ADC) Sample Time Control */
#define REG_ADC_WINLT              (*(RwReg16*)0x42001C0EUL) /**< \brief (ADC) Window Monitor Lower Threshold */
#define REG_ADC_WINUT              (*(RwReg16*)0x42001C10UL) /**< \brief (ADC) Window Monitor Upper Threshold */
#define REG_ADC_GAINCORR           (*(RwReg16*)0x42001C12UL) /**< \brief (ADC) Gain Correction */
#define REG_ADC_OFFSETCORR         (*(RwReg16*)0x42001C14UL) /**< \brief (ADC) Offset Correction */
#define REG_ADC_SWTRIG             (*(RwReg8 *)0x42001C18UL) /**< \brief (ADC) Software Trigger */
#define REG_ADC_DBGCTRL            (*(RwReg8 *)0x42001C1CUL) /**< \brief (ADC) Debug Control */
#define REG_ADC_SYNCBUSY           (*(RoReg16*)0x42001C20UL) /**< \brief (ADC) Synchronization Busy */
#define REG_ADC_RESULT             (*(RoReg16*)0x42001C24UL) /**< \brief (ADC) Result */
#define REG_ADC_SEQCTRL            (*(RwReg  *)0x42001C28UL) /**< \brief (ADC) Sequence Control */
#define REG_ADC_CALIB              (*(RwReg16*)0x42001C2CUL) /**< \brief (ADC) Calibration */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for ADC peripheral ========== */
#define ADC_DMAC_ID_RESRDY          19       // index of DMA RESRDY trigger
#define ADC_EXTCHANNEL_MSB          9        // Number of external channels
#define ADC_GCLK_ID                 16       // index of Generic Clock
#define ADC_INT_CH30                1        // Select OPAMP or CTAT on Channel 30
#define ADC_MASTER_SLAVE_MODE       0        // ADC Master/Slave Mode

#endif /* _SAML10_ADC_INSTANCE_ */
