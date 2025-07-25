#include <stdio.h>
int largest;
int smallest;
int i;
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

smallest=largest=array[0];
for(i=1; i<n; i++) {
if(array[i] > largest) {
largest = array[i];
}
if(array[i] < smallest) {
smallest = array[i];
}
}

    printf("The largest and smallest elements are %d and %d respectively.\n", largest, smallest);
    








	return 0;



}
