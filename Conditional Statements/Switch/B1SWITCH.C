#include<stdio.h>
#include<conio.h>


void main(){
	int choice;
	clrscr();

	printf("Enter your choice between 1 to 4: ");
	scanf("%d" , &choice);
	/*
	if(choice == 1){
		printf("Your choice is 1");
	}else if(choice == 2){
		printf("Your choice is 2");
	}else if(choice == 3){
		printf("Your choice is 3");
	}else if(choice == 4){
		printf("Your choice is 4");
	}else{
		printf("Invalid Choice/Input!!");
	}

	*/

	switch(choice){

		case 1:
			printf("\nYour choice is 1");
			break;

		case 2:
			printf("\nYour choice is 2");
			break;

		case 3:
			printf("\nYour choice is 3");
			break;

		case 4:
			printf("\nYour choice is 4");
			break;

		default:
			printf("\nInvalid Input!!");




	}


	getch();
}


/*

switch case: it is used when we need to perform particular code
	     according to the cases(choice).


Syntax:

switch(variable){

	case 'value':
		//code
	case 'value2':
		//code
	case 'value3':
		//code

}


break:  it is used to break(exit) the switch case

default : it is executed when no cases are matched

*/


