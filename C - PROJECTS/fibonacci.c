#include <stdio.h>
int factorial(int n);
int main(void)
{

int n = 0;
int fact = 1;





/*
while (n >= 1)
{

	fact = n * fact;
	n--;
}
*/


printf("Recursive method\n");
printf("Enter a Number: \n");
scanf("%d", &n);

fact = factorial(n);
printf("Factorial  : %d\n", fact);
return (0);
}


int factorial(int n)
{
if (n == 1) 
return 1;

return n * factorial(n-1);

}
