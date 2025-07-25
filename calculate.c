#include <stdio.h>
int n;
int sum;
int average;


int main () {
printf("enter the size of your array:\n");
scanf("%d", &n);
int array[n];
int i;
int sum;
	
for(i=0; i<n; i++) {
printf("\nenter an array[%d]\n", i);
scanf("%d", &array[i]);
}

for(i=0; i<n; i++) {
sum = sum + array[i];
}

for(i=0; i<n; i++) {
average =(sum / n);
}

printf("The sum and average of  %d and %d respectively.\n", sum, average);



return 0;
}
