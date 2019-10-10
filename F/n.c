#include<stdio.h>
#include <time.h>
void main()
 {int number;
/* Sis straadaa
printf("Ei,ievadi Skaitli: ");
scanf("%d",&number);
//if ( (number%2)=0 ) viena = tā ir pieskirshanas operaacija!!
if ((number%2)==0)
 printf("%d Pāra\n",number);
 else
  printf("%d Nepāra\n",number);
*/

/*  arii der
printf("Ei,ievadi Skaitli: ");
scanf("%d",&number);
 int remainder=number%2;
   if(remainder==0)
   printf("P\nā\nr\na\n");
   else
   printf("Nepāra\n");
*/
/* tas arii shitam ir #include<time.h>*/
clock_t start_t, end_t, total_t;

printf("Ei,ievadi Skaitli: ");
scanf("%d",&number);
start_t = clock();
if ((number%2)==0)
 printf("%d Pāra\n",number);
 else
  printf("%d Nepāra\n",number);
end_t = clock();
//total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
printf("%c Aiznjema no %ld - %ld -> %ld (s)\n",37,start_t,end_t,end_t-start_t);
start_t = clock();
if ( (number<<31)>>31 )
 printf("%d nePāra\n",number);
 else
  printf("%d Pāra\n",number);
end_t = clock();
printf("Aiznjema no %ld - %ld -> %ld (s)\n",start_t,end_t,end_t-start_t);


 }
