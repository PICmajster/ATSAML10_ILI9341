/**
 * \file
 *
 * \brief Instance description for IDAU
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

#ifndef _SAML10_IDAU_INSTANCE_
#define _SAML10_IDAU_INSTANCE_

/* ========== Instance parameters for IDAU peripheral ========== */
#define IDAU_CRYA_AES_DECRYPT_T     0x02001908 // crya_aes_decryp_t function address
#define IDAU_CRYA_AES_ENCRYPT_T     0x02001904 // crya_aes_encryp_t function address
#define IDAU_CRYA_GF_MULT128        0x0200190C // crya_gf_mult128 function address
#define IDAU_CRYA_SHA_PROCESS       0x02001900 // crya_sha_process function address
#define IDAU_GRANULARITY_ANSC       0x20     // Application Non-Secure Callable region granularity
#define IDAU_GRANULARITY_AS         0x100    // Application Secure region granularity
#define IDAU_GRANULARITY_BNSC       0x20     // Boot Flash Non-Secure Callable region granularity
#define IDAU_GRANULARITY_BOOTPROT   0x100    // BOOTPROT region granularity
#define IDAU_GRANULARITY_BS         0x100    // Boot Flash Secure region granularity
#define IDAU_GRANULARITY_DS         0x100    // DS region granularity
#define IDAU_GRANULARITY_RS         0x80     // RAM Secure region granularity
#define IDAU_REGION_ANS             0x06     // Flash Non-Secure APPLICATION region number
#define IDAU_REGION_ANSC            0x05     // Flash Non-Secure Callable APPLICATION region number
#define IDAU_REGION_AS              0x04     // Flash Secure APPLICATION region number
#define IDAU_REGION_BNS             0x03     // Flash Non-Secure BOOT region number
#define IDAU_REGION_BNSC            0x02     // Flash Non-Secure Callable BOOT region number
#define IDAU_REGION_BOOTROM         0x09     // Boot ROM region number
#define IDAU_REGION_BS              0x01     // Flash Secure BOOT region number
#define IDAU_REGION_DNS             0x08     // Non-Secure DATA Flash region number
#define IDAU_REGION_DS              0x07     // Secure DATA Flash region number
#define IDAU_REGION_IOBUS           0x00     // IOBUS region number (invalid)
#define IDAU_REGION_OTHER           0x00     // Others region number (invalid)
#define IDAU_REGION_PERIPHERALS     0x00     // Peripherals region number (invalid)
#define IDAU_REGION_RNS             0x0B     // Non-Secure SRAM region number
#define IDAU_REGION_RS              0x0A     // Secure SRAM region number

#endif /* _SAML10_IDAU_INSTANCE_ */
