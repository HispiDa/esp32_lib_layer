#include <Lib/BaseTypes.h>
#include <Lib/LIB_Time/Lib_Time.h>
#include <esp_timer.h>

#define SECONDS_DEVIDER      ((uint64)1000000)
#define MILISECONDS_DEVIDER  ((uint64)1000)


void LibTime_TimerStart(timer64 * u64Timer)
{
    uint64 u64CurrentSystemTime = TIMER_ZERO;
    
    u64CurrentSystemTime = esp_timer_get_time();

    *u64Timer = u64CurrentSystemTime;

}

boolean LibTime_CheckElapsed_MicroSeconds(timer64 u64Timer,uint64 u64Microseconds)
{
    uint64 u64CurrentSystemTime = TIMER_ZERO;
    boolean bIsElapsed = cFalse;

    if( TIMER_STOP == u64Timer)
    {
        bIsElapsed = cFalse;
    }
    else
    {
        u64CurrentSystemTime = esp_timer_get_time();
        if( ( u64CurrentSystemTime - ((uint64)u64Timer) ) >= u64Microseconds )
        {
            bIsElapsed = cTrue;
        }
        else
        {
            bIsElapsed = cFalse;
        }
    }

    return bIsElapsed;
}

boolean LibTime_CheckElapsed_MiliSeconds(timer64 u64Timer,uint32 u32Miliseconds)
{
    uint64 u64CurrentSystemTime = TIMER_ZERO;
    uint32 u32ElapsedMiliSeconds = 0x00000000u;
    boolean bIsElapsed = cFalse;

    if( TIMER_STOP == u64Timer)
    {
        bIsElapsed = cFalse;
    }
    else
    {
        u64CurrentSystemTime = esp_timer_get_time();
        u32ElapsedMiliSeconds = (uint32)( ( u64CurrentSystemTime - ((uint64)u64Timer) ) / MILISECONDS_DEVIDER );

        if( u32ElapsedMiliSeconds >= u32Miliseconds )
        {
            bIsElapsed = cTrue;
        }
        else
        {
            bIsElapsed = cFalse;
        }
        
    }

    return bIsElapsed;
}

boolean LibTime_CheckElapsed_Seconds(timer64 u64Timer,uint32 u16Seconds)
{
    uint64 u64CurrentSystemTime = TIMER_ZERO;
    uint16 u16ElapsedSeconds = 0x0000u;
    boolean bIsElapsed = cFalse;

    if( TIMER_STOP == u64Timer)
    {
        bIsElapsed = cFalse;
    }
    else
    {
        u64CurrentSystemTime = esp_timer_get_time();
        u16ElapsedSeconds = (uint16)( ( u64CurrentSystemTime - ((uint64)u64Timer) ) / SECONDS_DEVIDER );
        if( u16ElapsedSeconds >= u16Seconds )
        {
            bIsElapsed = cTrue;
        }
        else
        {
            bIsElapsed = cFalse;
        }
    }

    return bIsElapsed;
}

void LibTime_TimerStop(timer64 * u64Timer)
{
    *u64Timer = TIMER_STOP;
}

boolean LibTime_IsTimerStarted(timer64 u64Timer)
{
    boolean  bIsStarted = cFalse;

    if( TIMER_STOP != u64Timer )
    {
        bIsStarted = cTrue;
    }
    else
    {
        bIsStarted = cFalse;
    }

    return  bIsStarted;
}