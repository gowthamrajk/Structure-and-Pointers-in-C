#include <stdio.h>
#include<stdlib.h>
void swap(int *num1,int *num2)
{
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}
int main() 
{
    int num1=0,num2=0;
    printf("Enter the numbers\n");
    scanf("%d %d",&num1,&num2);
    printf("Before Swapping %d and %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After Swapping %d and %d\n",num1,num2);
    return 0;
}