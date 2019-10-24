#include<stdio.h>
void main ()
{
int a,b,c, t;
printf("ciparus 3\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if (a>b && a>c)
 if (b>c)
 ;//abc
 else
 {t=c;c=b;b=t;}//acb

if(b>a && b>c)
 if(a>c)
 {t=b;b=a;a=t;}//bac
 else
 {t=a;a=b;b=t;t=b;b=c;c=t;}//bca

if(c>a && c>b)
 if(a>b)
 {t=a;a=c;c=t;t=c;c=b;b=t;}
 else
 {t=a;a=c;c=t;} 


printf("Augosha %d %d %d\n",c,b,a);





}
