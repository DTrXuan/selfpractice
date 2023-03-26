#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "limits.h"

void delay_ms(int milliseconds) {
    usleep(milliseconds * 1000); // usleep takes microseconds
}

unsigned int timeInterVal = 1;
unsigned int OS_cnt = 0;

typedef struct 
{
    unsigned int timer;
}timer_dummy_s;

typedef struct
{
    unsigned int cnt;
    timer_dummy_s timer;
    timer_dummy_s timer2;
}test_s;

test_s test_as[10] = {0,0,0};

unsigned int cnt;

void start_tmr(timer_dummy_s *tmp_tmr)
{
    tmp_tmr->timer = timeInterVal;
}

void stop_tmr(timer_dummy_s *tmp_tmr)
{
    tmp_tmr->timer = 0;
}

char test_tmr(timer_dummy_s *tmp_tmr)
{
    return (char)(tmp_tmr->timer);
}

unsigned int getDiff_tmr(timer_dummy_s *tmp_tmr)
{
    unsigned int diff = (timeInterVal - tmp_tmr->timer) ;
    if((timeInterVal - tmp_tmr->timer) >= 0)
    {
        return diff;
    }
    else
    {
        diff = UINT_MAX - tmp_tmr->timer + timeInterVal;
        /*
        0 -> MAX -> 0 
        tmr_set = 7 -> MAX (MAX - 7)
        tmr_cnt = 6 -> MAX-7 + 6 = 7
        */
    }
}

void time_update_10ms()
{
    timeInterVal++;
    timeInterVal|=1;
}

int main(void)
{
    start_tmr(&test_as[1].timer);
    printf("ON \n");

    while(1)
    {   
        if (test_tmr(&test_as[1].timer))
        {
            // printf("%d\n",getDiff_tmr(&test_as[1].timer));
            if(getDiff_tmr(&test_as[1].timer) > 100)
            {
                printf("OFF \n");
                stop_tmr(&test_as[1].timer);
                start_tmr(&test_as[1].timer2);
            }
            // printf("time out\n");
        }

        if (test_tmr(&test_as[1].timer2))
        {
            if(getDiff_tmr(&test_as[1].timer2) > 100)
            {
                printf("ON \n");
                stop_tmr(&test_as[1].timer2);
                start_tmr(&test_as[1].timer);
            }
            // printf("time out\n");
        }


        if(OS_cnt%1 == 0u)
        {
            time_update_10ms();
            // printf("tick: %d\n", timeInterVal);
        }
        OS_cnt++;
        delay_ms(1);
    }
}

