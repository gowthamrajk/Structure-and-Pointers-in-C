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
    struct student s1;
    printf("Enter the Student RollNo: \n");
    scanf("%d",&s1.rollNo);
    printf("Enter the Student Name: \n");
    scanf("%s",s1.name);
    printf("Enter the Mobile Number: \n");
    scanf("%ld",&s1.mobile);
    printf("Enter the Average Marks: \n");
    scanf("%f",&s1.avgMarks);
    printf("Student Roll Number is: %d\n",s1.rollNo);
    printf("Student Name is: %s\n",s1.name);
    printf("Student Mobile Number is: %ld\n",s1.mobile);
    printf("Student Average Marks is: %.2f\n",s1.avgMarks);
}