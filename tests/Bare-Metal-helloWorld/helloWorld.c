#include<stdlib.h>
#include<stdio.h>
 
int foo(int a, int b){
	int c;    
	c = a + b;
	return c;
}
 
int main(){
	int a, b, x;
	a = 2;
	b = 3;

	printf("Hello Baremetal, World!\n\n");    
	printf("I am a simple adder program and will add A + B\n\n");    

	printf("Enter A:");    
	scanf ("%d", &a);

	printf("Enter B:"); 
	scanf ("%d", &b);

	x = foo(a,b);

	printf("\nThe result is: %d\n", x); 

	exit(0);
}
