#include<stdio.h>

void main()
{
int i=1,N,fact=1,fact_old=1;
printf("Skaitli\n");
scanf("%d",&N);
 for(i=1;i<=N;i++)
  {
  fact_old = fact;
  fact = fact * i;

}
   
 printf("%d fakt ir %d\n",N,fact);

printf("robezha\n");

}
