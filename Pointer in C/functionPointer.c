#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}
int main() 
{
    int num1=0,num2=0,result=0;
    printf("Enter two numbers: \n");
    scanf("%d %d",&num1,&num2);
    int (*ptr)(int,int) = add;
    result = ptr(num1,num2);
    printf("Addition answer is: %d",result);
}