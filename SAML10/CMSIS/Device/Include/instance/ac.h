/**
 * \file
 *
 * \brief Instance description for AC
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

#ifndef _SAML10_AC_INSTANCE_
#define _SAML10_AC_INSTANCE_

/* ========== Register definition for AC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_AC_CTRLA               (0x40003400) /**< \brief (AC) Control A */
#define REG_AC_CTRLB               (0x40003401) /**< \brief (AC) Control B */
#define REG_AC_EVCTRL              (0x40003402) /**< \brief (AC) Event Control */
#define REG_AC_INTENCLR            (0x40003404) /**< \brief (AC) Interrupt Enable Clear */
#define REG_AC_INTENSET            (0x40003405) /**< \brief (AC) Interrupt Enable Set */
#define REG_AC_INTFLAG             (0x40003406) /**< \brief (AC) Interrupt Flag Status and Clear */
#define REG_AC_STATUSA             (0x40003407) /**< \brief (AC) Status A */
#define REG_AC_STATUSB             (0x40003408) /**< \brief (AC) Status B */
#define REG_AC_DBGCTRL             (0x40003409) /**< \brief (AC) Debug Control */
#define REG_AC_WINCTRL             (0x4000340A) /**< \brief (AC) Window Control */
#define REG_AC_SCALER0             (0x4000340C) /**< \brief (AC) Scaler 0 */
#define REG_AC_SCALER1             (0x4000340D) /**< \brief (AC) Scaler 1 */
#define REG_AC_COMPCTRL0           (0x40003410) /**< \brief (AC) Comparator Control 0 */
#define REG_AC_COMPCTRL1           (0x40003414) /**< \brief (AC) Comparator Control 1 */
#define REG_AC_SYNCBUSY            (0x40003420) /**< \brief (AC) Synchronization Busy */
#else
#define REG_AC_CTRLA               (*(RwReg8 *)0x40003400UL) /**< \brief (AC) Control A */
#define REG_AC_CTRLB               (*(WoReg8 *)0x40003401UL) /**< \brief (AC) Control B */
#define REG_AC_EVCTRL              (*(RwReg16*)0x40003402UL) /**< \brief (AC) Event Control */
#define REG_AC_INTENCLR            (*(RwReg8 *)0x40003404UL) /**< \brief (AC) Interrupt Enable Clear */
#define REG_AC_INTENSET            (*(RwReg8 *)0x40003405UL) /**< \brief (AC) Interrupt Enable Set */
#define REG_AC_INTFLAG             (*(RwReg8 *)0x40003406UL) /**< \brief (AC) Interrupt Flag Status and Clear */
#define REG_AC_STATUSA             (*(RoReg8 *)0x40003407UL) /**< \brief (AC) Status A */
#define REG_AC_STATUSB             (*(RoReg8 *)0x40003408UL) /**< \brief (AC) Status B */
#define REG_AC_DBGCTRL             (*(RwReg8 *)0x40003409UL) /**< \brief (AC) Debug Control */
#define REG_AC_WINCTRL             (*(RwReg8 *)0x4000340AUL) /**< \brief (AC) Window Control */
#define REG_AC_SCALER0             (*(RwReg8 *)0x4000340CUL) /**< \brief (AC) Scaler 0 */
#define REG_AC_SCALER1             (*(RwReg8 *)0x4000340DUL) /**< \brief (AC) Scaler 1 */
#define REG_AC_COMPCTRL0           (*(RwReg  *)0x40003410UL) /**< \brief (AC) Comparator Control 0 */
#define REG_AC_COMPCTRL1           (*(RwReg  *)0x40003414UL) /**< \brief (AC) Comparator Control 1 */
#define REG_AC_SYNCBUSY            (*(RoReg  *)0x40003420UL) /**< \brief (AC) Synchronization Busy */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for AC peripheral ========== */
#define AC_GCLK_ID                  17       // Index of Generic Clock
#define AC_NUM_CMP                  2        // Number of comparators
#define AC_PAIRS                    1        // Number of pairs of comparators

#endif /* _SAML10_AC_INSTANCE_ */
