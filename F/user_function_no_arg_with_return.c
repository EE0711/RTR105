#include <stdio.h>



int user_function_5()
	{
	int i_uf;
	printf("Ei,ievadi skaitli(ar 5,jau beigsies:  ");
	scanf("%d",&i_uf);
	return i_uf;
	}

void main()
{
	int i_main, N=5;

	i_main=user_function_5();

	while(i_main!=N)
	{
		printf("Tu esi ievadījis %d\n",i_main);
		i_main=user_function_5();
	}
	printf("5?,tad jaut vairs nav\n");
}


