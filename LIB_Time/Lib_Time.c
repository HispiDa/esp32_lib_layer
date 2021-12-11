#include <Lib/BaseTypes.h>
#include <Lib/LIB_Time/Lib_Time.h>
#include <esp_timer.h>




static uint64 LibTime_GetSystemTime(void)
{
    uint64 u64SystemTime = cZeroMicroSeconds;

    u64SystemTime = esp_timer_get_time();

    return u64SystemTime;
}

uint64 LibTime_GetSystemTimeMicroSeconds(void)
{
    uint64 u64SystemTimeMicroSeconds = cZeroMicroSeconds;

    u64SystemTimeMicroSeconds = LibTime_GetSystemTime();

    return u64SystemTimeMicroSeconds;
}

uint64 LibTime_GetSystemTimeMiliSeconds(void)
{
    uint64 u64SystemTimeMicroSeconds = cZeroMicroSeconds;
    uint64 u64SystemTimeMiliSeconds = cZeroMiliSeconds;
    
    u64SystemTimeMicroSeconds = LibTime_GetSystemTimeMicroSeconds();
    u64SystemTimeMiliSeconds = u64SystemTimeMicroSeconds / (uint64)cMicroSecondsInMiliSecond;

    return u64SystemTimeMiliSeconds;
}

uint32 LibTime_GetSystemTimeSeconds(void)
{
    uint64 u64SystemTimeMicroSeconds = cZeroMicroSeconds;
    uint32 u32SystemTimeSeconds = cZeroSeconds;
    
    u64SystemTimeMicroSeconds = LibTime_GetSystemTimeMicroSeconds();
    u32SystemTimeSeconds = u64SystemTimeMicroSeconds / cMicroSecondsInSecond;

    return u32SystemTimeSeconds;
}

void LibTime_TimerStart(timer64 * u64Timer)
{
    uint64 u64CurrentSystemTime = cZeroMicroSeconds;
    
    u64CurrentSystemTime = LibTime_GetSystemTimeMicroSeconds();

    *u64Timer = u64CurrentSystemTime;
}

boolean LibTime_CheckElapsed_MicroSeconds(timer64 u64Timer,uint64 u64Microseconds)
{
    boolean bIsElapsed = cFalse;
    uint64 u64CurrentSystemTime = cZeroMicroSeconds;

    if( cTimerStop == u64Timer)
    {
        bIsElapsed = cFalse;
    }
    else
    {
        u64CurrentSystemTime = LibTime_GetSystemTimeMicroSeconds();
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
    boolean bIsElapsed = cFalse;
    uint32 u32ElapsedMiliSeconds = ((uint32)cZeroMiliSeconds);
    uint64 u64CurrentSystemTime = cZeroMicroSeconds;

    if( cTimerStop == u64Timer)
    {
        bIsElapsed = cFalse;
    }
    else
    {
        u64CurrentSystemTime = LibTime_GetSystemTimeMicroSeconds();
        u32ElapsedMiliSeconds = (uint32)( ( u64CurrentSystemTime - ((uint64)u64Timer) ) / (uint64)cMicroSecondsInMiliSecond );

        if( u32ElapsedMiliSeconds >= u32Miliseconds )
        {
            bIsElapsed = cTrue;

        }
        else
        {
            DEBUG_LEVEL_1("Timer elapsed!");
            //DEBUG_LEVEL_2("Timer elapsed!");
            //DEBUG_LEVEL_3("Timer elapsed!");
            bIsElapsed = cFalse;
        }
        
    }

    return bIsElapsed;
}

boolean LibTime_CheckElapsed_Seconds(timer64 u64Timer,uint32 u16Seconds)
{
    boolean bIsElapsed = cFalse;
    uint16 u16ElapsedSeconds = ((uint16)cZeroSeconds);
    uint64 u64CurrentSystemTime = cZeroMicroSeconds;

    if( cTimerStop == u64Timer)
    {
        bIsElapsed = cFalse;
    }
    else
    {
        u64CurrentSystemTime = LibTime_GetSystemTimeMicroSeconds();
        u16ElapsedSeconds = (uint16)( ( u64CurrentSystemTime - ((uint64)u64Timer) ) / cMicroSecondsInSecond );
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
    *u64Timer = cTimerStop;
}

boolean LibTime_IsTimerStarted(timer64 u64Timer)
{
    boolean  bIsStarted = cFalse;

    if( cTimerStop != u64Timer )
    {
        bIsStarted = cTrue;
    }
    else
    {
        bIsStarted = cFalse;
    }

    return  bIsStarted;
}

