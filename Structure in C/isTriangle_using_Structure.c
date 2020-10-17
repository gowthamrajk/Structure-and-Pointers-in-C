#include<stdio.h>
typedef struct points Point; 
struct points
{
    int X,Y;
};
int isTriangle(Point *P1,Point *P2,Point *P3)
{
    int val=P1->X*(P2->Y-P3->Y)+P2->X*(P3->Y-P1->Y)+P3->X*(P1->Y-P2->Y);
    if(val==0)
    return 0;
    else
    return 1;
}
int main() 
{
    Point P1={1,5};
    Point P2={2,5};
    Point P3={4,6};
    if(isTriangle(&P1,&P2,&P3)==1)
    printf("YES");
    else
    printf("NO");
}