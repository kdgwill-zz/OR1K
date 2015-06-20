#include<stdlib.h>
#include<stdio.h>
 
int foo(int a, int b)
{
    int c;    
    c = a + b;
    return c;
}
 
int main()
{
    int a, b, x;
    a = 2;
    b = 3;
    printf("Enter a: ");    
    scanf ("%d", &a);
    printf("Enter b: "); 
    scanf ("%d", &b);
    x = foo(a,b);
    printf("\r\nThe result is: %d\r\n", x); 
    exit(0);
}
