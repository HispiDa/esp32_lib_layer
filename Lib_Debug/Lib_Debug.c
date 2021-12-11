#include <Lib/Lib_Debug/Lib_Debug.h>
#include <Lib/LIB_Time/Lib_Time.h>
#include <stdio.h>
#include <string.h>

static void Lib_Debug_ConvertTimeStamp(uint16 * const u16MiliSeconds, uint8 * const u8Seconds, uint8 * const u8Minutes, uint8 * const u8Hours, const uint64 u64SystemTime);
static void Lib_Debug_ApplyMessageFormat(char * chTimeStamp,eDebugLevel eDebugLevel);

void Lib_Debug_Print(char chDebugMessage[],eDebugLevel eDebugLevel)
{
    char chMessageFormatting[100];

    if( eDebugLevel <= DEBUG_LEVEL )
    {
        Lib_Debug_ApplyMessageFormat(chMessageFormatting, eDebugLevel);

        printf("%s | %s%s\n", chMessageFormatting, chDebugMessage, cANSIColorReset);
    }

}

static void Lib_Debug_ApplyMessageFormat(char * chTimeStamp,eDebugLevel eDebugLevel)
{
    uint8 u8TimeStampSeconds = cByte0;
    uint8 u8TimeStampMinutes = cByte0;
    uint8 u8TimeStampHours= cByte0;
    uint16 u16TimeStampMiliSeconds = ((uint16)cByte0);
    uint64 u64SystemTimeMicroSeconds = cZeroMicroSeconds;

    u64SystemTimeMicroSeconds = LibTime_GetSystemTimeMicroSeconds();
    Lib_Debug_ConvertTimeStamp(&u16TimeStampMiliSeconds, &u8TimeStampSeconds, &u8TimeStampMinutes, &u8TimeStampHours, u64SystemTimeMicroSeconds);
    sprintf (chTimeStamp,"%s\e[1m[%.2uh:%.2um:%.2us:%.3ums]",cTimeStampColor ,u8TimeStampHours, u8TimeStampMinutes, u8TimeStampSeconds, u16TimeStampMiliSeconds); 

    switch (eDebugLevel)
    {
    case eDebugLow:
        strcat(chTimeStamp,cDebugLowColor);
        break;
    case eDebugMedium:
        strcat(chTimeStamp,cDebugMediumColor);
        break;
    case eDebugHigh:
        strcat(chTimeStamp,cDebugHighColor);
        break;
    
    default:
        break;
    }
}

static void Lib_Debug_ConvertTimeStamp(uint16 * const u16MiliSeconds, uint8 * const u8Seconds, uint8 * const u8Minutes, uint8 * const u8Hours, const uint64 u64SystemTime)
{
    uint64 u64Remainder = (uint64)cByte0;
    
    *u8Hours     = u64SystemTime / cMicroSecondsInHour;
    u64Remainder = u64SystemTime % cMicroSecondsInHour;

    *u8Minutes   = u64Remainder / cMicroSecondsInMinute;
    u64Remainder = u64Remainder % cMicroSecondsInMinute;

    *u8Seconds   = u64Remainder / cMicroSecondsInSecond;
    u64Remainder = u64Remainder % cMicroSecondsInSecond;

    *u16MiliSeconds = u64Remainder / cMicroSecondsInMiliSecond;
}