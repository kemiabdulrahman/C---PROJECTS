#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Exercise 1: Program in C to input a string and print it
 *
 */

/*
void main()
{

char string[30];

printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);
printf("The String you entered is %s\n", string);


}
*/


/**
 * Exercise 2: Program in C to find the length of the string
 *
 */

/*
void main()
{

char string[30];
int i, c = 0;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);
for (i = 1; string[i] != '\0'; i++) {
	c++;
}
printf("Length of the string is %d\n", c);
}

*/




/**
 * Exercise 3: Program in C to separate individual characters from a string.
 *
 */

/*
void main()
{

char string[30];
int i, c = 0;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);
for (i = 0; string[i] != '\0'; i++) {
	printf("%c ", string[i]);
}
}
*/






/**
 * Exercise 3: Program in C to separate individual characters from a string.
 *
 */

/*
void main()
{

char string[30];
int c = 0;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);
while (string[c] != '\0') {
	printf("%c ", string[c]);
	c++;
}
}
*/




/**
 * Exercise 4: Program in C to print individual characters of string in reverse.
 *
 */

/*
void main()
{

char string[30];
int c;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);
c = (strlen(string) - 1);
while (string[c] > 0) {
   printf("%c ", string[c]);
	c--;
}
}

*/




/**
 * Exercise 4: Program in C to print individual characters of string in reverse.
 *
 */


/*
void main()
{

char string[30];
int c, i;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);
c = (strlen(string));
for (i = c; i >= 0; i--) {
printf("%c ", string[i]);

}
printf("\n");

}
*/


/* Without Using strlen function */

/*
void main()
{

char string[30];
int c, i, j, t;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);
for (c = 0; string[c] != '\0'; c++);
for (i = 0, j = c - 1; i < j;i++, j--) {
	t = string[i];
	string[i] = string[j];
	string[j] = t;
}


printf("%s\n",string );

}

*/


/**
 * Exercise 5: Program in C to count the total number of words in a string.
 *
 */


/*
void main()
{

char string[300];
int c = 0, i;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);
for (i = 0; string[i] != '\0'; i++) {
	if (string[i] == ' ' || string[i] == '\n'|| string[i] == '\t') {
		c++;
	
	}
}

printf("Word Count : %d ", c);

}

*/

/*

void main()
{

char string[300];
int c = 0, i = 0;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);
while (string[i] != '\0'){
	if (string[i] == ' ' || string[i] == '\n'|| string[i] == '\t') {
		c++;
	
	}
	i++;
}

printf("Word Count : %d \n", c);

}

*/




/**
 * Exercise 6: Program in C to compare two strings without using string library.
 *
 */

/*

void main()
{

char string[300];
char dest[200];
int c = 0, i, j, n;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);
printf("Enter your second preferred string\n");
fgets(dest, sizeof(dest), stdin);
for (i = 0; string[i] != '\0'; i++);
for (j = 0; dest[j] != '\0'; j++);

if (i != j) {
	exit(0);
}
else {
for (n = 0; n < i; n++) {
	if (string[n] != dest[n]) {
		break;
	
	}


}

if (i == n) {
	printf("Strings are Equal\n");

}
else {
printf("Strings are not equal\n");
}

}

}
*/



/**
 * Exercise 7: Program in C to count total number of alphabets, digits and special characters in a string.
 *
 */

/*
void main()
{

char string[300];
int ac = 0, dc = 0 , spc = 0 ,i = 0, n;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);

while (string[i] != '\0') {
	if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
		ac++;
		
	
	}
	if ((string[i] >= 32 && string[i] <= 47) || (string[i] >= 58 && string[i] <= 64) || (string[i] >= 91 && string[i] <= 96) || (string[i] >= 123 && string[i] <= 126) ) {
		spc++;
	
	}
	if (string[i] >= 48 && string[i] <= 57) {
		dc++;
	
	}

	i++;

}

printf("Special Character Count: %d\n", spc);
printf("Alphabet Count: %d\n", ac);
printf("Digit Count: %d\n", dc);

}
*/






/**
 * Exercise 8: Program in C to copy one string to another string.
 *
 */


/*
void main()
{

char string[300];
char dest[200];
int c = 0, i, j, n;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);

for (i = 0; string[i] != '\0'; i++) {
n = string[i];
string[i] = dest[i];
dest[i] = n;

}
dest[i] = '\0';
printf("%s\n", dest);

}
*/





/**
 * Exercise 9: Program in C to count total number of vowel or consonant in a string.
 *
 */


/*
void main()
{

char string[300];
int c = 0, conc, vwc;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);
while (string[c] != '\0') {
if ((string[c] == 'a' )|| (string[c] == 'e' )||(string[c] == 'i' ) ||(string[c] == 'o' ) ||(string[c] == 'u' )
		|| (string[c] == 'A' )|| (string[c] == 'E' )||(string[c] == 'I' ) ||(string[c] == 'O' ) ||(string[c] == 'U' )) {
	vwc++;

}
else if ((string[c] >= 'a' && string[c] <= 'z') || (string[c] >= 'A' && string[c] <= 'Z')) {
	conc++;

}


c++;
}

printf("Vowels Count : %d\n", vwc);
printf("Consonant Count : %d\n", conc);

}
*/




/**
 * Exercise 10: Program in C to find maximum occurring character in a string.
 *
 */



void main()
{

char string[300];
int c = 0, n = 0;
printf("Enter your preferred string\n");
fgets(string, sizeof(string), stdin);
while (string[n] != '\0') {


n++;
}

}





}




