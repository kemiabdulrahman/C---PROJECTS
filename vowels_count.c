#include <stdio.h>
#include <ctype.h>
int count_vowels(char *string)
	{
if (*string == '\0') return (0);
char c = tolower(*string);
if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
	return 1 + count_vowels(string + 1);
else
return  count_vowels(string + 1);
}




int main(void)
{
char test_string[] = "How have you been over there, Long time no see";
int vowels = count_vowels(test_string);
printf("total vowels: %d\n", vowels);
return (0);
}
