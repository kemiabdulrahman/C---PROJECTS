#include <stdio.h>
#include <math.h>


/*
void main(){
	int i;
	for (i = 1; i < 20; i+=2);
		printf("%d\n", i);
}
*/




/*
void main(){
	int n, r, c = 0;
	scanf("%d", &n);
 while (n != 0) {
 	r =  n % 10;
	c++;
	printf("\n %d \n", r);
	n = n/10;

 }	
 printf("Number of digits: %d\n", c);


}

*/



/*
void main(){
	int n, c;
	scanf("%d", &n);
	c = printf("%d", n);
	printf("\n %d\n", c);
}

*/



/*
void main(){
	int n, r, s = 0;
	scanf("%d", &n);
 while (n != 0) {
 	r =  n % 10;
	s = s + r;
	printf("\n %d \n", r);
	n = n/10;

 }	
 printf("Sum of the digits : %d\n", s);


}
*/






/*
void main(){
	int n, r, s, f;
	scanf("%d", &n);
	f = n % 10;
 while (n != 0) {
 	r =  n % 10;
	n = n/10;
	

 }	
 s = r + f;
 printf("Sum of the first and last digit: %d\n", s);


}

*/


/*
void main(){
	int n, r, s1 = 0, s2 = 0;
	scanf("%d", &n);
 while (n != 0) {
 	r =  n % 10;

if (r % 2 == 0) {
	 s1 = s1 + r;
 
}
else {
s2 = s2 + r;
}

n = n/10;
}	
printf("Sum of the Even Numbers : %d\nSum of the Odd numbers : %d  \n", s1, s2);
if (s1 == s2) {
	printf("Both Sums are Equal");
}
else {
printf("NOT");
}
}

*/


/*
void main(){
	int n, r, s1 = 0, s2 = 0, c = 0;
	scanf("%d", &n);
 while (n != 0) {
	 c++;
 	r =  n % 10;

if (c % 2 == 0) {
	 s1 = s1 + r;
 
}
else {
s2 = s2 + r;
}

n = n/10;
}	
printf("Sum of the Even Position Numbers : %d\nSum of the Odd Position Numbers : %d  \n", s1, s2);
if (s1 == s2) {
	printf("Both Sums are Equal");
}
else {
printf("NOT");
}
}

*/


/*
void main(){
	int n, r, s1 = 1, s2 = 1, c = 0;
	scanf("%d", &n);
 while (n != 0) {
	 c++;
 	r =  n % 10;

if (c % 2 == 0) {
	 s1 = s1 * r;
 
}
else {
s2 = s2 * r;
}

n = n/10;
}	
printf("Product of Even Position digits : %d\nProduct of the Odd Position digits : %d  \n", s1, s2);
if (s1 == s2) {
	printf("Both Products are Equal");
}
else {
printf("NOT");
}
}


*/


/*
void main(){
	int n, r, s = 0;
	scanf("%d", &n);
 while (n != 0) {
	
 	r =  n % 10;
	if (r > s) {
		s = r;
	
	}
       n = n/10;
}	
printf("Largest Digit : %d\n",s);
}

*/



/*
void main(){
	int n, r, s = 9;
	scanf("%d", &n);
 while (n != 0) {
	
 	r =  n % 10;
	if (r < s) {
		s = r;
	
	}
       n = n/10;
}	
printf("Smallest Digit : %d\n",s);
}

*/



/*
void main(){
	int n, r, s = 0;
	scanf("%d", &n);
 while (n != 0) {
 	r =  n % 10;
	s = s*10 + r;
	n = n/10;

 }	
 printf("Reverse of the digits : %d\n", s);


}
*/

/*
void main(){
	int n, r, s = 0, t;
	scanf("%d", &n);
	t = n;
 while (n != 0) {
 	r =  n % 10;
	s = s*10 + r;
	n = n/10;

 }

if (t == s) {
	printf("Palindrome Number\n");

}
else {
printf("NOT\n");
}

 printf("Palindrome Number [Reverse == Actual Number] : %d\n", s);


}
*/


/*
void main(){
	int n, r, s = 0, t;
	scanf("%d", &n);
	t = n;
 while (n != 0) {
 	r =  n % 10;
	s = s + r * r * r;
	n = n/10;

 }

if (t == s) {
	printf("Armstrong Number\n");

}
else {
printf("NOT\n");
}

 printf("Armstrong Number [Reverse == Sum of the powers of ..... ] : %d\n", s);


}
*/

/*

void main(){
	int n, r, s = 0, t, c;
	scanf("%d", &n);
	t = n;

while (n != 0) {
	c++;
	n / 10;

}
n = t;

 while (n != 0) {
 	r =  n % 10;
	s = s + pow(r, c);
	n = n/10;

 }

if (t == s) {
	printf("Armstrong Number\n");

}
else {
printf("NOT\n");
}
printf("Armstrong Number [Reverse == Sum of the powers of ..... ] : %d\n", s);
}

*/



int main(int argc, char **argv)
{
printf("Result of the square root of 81 is %f\n", sqrt(81));
printf("13 raised to the power of 2 is %f\n", pow(13, 2));
return (0);
}
























/*
void main(){
	int n, r, t, c, range, s;
	scanf("%d", &range);
for (n = 1; n <= range; n++) {
 s = 0;
c = 0;

	t = n;

while (n != 0) {
	c++;
	n / 10;

}
n = t;

 while (n != 0) {
 	r =  n % 10;
	s = s + ceil(pow(r, c));
	n = n/10;

 }

if (t == s) {
	printf("Armstrong Numbers\n");

}
}
printf("Armstrong Numbes are r [Reverse == Sum of the powers of ..... ] : %d\n", s);
}

*/




/*
void main(){
	int n, r, t,s, range;
	scanf("%d", &range);
	for (n = 0; n <= range; n++) {
	
	t = n;
	s = 0;
 while (t != 0) {
 	r =  t % 10;
	s = s*10 + r;
	t = t/10;

 }

if (n == s) {
	printf("%d ", n);

}
}


}

*/















