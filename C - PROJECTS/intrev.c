#include <stdio.h>
int main() {

printf("Enter an Integer\n");
int n, reverse = 0, remainder;
scanf("%d", &n);
while (n != 0) {

	remainder = n % 10;
	reverse = reverse * 10 + remainder;
	n /= 10;
}
printf("The Reversed gotten is : %d\n", reverse);

return (0);
}

