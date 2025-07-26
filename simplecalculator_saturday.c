#include <stdio.h>
int addition();
int multiplication(int a, int b); 
int subtraction(int a, int b);
float division( );
int a, b;
int cube(int i);
int square(int i);
int n;
int i;
char operator;
float c, d;
int main () {
	printf("choose an operator(+, -, *, /, ^, $,):\n");
	scanf("%s", &operator);		

	if(operator == '+') {
		addition( );
	}

	else if(operator == '-') {
		subtraction( a, b );
	}
	else if(operator == '*') {
		multiplication(a,  b);
	}
	else if(operator == '/') {
		division();
	}

	else if (operator == '^') {
		square(i);
	}

	else if(operator == '$') {
		cube(i);
	}


	if(operator != '+','-','*','/') {
	} else{
		printf("invalid input");
	}

	return 0;
}



int addition() {

	printf("enter the size of your array:\n");
	scanf("%d", &n);
	int array[n];
	int i;
	int sum;
	for(i=0; i<n; i++) {
		printf("\nenter an array[%d]\n", i);
		scanf("%d", &array[i]);
	}
	 sum = 0;

	for(i = 0 ; i < n; i++){
		sum = sum + array[i];
	}
	printf("The sum is %d", sum);
	return sum;
}

int subtraction(int a, int b) {
	printf("enter number 1:\n");
	scanf("%d", &a);
        printf("enter number 2:\n");
	scanf("%d", &b);
	int take = a - b;
	printf("the take is %d", take);
	return take;
}


int multiplication(int a, int b) {

	printf("enter the size of your array:\n");
	scanf("%d", &n);
	int array[n];
	int i;
	for(i=0; i<n; i++) {
		printf("\nenter an array[%d]\n", i);
		scanf("%d", &array[i]);
	}

	int mult = 1;

        for(i = 0 ; i < n; i++){
                mult =mult * array[i];
        }
        printf("The sum is %d", mult);
        return mult;

}

float division() {
	printf("enter number 1:\n");
        scanf("%f", &c);
        printf("enter number 2:\n");
        scanf("%f", &d);

float divide =c/d;
	printf("the divide is %f", divide);
	return divide;
}

int cube(int i) {
	printf("enter an integer: \n");
	scanf("%d", &i);
	int cub = i * i * i;
	printf("the cub is %d", cub);
	return cub;
}

int square(int i) {
	printf("enter an integer:\n");
	scanf("%d", &i);
	int squares = i * i;
	printf("the squares is %d", squares);
	return 0;
}
