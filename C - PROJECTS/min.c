#include <stdio.h>
int find_min_array(int array[], int length){
int min = array[0];
for (int i = 1; i < length; i++)
{
printf("Checking array[%d] = %d\n",i, array[i]);
	if (array[i] < min)
	min = array[i];
printf("New Min Found: %d\n", min);
}
printf("Minimum array : %d\n", min);

	return min;
}


int main(void) {
int	array1[] = {1, 2,3,4,9, 7, 0, 12};
int	array2[] = {34, 67, 109,  11, 90, 26};
int min1 = find_min_array(array1, 8);
int min2 = find_min_array(array2,6 );
printf("Min 1: %d\n", min1);
printf("Min 2: %d\n", min2);
return (0);
}
