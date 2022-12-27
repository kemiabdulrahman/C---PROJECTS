#include <stdio.h>
#include <stdlib.h>


/**
 * Find the count of words and Characters in the file
 */


int main(int argc, char **argv)
{

FILE *fptr;
char ch;
int chc = 1, wcc = 1;
char fname[20];

scanf("%s", fname);
fptr = fopen(fname, "r");

if (fptr == NULL) {
	printf("Error Opening File");


}
else {
ch = fgetc(fptr);
while (ch != EOF ) {
	printf("%c", ch);

	if (ch == ' ' || ch == '\n' ) {
		wcc++;

	
	}
	else {
	chc++;
	}

	ch = fgetc(fptr);
}
}

fclose(fptr);

printf("Character Count:%d\n", chc);
printf("Word Count:%d\n", wcc);



return (0);
}































































