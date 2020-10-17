#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

typedef struct _date 
{ 
    int date, month, year; 
}Date;
int countLeapYears(Date* date)
{
    int years=date->year;
    if(date->month<=2)
    years--;
    return (years/4)-(years/100)+(years/400);
}
int difference_in_dates(Date* date1, Date* date2)
{
    int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    long int val1=(date1->year*365)+(date1->date);
    for(int index=0;index<date1->month-1;index++)
    {
        val1+=monthDays[index];
    }
    val1+=countLeapYears(date1);
    long int val2=(date2->year*365)+(date2->date);
    for(int index=0;index<date2->month-1;index++)
    {
        val2+=monthDays[index];
    }
    val2+=countLeapYears(date2);
    return abs(val2-val1);
}

int main()
{
    Date date1={2,5,1013};
    Date date2={2,6,2013};
    printf("%d",difference_in_dates(&date1,&date2));
}
