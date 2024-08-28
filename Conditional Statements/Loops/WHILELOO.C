#include<stdio.h>
#include<conio.h>

// print the table of the number input by user using while loop


void main() {
	int i = 1;
	int n;
	clrscr();

	printf("Enter the number: ");
	scanf("%d",&n);

	while(i <= 10){
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}


	getch();
}