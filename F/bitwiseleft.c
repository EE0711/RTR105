#include<stdio.h>

void main()
 {
/*
char a=10;// atminja bus mainiigais ar izmeru 1 byte saturs 0000 1010
printf("Operācija <<: %d<<1 rezultāts %d\n",a,a<<1);// buus 20

char b;//
printf("B mainīgā \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

b=a<<2;//pieskirshana un biidishana pa bitiem pa kreisi
printf("Operācija <<: %d<<%d rezultāts %d\n",a,2,b);//buus 40

//char c;
//printf("Papētīsim << operāciju\n---------------------\n");
*/

int a=10;// atminja bus mainiigais ar izmeru 4 byte
printf("Operācija <<: %d<<1 rezultāts %d\n",a,a<<1);// buus 20

int b;//
printf("B mainīgā \"sākuma\" stāvoklis (uzreiz pēc deklarēšanas): %d\n",b);

b=a<<2;//pieskirshana un biidishana pa bitiem pa kreisi
printf("Operācija <<: %d<<%d rezultāts %d\n",a,2,b);//buus 40

int c;
printf("\n\nPapētīsim << operāciju\n---------------------\n");
printf("Kropli, ievadi operācijas 1. operandu: ");
scanf("%d",&a);
printf("Kropli, 2. operandu!!!: ");
scanf("%d",&c);
b=a<<c;
printf("------------------------\nSkaties,kas notiek: %d\n",b);



 }

