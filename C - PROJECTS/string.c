#include <stdio.h>
#include <stdlib.h>

/*
void main()
{
char c[] = "abcd";
char d[5] = "abcd";
char e[] = {'o', 'n', 'v', '\0'};
char f[5] = {'o', 'n', 'v', '\0'};

}
*/

/*
int main(int argc, char **argv)
{
char c[20];
printf("Enter Name \n");
scanf("%s", c);
printf("Your Name is: %s ", c);



return (0);
}

*/

/*
int main(int argc, char **argv)
{
char name[20];
char month[100];
printf("Input your name: \n");
scanf("%s", name);
printf("Month: \n");

scanf("%s", month);

printf("%s", name);
puts(month);



return (0);
}
*/


/*
int main(int argc, char **argv)
{
char string[20];
int c = 0, i;
printf("Enter a String: \n");
gets(string);

for (i = 0; string[i] != '\0'; i++) {
	c++;

}
printf("gets includes the space \nCount of the string : %d\n", c);

return (0);
}

*/


/*
int main(int argc, char **argv)
{
char string[20];
int i;
printf("Enter a String: \n");
gets(string);

for (i = 0; string[i] != '\0'; i++);
printf("gets includes the space \nCount of the string : %d\n", i);

return (0);
}
*/


/*
int main(int argc, char **argv)
{
char string[20];
char dest[300];
int i;
printf("Enter a String: \n");
gets(string);

for (i = 0; string[i] != '\0'; i++)
{
	dest[i] = string[i];
}

dest[i] = '\0';
printf("strcpy without the function \n : %s\n", dest);

return (0);
}

*/

/*
void main()
{
char string[300];
char dest[300];
int i, n, j;
printf("Enter the first string: \n");
gets(string);
printf("Enter the second string\n");
gets(dest);


for (n = 0; string[n] != '\0'; n++);

for (i = n, j = 0; dest[j] != '\0'; i++,j++) {
string[i] = dest[j];
}
printf("strcat without the function \n : %s\n", string);

}

*/




/*
void main()
{
char string[300];
char dest[300];
int i, n1, n2;
printf("Enter the first string: \n");
gets(string);
printf("Enter the second string\n");
gets(dest);



for (n1 = 0; string[n1]!='\0'; n1++);
for (n2 = 0; dest[n2]!='\0'; n2++);

if (n1 != n2) {
	printf("Strings are not equal\n");
	exit(0);

}
else {
for (i = 0; i < n1; i++) {
if (string[i] != dest[i]) {
	break;

}

}
if (i == n1) {
	printf("Strings are Equal\n");
}
else {
printf("strcmp: Strings are not Equal\n");
}
}


}
*/





/*
void main()
{
int equals(char *string, char *dest);
char string[300];
char dest[300];
int i, n1, n2;
printf("Enter the first string: \n");
gets(string);
printf("Enter the second string\n");
gets(dest);

if (equals(string, dest) == 1) {
	printf("Strings are Equal\n");

}
else {
printf("Strings are not equal\n");
}
}

int equals(char *string, char *dest){
int n1, n2, i;
for (n1 = 0; string[n1]!='\0'; n1++);
for (n2 = 0; dest[n2]!='\0'; n2++);

if (n1 != n2) {
	return (0);
}
else {
for (i = 0; i < n1; i++) {
	if (string[i] != dest[i]) {
		return (0);
	
	}
return (1);
}
}

}
*/


/*
void main()
{
char string[300];
int i, j, n, t;
printf("Enter the string to be reversed : \n");
gets(string);
for (n = 0; string[n] != '\0'; n++) {

}
for (i= 0, j = n-1; i < j; i++, j--) {
	t = string[i];
	string[i] = string[j];
	string[j] = t;

}

printf("Reverse of the string : %s\n",string);
}

*/





/*
void main()
{
char string[300];
int i, n, t;
printf("Enter the string to be reversed : \n");
gets(string);
for (n = 0; string[n] != '\0'; n++) {

}
for (i= 0; i < n/2; i++) {
	t = string[i];
	string[i] = string[n - 1 - i];
	string[n -  1 - i] = t;
	

}

printf("Reverse of the string : %s\n",string);
}
*/


/*
void main()
{
char string[300];
int i, n, t;
printf("Enter the string check if palindrome : \n");
gets(string);
for (n = 0; string[n] != '\0'; n++) {

}
for (i= 0; i < n/2; i++) {
if (string[i] != string[n-1-i]) {
break;

}
}
if (i>= n/2) {
	printf("String is a Palindrome\n");

}
else {
printf("String is not a palindrome\n");
}


printf("%s\n", string);
}
*/


/*
void main()
{
char string[300];
int i, n, t, c[123] = {0};
printf("Enter the string to check for each character count : \n");
gets(string);

for (i = 0; string[i] != '\0'; i++) {
	c[string[i]]++;

}

for (i = 0; i < 123; i++) {
	if (c[i] > 0) {
		printf("%c --> %d Times\n", i, c[i]);
	}


}
}
*/

/*
void main()
{
char string[300];
int i, n, t, c[123] = {0};
printf("Enter the string to check for each character count : \n");
gets(string);

for (i = 0; string[i] != '\0'; i++) {
	c[string[i]]++;

}

for (i = 0; i < 123; i++) {
	if (c[i] > 1) {
		printf("%c --> %d Times\n", i, c[i]);
	}


}
}

*/


void main()
{
char string[300];
int i, n, t, c[26] = {0};
printf("Enter the string to check for each character count : \n");
gets(string);

for (i = 0; string[i] != '\0'; i++) {
	c[string[i] - 'a']++;

}

for (i = 0; i < 26; i++) {
	if (c[i] > 0) {
		printf("%c --> %d Times\n", i+'a', c[i]);
	}


}
}











