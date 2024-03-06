
/*==================================================================================================
* Project : RTD AUTOSAR 4.7
* Platform : CORTEXM
* Peripheral : LPI2C
* Dependencies : none
*
* Autosar Version : 4.7.0
* Autosar Revision : ASR_REL_4_7_REV_0000
* Autosar Conf.Variant :
* SW Version : 3.0.0
* Build Version : S32K3_RTD_3_0_0_P01_D2303_ASR_REL_4_7_REV_0000_20230331
*
* Copyright 2020 - 2023 NXP Semiconductors
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/

#ifndef LPI2C_IP_CFG_H
#define LPI2C_IP_CFG_H

/**
*   @file
*
*   @addtogroup LPI2C_DRIVER_CONFIGURATION Lpi2c Driver Configurations
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcal.h"
#include "OsIf.h"
#include "Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LPI2C_IP_CFG_VENDOR_ID                     43
#define LPI2C_IP_CFG_MODULE_ID                     255
#define LPI2C_IP_CFG_AR_RELEASE_MAJOR_VERSION      4
#define LPI2C_IP_CFG_AR_RELEASE_MINOR_VERSION      7
#define LPI2C_IP_CFG_AR_RELEASE_REVISION_VERSION   0
#define LPI2C_IP_CFG_SW_MAJOR_VERSION              3
#define LPI2C_IP_CFG_SW_MINOR_VERSION              0
#define LPI2C_IP_CFG_SW_PATCH_VERSION              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/


/* Check if current file and Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.h header file are of the same module */
#if (LPI2C_IP_CFG_MODULE_ID  != LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_MODULE_ID)
    #error "Lpi2c_Ip_Cfg.h and Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.h have different vendor ids"
#endif
/* Check if current file and Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.h header file are of the same vendor */
#if (LPI2C_IP_CFG_VENDOR_ID != LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_VENDOR_ID)
    #error "Lpi2c_Ip_Cfg.h and Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.h have different vendor ids"
#endif
/* Check if current file and Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.h header file are of the same Autosar version */
#if ((LPI2C_IP_CFG_AR_RELEASE_MAJOR_VERSION    != LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (LPI2C_IP_CFG_AR_RELEASE_MINOR_VERSION    != LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (LPI2C_IP_CFG_AR_RELEASE_REVISION_VERSION != LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Lpi2c_Ip_Cfg.h and Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif
/* Check if current file and Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.h header file are of the same Software version */
#if ((LPI2C_IP_CFG_SW_MAJOR_VERSION != LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MAJOR_VERSION) || \
     (LPI2C_IP_CFG_SW_MINOR_VERSION != LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_MINOR_VERSION) || \
     (LPI2C_IP_CFG_SW_PATCH_VERSION != LPI2C_IP_BOARD_INITPERIPHERALS_PBCFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Lpi2c_Ip_Cfg.h and Lpi2c_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if current file and Mcal.h header file are of the same Autosar version */
    #if ((LPI2C_IP_CFG_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (LPI2C_IP_CFG_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Lpi2c_Ip_Cfg.h and Mcal.h are different"
    #endif
    /* Check if current file and OsIf.h header file are of the same Autosar version */
    #if ((LPI2C_IP_CFG_AR_RELEASE_MAJOR_VERSION != OSIF_AR_RELEASE_MAJOR_VERSION) || \
         (LPI2C_IP_CFG_AR_RELEASE_MINOR_VERSION != OSIF_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Lpi2c_Ip_Cfg.h and OsIf.h are different"
    #endif
#endif

/*==================================================================================================
*                         LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

#define LPI2C_IP_FIND_MAX(a, b)          (((a) > (b)) ? (a) : (b))
#define LPI2C_IP_NUMBER_OF_MASTER_INSTANCES \
    LPI2C_IP_FIND_MAX(LPI2C_IP_NUM_MASTER_INSTANCES_USED_BOARD_InitPeripherals, \
    0 )
#define LPI2C_IP_NUMBER_OF_SLAVE_INSTANCES \
    LPI2C_IP_FIND_MAX(LPI2C_IP_NUM_SLAVE_INSTANCES_USED_BOARD_InitPeripherals, \
    0 )

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                  LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* LPI2C_IP_CFG_H */

