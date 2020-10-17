#include<stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    struct time start, stop, diff;
    printf("Enter hours, minutes and seconds of start time: ");
    scanf("%d:%d:%d", &start.hours,&start.minutes, &start.seconds);
    printf("Enter hours, minutes and seconds of stop time: ");
    scanf("%d:%d:%d", &stop.hours,&stop.minutes, &stop.seconds);
    if(start.seconds > stop.seconds)
    {
        stop.seconds += 60;
        --stop.minutes;
    }
    if(start.minutes > stop.minutes)
    {
        stop.minutes += 60;
        --stop.hours;
    }
    diff.seconds = stop.seconds - start.seconds;
    diff.minutes = stop.minutes - start.minutes;
    diff.hours = stop.hours - start.hours;
    printf("Difference = %d", (diff.hours)*60+(diff.minutes)*60+diff.seconds);
    return 0;
}