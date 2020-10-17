#include<stdio.h>
#include<stdlib.h>
struct student
{
    int rollNo;
    char name[50];
    long mobile;
    float avgMarks;
};
int main() 
{
    int N=0;
    printf("Enter Number of Students: \n");
    scanf("%d",&N);
    struct student s1[N];
    for(int index=0;index<N;index++)
    {
        printf("Enter the Student RollNo: \n");
        scanf("%d",&s1[index].rollNo);
        printf("Enter the Student Name: \n");
        scanf("%s",s1[index].name);
        printf("Enter the Mobile Number: \n");
        scanf("%ld",&s1[index].mobile);
        printf("Enter the Average Marks: \n");
        scanf("%f",&s1[index].avgMarks);
    }
    for(int index=0;index<N;index++)
    {
        printf("Student Roll Number is: %d\n",s1[index].rollNo);
        printf("Student Name is: %s\n",s1[index].name);
        printf("Student Mobile Number is: %ld\n",s1[index].mobile);
        printf("Student Average Marks is: %.2f\n",s1[index].avgMarks);
        printf("\n");
    }
}