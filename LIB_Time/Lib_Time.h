#include <Lib/BaseTypes.h>

#define TIMER_STOP          ((timer64)0)
#define TIMER_ZERO          ((uint64)0)


typedef uint64 timer64;

void LibTime_TimerStart(timer64 * u64Timer);

boolean LibTime_CheckElapsed_MicroSeconds(timer64 u64Timer,uint64 u64Microseconds);
boolean LibTime_CheckElapsed_MiliSeconds(timer64 u64Timer,uint32 u32Miliseconds);
boolean LibTime_CheckElapsed_Seconds(timer64 u64Timer,uint32 u16Seconds);


void LibTime_TimerStop(timer64 * u64Timer);


boolean LibTime_IsTimerStarted(timer64 u64Timer);