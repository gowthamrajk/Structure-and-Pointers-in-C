#include <stdio.h>
typedef struct complex Complex;
struct complex 
{
    float real;
    float imag;
};
Complex add(Complex n1, Complex n2)
{
    Complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}
int main() 
{
    Complex n1, n2, result;
    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);

    result = add(n1, n2);
    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    return 0;
}