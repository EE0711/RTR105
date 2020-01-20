#include <stdio.h>
#include <string.h>
#include<math.h>
int main()
{
char strSize[100];
char str[100];
char x,k,max,min,sum;
int y=0,u=0;
int i,j;
float med;
char temp;
int mas[100], masb[100];
int a=0,b,c=0;
printf("Type in a string! ");
scanf("%[^\n]", str);
int n = strlen(str);
min=str[0];
max=str[0];
sum=str[0];

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

if(n%2 == 0)
med = (str[(n/2)]+str[((n/2)-1)])/(float)2;//we are done here(annoying)
else med = str[(n/2)];

int f = 0,h = 0;
int mod=0,buf = 0;
int t = 0;
int sk=1;


for(i=0;i<n;i++)
{
mod = str[i];
f = str[i];
t = str[i+1];
if( f == t )
sk++;
else
{
if(buf<sk){
buf=sk;
masb[a]=sk;
mas[a]=mod;
}
else{
masb[a]=sk;
mas[a]=mod;
}

f=t;
sk=1;
a++;
c++;
}
}


//printf("Amount of simbols %ld\n", strlen(str));
printf("smallest symbol %d\n", min);
printf("largest symbol %d\n", max);
printf("Average %f\n", (y/(float)strlen(str)));
printf("median value %.2f\n", med);
printf("mode value %d\n", buf);
printf("sorted alphabetically - %s \n", str);
//printf("sorted alphabetically - %d \n", str);
/* //modas tests
for(a=0;a<c;a++){
if(masb[a]==buf)
printf("Moda %c\n",mas[a]);
}
for(a=0;a<c;a++){
printf("tests %d\n",masb[a]);
}
*/


}
