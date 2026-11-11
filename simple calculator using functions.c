#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int subs(int a, int b)
{
    return a - b;
}
int multi(int a, int b)
{
    return a * b;
}
float div(int a, int b)
{ if(b!=0){
    return a / b;
} else{
    return 0; 
}}
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subs(a, b));
    printf("Multiplication: %d\n", multi(a, b));
    printf("Division: %.2f\n", div(a, b));
    return 0;
}