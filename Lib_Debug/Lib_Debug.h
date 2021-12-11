#ifndef _LIB_DEBUG_H_
#define _LIB_DEBUG_H_

#include <Lib/BaseTypes.h>
#include <stdio.h>
#include <string.h>

#ifndef DEBUG_LEVEL
#define DEBUG_LEVEL eDebugHigh  /* Can be define as: eDebugNone,eDebugLow,eDebugMedium,eDebugHigh  NOTE: THIS SHOULD BE DEFINED AS BUILD FLAG aka defined in the build config*/ 
#endif //ifndef DEBUG_LEVEL
typedef enum
{
    eDebugNone = 0,
    eDebugLow,
    eDebugMedium,
    eDebugHigh
}eDebugLevel;


#define DEBUG_LEVEL_1(msg)          Lib_Debug_Print(msg,eDebugLow)
#define DEBUG_LEVEL_2(msg)          Lib_Debug_Print(msg,eDebugMedium)
#define DEBUG_LEVEL_3(msg)          Lib_Debug_Print(msg,eDebugHigh)

void Lib_Debug_Print(char sDebugMessage[],eDebugLevel eDebugLevel);


#define cANSIColorBlack    "\e[30m"
#define cANSIColorRed      "\e[31m"
#define cANSIColorGreen    "\e[32m"
#define cANSIColorYellow   "\e[33m"
#define cANSIColorBlue     "\e[34m"
#define cANSIColorMagenta  "\e[35m"
#define cANSIColorCyan     "\e[36m"
#define cANSIColorWhite    "\e[37m"
#define cANSIColorReset    "\e[0m"


#define cTimeStampColor      cANSIColorWhite
#define cDebugLowColor       cANSIColorGreen
#define cDebugMediumColor    cANSIColorYellow
#define cDebugHighColor      cANSIColorRed
#endif //ifndef _LIB_DEBUG_H_
