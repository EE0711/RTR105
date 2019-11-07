

#include<stdio.h>
#include<string.h>

int getN(char *);


int main(){
    char str[999];
    printf("Enter Sentence: "); gets(str);
    printf("there are %d words", getN(str));
}


int getN(char *str){
    int i = 0, len, count= 0;
    len = strlen(str);
    if(str[i] >= 'A' && str[i] <= 'z')
       count ++;


    for (i = 1; i<len; i++)
        if((str[i]==' ' || str[i]=='\t' || str[i]=='\n')&& str[i+1] >= 'A' && str[i+1] <= 'z')
        count++;


return count;
}


