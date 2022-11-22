#include <stdio.h>
#include <stdlib.h>

int test(int nums[],int array_size);
int main(void) {
	int array_size;
int a[] = {1, 2, 3, 4, 5, 1, 5, 6, 90};
array_size = sizeof(a)/sizeof(a[0]);
printf("%d\n", test(a, array_size));
int b[] = {2, 3, 1, 4, 5};
array_size = sizeof(b) / sizeof(b[0]);
printf("%d\n", test(b, array_size));
int c[] = {34, 56, 7, 8};
array_size = sizeof(c)/ sizeof(c[0]);
printf("%d\n", test(c, array_size));


return (0);
}


int test(int nums[], int array_size){

	for (int i = 0; i < array_size - 1; i++) {
		if ((nums[i]== 1) && (nums[i + 1] == 2) && (nums[i + 2] == 3)) 
			return 1;
		
		
	
	}

return (0);

}
