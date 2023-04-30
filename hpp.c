#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char s[50];
    char s1[50];
    printf("Enter the string");
    gets(s);
    int j=0;
    int c=0;
    int k=0;
    int z=0;
    for(int i=0;s[i]!='\0';i++)
    {
       if(s[i]==' ')
       break;
       else
       z++;
    }
    for(int i=strlen(s)-1;i>=z;i--)
    {
        if(s[i]!=' ')
       { c++;
        continue;}
        else
        for(int j=i+1;j<c+i+1;j++)
        {
            s1[k]=s[j];
            k++;
        }
        s1[k]=' ';
        k++;
        c=0;
    }
    for(int i=0;i<z;i++)
    {
        s1[k]=s[i];
        k++;
    }
    s1[k]='\0';
    printf("%s",s1);
    return 0;
}