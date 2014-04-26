#ifndef __IFX_PPA_API_MIB_20100828_1920__
#define __IFX_PPA_API_MIB_20100828_1920__

/*******************************************************************************
**
** FILE NAME    : ifx_ppa_api_mib.h
** PROJECT      : PPA
** MODULES      : PPA API (MIB APIs)
**
** DATE         : 18 March 2010
** AUTHOR       : Shao Guohua
** DESCRIPTION  : PPA Protocol Stack MIB API Implementation Header File
** COPYRIGHT    :              Copyright (c) 2009
**                          Lantiq Deutschland GmbH
**                   Am Campeon 3; 85579 Neubiberg, Germany
**
**   For licensing information, see the file 'LICENSE' in the root folder of
**   this software module.
**
** HISTORY
** $Date            $Author            $Comment
** 28 August 2010   Shao Guohua        Initiate Version
*******************************************************************************/
/*! \file ifx_ppa_api_mib.h
    \brief This file contains es.
           provide PPA API.
*/

/** \addtogroup PPA_CORE_API PPA Core API
    \brief  PPA Core API provide PPA core accleration logic and API
            The API is defined in the following two source files
            - ifx_ppa_api_core.h: Header file for PPA API
            - ifx_ppa_api_core.c: C Implementation file for PPA API
*/
/* @{ */


/*
 * ####################################
 *              Definition
 * ####################################
 */



/*
 * ####################################
 *              Data Type
 * ####################################
 */



/*
 * ####################################
 *             Declaration
 * ####################################
 */
extern int32_t ifx_ppa_get_dsl_mib(PPA_DSL_QUEUE_MIB *mib, uint32_t flag);
extern int32_t ppa_ioctl_get_dsl_mib(unsigned int cmd, unsigned long arg, PPA_CMD_DATA *cmd_info);
extern int32_t ppa_ioctl_clear_dsl_mib(unsigned int cmd, unsigned long arg, PPA_CMD_DATA * cmd_info);
extern int32_t ifx_ppa_get_ports_mib(PPA_PORT_MIB *mib);
extern int32_t ppa_ioctl_get_ports_mib(unsigned int cmd, unsigned long arg, PPA_CMD_DATA *cmd_info);
extern int32_t ppa_ioctl_clear_ports_mib(unsigned int cmd, unsigned long arg, PPA_CMD_DATA * cmd_info);

#endif  //  __IFX_PPA_API_MIB_20100828_1920__
/* @} */



