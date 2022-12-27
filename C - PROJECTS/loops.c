#include <stdio.h>
#include <math.h>

/**
 * Exercise 5 - Cube of a number up to a given integer
 */

/*
int main(int argc, char **argv)
{
	int m, i;
printf("Enter the number: \n");
scanf("%d", &m);
for (i = 1; i <= m; i++) {
printf("Number is %d and the cube is %d\n", i, i*i*i );
}
return (0);
}

*/




/**
 * Exercise 4 - Scan 10 numbers and return their sum and Average
 */

/*
int main(int argc, char **argv)
{
	int i,n, sum = 0;
	float avg;

printf("Enter the numbers: \n");
for (i = 1; i <= 10; i++) {
printf("Number-%d\n", i);
scanf("%d", &n);

sum+=n;

}

printf("Sum is %d and the Average is %f\n", sum, sum/10.0);
return (0);
}
*/




/**
 * Exercise 7 - Display the multiplication table vertically from 1 to n
 */

/*
int main(int argc, char **argv)
{
	int n,i, j;
printf("Input the number to end the multiplication table \n");
scanf("%d",&n);
printf("MULTIPLICATION TABLE 1 - %d\n", n);
for (i = 1; i <= 10; i++) {
	for (j = 1; j <= n; j++) {
		printf("%d x %d = %d\n", i, j, i*j);
	
	}
	printf("\n");

}



return (0);
}
*/




/**
 * Exercise 6 - Display the multiplication table of a Particular Number. Use Multiplication table to practice Nested loop.
 */

/*
int main(int argc, char **argv)
{
	int n,i ;
printf("Input the Number \n");
scanf("%d",&n);
printf("MULTIPLICATION TABLE 1 - %d\n", n);
for (i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", n, i, n*i);
	
	}
return (0);
}
*/




/**
 * Exercise 11 - Repeat a Number in a row in a right angle triangle pattern
 */

/*
int main(int argc, char **argv)
{
	int n,i ,j;
printf(" Enter the Number of rows: \n");
scanf("%d",&n);
for (i = 1; i <= n; i++) {
for (j = 1; j <= i; j++) {
	printf("%d",i);

}	

	printf("\n");
	}
return (0);
}

*/


/**
 * Exercise 10 - Repeat 1-5 in a row in a right angle triangle pattern
 */

/*
int main(int argc, char **argv)
{
	int n,i ,j;
printf(" Enter the Number of rows: \n");
scanf("%d",&n);
for (i = 1; i <= n; i++) {
for (j = 1; j <= i; j++) {
	printf("%d",j);

}	

	printf("\n");
	}
return (0);
}
*/




/**
 * Exercise 9 - Display *  in a right angle triangle pattern 
 */

/*
int main(int argc, char **argv)
{
	int n,i ,j;
printf(" Enter the Number of rows: \n");
scanf("%d",&n);
for (i = 1; i <= n; i++) {
for (j = 1; j <= i; j++) {
	printf("* ");

}	

	printf("\n");
	}
return (0);
}
*/



/**
 * Exercise 8 - Display the terms of odd natural numbers and their sum.
 */

/*
int main(int argc, char **argv)
{
	int n,i ,c,sum = 0;
printf("How many numbers: \n");
scanf("%d",&n);
for (i = 1; i <= n; i++) {
	c = (i*2) - 1;
	printf("Number: %d\n", c);
	sum = sum + c;

}	
printf("Sum of the Odd Natural numbers is : %d\n", sum);
return (0);
}

*/




/**
 * Exercise 12 - Pattern like right angle triangle with number increased by 1
 */

/*
int main(int argc, char **argv)
{
	int n,i ,j, k = 1;
printf("Enter the number of rows: \n");
scanf("%d",&n);
for (i = 1; i <= n; i++) {
for (j = 1; j <= i; j++) {
	printf("%d ", k++);

}
printf("\n");
}	
return (0);
}
*/



/**
 * Exercise 15 - Factorial of a given number
 */


