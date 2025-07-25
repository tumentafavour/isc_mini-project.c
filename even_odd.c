#include <stdio.h>
int n;







int main () {

printf("enter the size of your array: \n");
scanf("%d", &n);
int array[n];
int i;

for(i=0; i<n; i++) {
printf("\n enter an array[%d]:\n", i);
scanf("%d", &array[i]);

}

for(i=0; i<n; i++) {
if(array[i] % 2==0) {
printf("%d is an even number\n", array[i]);
} else{

printf("%d is an odd number\n", array[i]);
}
}
	
	return 0;

}	
