#ifndef _LIB_TIME_H_
#define _LIB_TIME_H_

#include <Lib/BaseTypes.h>
#include <Lib/Lib_Debug/Lib_Debug.h>

#define cTimerStop                  ((timer64)0)
#define cTimerZero                  ((uint64)0)
#define cZeroMicroSeconds       ((uint64)0)
#define cZeroMiliSeconds        ((uint64)0)
#define cZeroSeconds            ((uint32)0)


#define cMicroSecondsInMiliSecond   (1000u)
#define cMiliSecondsInSecond        (1000u)
#define cSecondsInMinute            (60u)
#define cMinutesInHour              (60u)

#define cMicroSecondsInSecond     (uint64)(cMicroSecondsInMiliSecond*cMiliSecondsInSecond)
#define cMicroSecondsInMinute     (uint64)(cMicroSecondsInMiliSecond*cMiliSecondsInSecond*cSecondsInMinute)
#define cMicroSecondsInHour       (uint64)(cMicroSecondsInMiliSecond*cMiliSecondsInSecond*cSecondsInMinute*cMinutesInHour)

typedef uint64 timer64;

uint64 LibTime_GetSystemTimeMicroSeconds(void);
uint64 LibTime_GetSystemTimeMiliSeconds(void);

uint32 LibTime_GetSystemTimeSeconds(void);

void LibTime_TimerStart(timer64 * u64Timer);

boolean LibTime_CheckElapsed_MicroSeconds(timer64 u64Timer,uint64 u64Microseconds);
boolean LibTime_CheckElapsed_MiliSeconds(timer64 u64Timer,uint32 u32Miliseconds);
boolean LibTime_CheckElapsed_Seconds(timer64 u64Timer,uint32 u16Seconds);


void LibTime_TimerStop(timer64 * u64Timer);


boolean LibTime_IsTimerStarted(timer64 u64Timer);


#endif //ifndef _LIB_TIME_H_