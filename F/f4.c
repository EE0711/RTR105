#include<stdio.h>

void main()
 {
int number1, number2, yes_no;

for( yes_no=1 ; yes_no ;  ) 
{
	printf("Ei,ievadi 1. Skaitli: ");
	scanf("%d",&number1);
	printf("Ei,ievadi 2. Skaitli: ");
	scanf("%d",&number2);
	if (number1>number2)
	printf(" %d > %d\n",number1,number2);
//break;
printf("Continue? (Jā - jebkurš skaitlis,iznjemot 0)\n");
scanf("%d",&yes_no);
}
 

 }
