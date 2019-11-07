#include<stdio.h>
#include<stdlib.h>
int main()
{
 char a[100];
 FILE *fptr;
 FILE *fptr2;

 fptr = fopen("./file.txt","w");
if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   printf("Enter a: ");
   scanf("%[^\n]", a);

   fprintf(fptr, "%s", a);
   fclose(fptr);

   fptr2 = fopen("./file.txt", "r");
   fscanf(fptr, "%[^\n]", a);

   printf("%s\n", a);
   fclose(fptr);
   return 0;

}



