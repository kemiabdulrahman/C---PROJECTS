#include <stdio.h>

int main()
{
FILE *p = fopen("kemih.txt", "r");
char buffer[500];
while ((fgets(buffer, 500, p) !=  NULL))
 {

printf("%s", buffer);
}
fclose(p);
return (0);
}
