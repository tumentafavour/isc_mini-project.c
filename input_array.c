#include <stdio.h>
int n;

int main () {
printf("enter the size of your array:\n");
scanf("%d", &n);	
int array[n];
int i;
for(i=0; i<n; i++) {
printf("\nenter an array[%d]\n", i);
scanf("%d", &array[i]);

}
printf("The array elements are:\n");
for(i=0; i<n; i++) {
printf("%d\n", array[i]);	
}




	return 0;
}
