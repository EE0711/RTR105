#include <stdio.h>



void user_function_1()
	{
		printf("Ei,Lietotāja funkcija\n");
		
	}
void user_function_2();

void main()
	{
		user_function_1();
		user_function_1();
		user_function_2();
	}
void user_function_2()
	{
		user_function_1();
	}




