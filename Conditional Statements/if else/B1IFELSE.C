#include<stdio.h>
#include<conio.h>


void main(){
	int num;
	clrscr();
       /*
	printf("Enter the value of a: ");
	scanf("%d" , &a);
	printf("Enter the value of b: ");
	scanf("%d" , &b);

	sum = a+b;


	//printf("The sum of a and b is:%d" ,sum);

	if(sum > 30){  // opening bracket
	   printf("the sum is greater than 30");
	} // closing bracket


	//sum = a+b;
	//printf("Sum is: %d" , sum);

	//printf("Sum is greater than 30");




	if(sum > 30){
		printf("The sum is greater than 30");
	}else{
		printf("The sum is smaller than 30");
	}





	printf("Enter your marks: ");
	scanf("%d" , &marks);


	if(marks > 90){
		printf("Grade A");
	}else if(marks > 80){
		printf("Grade B");
	}else if(marks > 60){
		printf("Grade C");
	}else{
		printf("Grade F");
	}

	*/


	//postive odd , postive even

	//negative


	printf("Enter the number: ");
	scanf("%d" , &num);

	if(num > 0){
		if(num % 2 == 0){
			printf("Positive Even");
		}else{
			printf("Postitive Odd");
		}
	}else{
		printf("Negative!");
	}

	getch();
}




/* if else? : It is used whne we need to perform code according to the
	      condition

- Every type of if else include if part
- esle block is mandatory


if (Joo): it only include true part :

Syntax:
	if(condition){   //true : code execute  , false : code ignore
		//code
	}

if else (joo , naitar): it will check true part (if) and also false part(else)

Syntax:
	if(condition){    // true : if block     , false : else block
		//code
	}else{
		//code
	}


else if(else if ladder) : it is used when we need to check multiple conditions

Syntax:

	if(condition1){
		//code
	}else if(condition2){
		//code
	}else if(condition3){
		//code
	}else{
		//code
	}


nested if : when we use if else inside another if else.

if -> if else
if else -> if
if -> else if ladder

Example:

if(){
	if(){

	}else{
		if(){

		}else if(){

		}else{

		}
	}
}







*/

