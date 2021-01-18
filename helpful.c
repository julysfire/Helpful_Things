#include <stdio.h>
#include <stdlib.h>

int main(){
	//Basically a string
	char name[];

	//scanf to input data,, specific datatype and where to store it
	printf("Please enter your name: ");
	scanf("%s", &name);
	printf("Your name is %s.\n",name);

	//Int input
	int age;
	printf("Please enter your age: ");
	scanf("%d", &age);
	printf("Your age is %d.\n",age);

	//Double input
	double gpa;
	printf("Please enter your gpa: ");
	scanf("%lf", %gpa);
	printf("Your gpa is %f.\n",gpa);

	//Character
	char test;
      	printf("Please enter a test character: ");
	scanf("%c",%test);
	printf("The test character is %c.\n",test);

	//Scan entire line of text
		//A string with a fixed length
	char name2[20];
	printf("Please enter your name: ");
	fgets(name3, 20,stdin);
	//FGets(variable to store it in, max length, stdin which is "standard input")
	printf("Your name is %s.\n",name2);

	//Can scan for two strings or more
	char fName[20];
	char lName[20];

	printf("Enter a first name and last name: ");
	scanf("%s%s",fName,lName);
	print("The name you entered was %s %s.\n", fName,lName);


	//Arrays
	int luckyNumbers[] = {4,8,15,16,23,43};

	//Another function
	sayHi();

	//Basic if
	int num1 = 1;
	int num2 = 2;
	int greater = 0;

	if(num1 > num2){
		greater = num1;
	}else {
		greater = num2;
	}

	//Basic for loop
	int myNumArray[6]={20,30,40,50,60,70};
	int accessArray = myNumArray[0];
	printf("Value=%d\n",accessArray);
	for(int i=0;i<6;i++){
		printf("elements[%d]=%d\n",i,myNumArray[i]);
	}

	//Ternary operator
	int a = 25, b = 20;
	int c;
	
	c = (a > b) ? b: a;
	printf("Answer: %d\n",c);

	//Switch statements
	int marks=90;
	switch(marks){
		case 90:
			printf("Excellent\n");
			break;
		case 75:
			printf("Meh\n");
			break;
		default:
			printf("Unavilable\n");
	}

	//While loops
	
	//Test at the start of the loop
	int whileTest = 0;

	while(whileTest < 10){
		printf("While Test: %d\n",whileTest);
		whileTest++;
	}

	//Test at the end
	whileTest = 0;
	do{
		printf("While Test in do loop: %d\n",whileTest);
		whileTest++;
	}while(whileText<10);

	return 0;
}

void sayHi(){
	printf("Hello World\n");
}
