/**
*  \file lwiplib.h
*
*  \brief lwip abstraction layer related declarations
*/
/*
 * Copyright (c) 2001-2004 Swedish Institute of Computer Science.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 *
 * This file is part of the lwIP TCP/IP stack.
 *
 * Author: Adam Dunkels <adam@sics.se>
 *
*/

/* Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
 * ALL RIGHTS RESERVED
 */
#ifndef __LWIPLIB_H__
#define __LWIPLIB_H__

#include "lwip/opt.h"

/* Ensure that AUTOIP COOP option is configured correctly.*/
#undef LWIP_DHCP_AUTOIP_COOP
#define LWIP_DHCP_AUTOIP_COOP   ((LWIP_DHCP) && (LWIP_AUTOIP))

#include "lwip/api.h"
#include "lwip/netifapi.h"
#include "lwip/tcp.h"
#include "lwip/udp.h"
#include "lwip/tcpip.h"
#include "lwip/sockets.h"
#include "lwip/mem.h"
#include "lwip/stats.h"

/******************************************************************************
**                            Macro Definitions
******************************************************************************/
#define IPADDR_USE_STATIC       0
#define IPADDR_USE_DHCP         1
#define IPADDR_USE_AUTOIP       2

#ifndef LEN_MAC_ADDRESS
#define LEN_MAC_ADDRESS         6
#endif

typedef struct lwipIf
{
    unsigned int instNum;   /* Instance Number */
    unsigned int slvPortNum; /* CPSW Slave Port Number */
    unsigned int ipAddr; /* IP Address */
    unsigned int netMask; /* Net Mask */
    unsigned int gwAddr; /* Gate Way Address */
    unsigned int ipMode; /* IP Address mode  
                            IPADDR_USE_STATIC - force static IP 
                                                addressing to be used \n
                            IPADDR_USE_DHCP - force DHCP with fallback
                                              to Link Local \n
                            IPADDR_USE_AUTOIP */  
    unsigned char macArray[LEN_MAC_ADDRESS]; /* MAC Address to be used*/
}LWIP_IF;


/******************************************************************************
**                    lwIP Abstraction Layer API
******************************************************************************/
extern unsigned int lwIPLinkStatusGet(unsigned int instNum, 
                                      unsigned int slvPortNum);
extern unsigned int lwIPNetIfStatusGet(unsigned int instNum, 
                                       unsigned int slvPortNum);
extern unsigned int lwIPInit(LWIP_IF *lwipIf);
extern void lwIPRxIntHandler(unsigned int instNum);
extern void lwIPTxIntHandler(unsigned int instNum);
extern unsigned int lwIPDHCPStart(unsigned int instNum,
                                  unsigned int slvPortNum);

#endif /* __LWIPLIB_H__ */