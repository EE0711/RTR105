#include <stdio.h>
#include <string.h>
int main()
{
char strSize[100];
char str[100];
char x,k,max,min,sum;
int y=0,u=0;
int i,j;
float med;
char temp;

printf("Type in a string! ");
scanf("%[^\n]", str);
int n = strlen(str);
min=str[0];
max=str[0];
sum=str[0];
if(n%2 == 0)
med = str[];
else med = str[n/2-1];

for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (str[i] > str[j]) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
   }
for(i=0;i<strlen(str);i++)
{
x=str[i];
if(min < x)
x++;
else
min=x;

k=str[i];
if(max>k)
k++;
else
max=k;

sum=str[i];
y=u+sum;
u=y;
}

printf("Amount of simbols %ld\n", strlen(str));
printf("smallest simbol %d\n", min);
printf("largest simbol %d\n", max);
printf("Average %ld\n", (y/strlen(str)));
printf("sorted alphabetically - %s \n", str);
printf("mediāna %f", med);
}
