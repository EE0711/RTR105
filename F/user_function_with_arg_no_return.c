#include <stdio.h>



void user_function_3(int i_uf)
	{
		printf("Ei,Lietotāja funkcija %d. reizi\n",i_uf);
	}

void user_function_4(int i_uf, double d_uf);

void main()
{
	int i_main=0, N=2;
	while(i_main<N)
	{
	i_main++;
	user_function_3(i_main);
	user_function_4(i_main,(double)i_main / N );//otrs risinaajums 1. *i_main/N
	}
}
void user_function_4(int i_uf, double d_uf)//Šie i_uf un d_uf ir saistiiti tikai ar 4. funkc

{
	printf("Skaitam: %d. reize, tātad %.2f daļa\n",i_uf, d_uf);
}


