#include<stdio.h>
#include<conio.h>

void main() {
	int choice;

	clrscr();

	printf("1. Item1");
	printf("\n2. Item2");
	printf("\n3. Item3");

	printf("\n\nEnter your choice: ");
	scanf("%d" , &choice);

	switch(choice){
		case 1:
			printf("\nYou have selected Item1");
			break;
		case 2:
			printf("\nYou have selected Item2");
			break;
		case 3:
			printf("\nYou have selected Item3");
			break;
		default:
			printf("\nYou have entered invalid choice!!");
	}

	getch();
}