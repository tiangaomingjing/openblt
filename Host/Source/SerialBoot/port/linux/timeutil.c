/************************************************************************************//**
* \file         port\linux\timeutil.c
* \brief        Time utility source file.
* \ingroup      SerialBoot
* \internal
*----------------------------------------------------------------------------------------
*                          C O P Y R I G H T
*----------------------------------------------------------------------------------------
*   Copyright (c) 2017  by Feaser    http://www.feaser.com    All rights reserved
*
*----------------------------------------------------------------------------------------
*                            L I C E N S E
*----------------------------------------------------------------------------------------
* This file is part of OpenBLT. OpenBLT is free software: you can redistribute it and/or
* modify it under the terms of the GNU General Public License as published by the Free
* Software Foundation, either version 3 of the License, or (at your option) any later
* version.
*
* OpenBLT is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
* PURPOSE. See the GNU General Public License for more details.
*
* You have received a copy of the GNU General Public License along with OpenBLT. It 
* should be located in ".\Doc\license.html". If not, contact Feaser to obtain a copy.
* 
* \endinternal
****************************************************************************************/

/****************************************************************************************
* Include files
****************************************************************************************/
#include <stddef.h>                         /* for NULL declaration                    */
#include <unistd.h>                         /* UNIX standard functions                 */
#include <sys/time.h>                       /* time definitions                        */
#include "timeutil.h"                       /* for time utilities module               */


/************************************************************************************//**
** \brief     Get the system time in milliseconds.
** \return    Time in milliseconds.
**
****************************************************************************************/
uint32_t TimeUtilGetSystemTimeMs(void)
{
 struct timeval tv;

 if (gettimeofday(&tv, NULL) != 0)
 {
   return 0;
 }

 return (uint32_t)((tv.tv_sec * 1000ul) + (tv.tv_usec / 1000ul));
} /*** end of XcpTransportClose ***/


/************************************************************************************//**
** \brief     Performs a delay of the specified amount of milliseconds.
** \param     delay Delay time in milliseconds.
** \return    none.
**
****************************************************************************************/
void TimeUtilDelayMs(uint16_t delay)
{
  usleep(1000 * delay);
} /*** end of TimeUtilDelayMs **/


/*********************************** end of timeutil.c *********************************/
