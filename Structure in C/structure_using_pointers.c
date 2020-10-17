#include<stdio.h>
#include<stdlib.h>
struct student
{
    int rollNo;
    char name[50];
    long mobile;
    float avgMarks;
};
struct student *createArray(int N)
{
    struct student *arr;
    arr=(struct student *)malloc(sizeof(struct student)*N);
    return arr;
}
void getValue(struct student *arr,int N)
{
    for(int index=0;index<N;index++)
    {
        printf("Enter the Student RollNo: \n");
        scanf("%d",&((arr+index)->rollNo));
        printf("Enter the Student Name: \n");
        scanf("%s",(arr+index)->name);
        printf("Enter the Mobile Number: \n");
        scanf("%ld",&((arr+index)->mobile));
        printf("Enter the Average Marks: \n");
        scanf("%f",&((arr+index)->avgMarks));
    }
}
void printValue(struct student *arr,int N)
{
    for(int index=0;index<N;index++)
    {
        printf("Student Roll Number is: %d\n",(arr+index)->rollNo);
        printf("Student Name is: %s\n",(arr+index)->name);
        printf("Student Mobile Number is: %ld\n",(arr+index)->mobile);
        printf("Student Average Marks is: %.2f\n",(arr+index)->avgMarks);
        printf("\n");
    }
}
int main() 
{
    int N=0;
    printf("Enter Number of Students: \n");
    scanf("%d",&N);
    struct student *arr;
    arr=createArray(N);
    getValue(arr,N);
    printValue(arr,N);
}