/*
int main(int argc, char **argv)
{
	int n,i, f = 1;
printf("Enter the number to find its factorial: \n");
scanf("%d",&n);
for (i = 1; i <= n; i++) {
	f = f * i;
	
}	
printf("Factorial of %d : %d\n", n, f);
return (0);
}

*/


/**
 * Exercise 16 - Display the n terms of even natural numbers and their sum.
 */



/*
int main(int argc, char **argv)
{
	int n,i, sum = 0, l;
printf("Enter the value of n: \n");
scanf("%d",&n);
for (i = 1; i <= n; i++) {
l = i * 2;
printf("Number %d : %d \n", i, l);
sum = sum + l;
}

printf("Sum of the even natural numbers is : %d\n", sum);
return (0);
}

*/


/**
 * Exercise 19 - Display the n terms of harmonic series and their sum.
 */



/*
int main(int argc, char **argv)
{
	int n,i;
	float sum = 0.0;
printf("Enter the value of n: \n");
scanf("%d",&n);
for (i = 1; i <= n; i++) {
if (i < n) {
	sum+=1/(float)i;

}
if (i == n) {
	sum+=1/(float)i;

}
printf("Number %d : 1/%d \n",i, i);
sum = sum + 1/(float)i;
}

printf("Sum of the harmonic series is : %f\n", sum);
return (0);
}

*/







/**
 * Exercise 21 - Display the sum of the series.
 */



/*
int main(int argc, char **argv)
{
	long int n,i,r, p = 9;
        long int sum = 0;
printf("Enter the value of n: \n");
scanf("%ld",&n);
r = p;
for (i = 1; i <= n; i++) {
sum = sum + p;
printf("Number %ld : %ld\n", i, p);

p = p*10 + r;



}


printf("Sum of the series is : %ld\n", sum);
return (0);
}

*/






/**
 * Exercise 22 - Print the floyd's Triangle.
 */


/*
int main(int argc, char **argv)
{

	int n,i ,j,p,q;
printf("Enter the number of rows: \n");
scanf("%d",&n);
for (i = 1; i <= n; i++) {
if (i%2 == 0) {
	p = 1; q = 0;

}
else {
p = 0; q = 1;
}

for (j = 1; j <= i; j++) {
if (j%2 == 0) {
printf("%d ", p);
}
else {
	printf("%d ", q);
}

}
printf("\n");
}	
return (0);
}

*/




/**
 * Exercise 24 - Program to find the sum of the series [x - x^3 + x^5 + ...]
 */


/*
int main(int argc, char **argv)
{

	int n,i ,j,sum = 0, x, u,l;
printf("Input number of terms: \n");
scanf("%d",&n);
printf("Enter the value of x: \n");
scanf("%d", &x);
j = -1;
for (i = 1; i <= n; i++) {
l = (i*2) - 1;
if (i == 1) {
	j = 1;

}

u = j * pow(x ,l);


sum += u;
j = -1 * (j);

printf("x^%d = %d\n", l, u);
}	

printf("Sum of the series : %d\n", sum);


return (0);
}

*/





/**
 * Exercise 25 - Display the n terms of square natural number and their sum.
 */

/*
int main(int argc, char **argv)
{

	int n,i ,j,sum = 0;
printf("Input number of terms: \n");
scanf("%d",&n);
for (i = 1; i <= n; i++) {
	j = i * i;
	printf("%d ", j);
	sum = sum + j;

}
printf("\n");

printf("Sum of the Square Natural Number : %d\n", sum);


return (0);
}

*/



/**
 * Exercise 26 - Program to find the sum of the series: 1 + 11 + 111 + ...n terms
 */

/*
int main(int argc, char **argv)
{

	int n,i ,sum = 0, l = 1, r;
printf("Input number of terms: \n");
scanf("%d",&n);
r = l;
for (i = 1; i <= n; i++) {

	printf("%d +  ", l);
	sum = sum + l;
	l = l*10 + r;

}
printf("\n");

printf("Sum of the Series : %d\n", sum);


return (0);
}
*/











































































