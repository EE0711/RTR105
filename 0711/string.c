#include <stdio.h>
#include <string.h>
void main()
{
char a[100];
int count = 0,i;
printf("Jebko! ");
scanf("%[^\n]", a);
for (i = 0;a[i] != '\0';i++)
{
if (a[i] == ' ' && a[i+1] != ' ')
            count++;
    }
//atstarpes teikuma saakumaa un beigaas nenjemam luudzu.
printf("Vārdu skaits: %d\n", count + 1);
}



