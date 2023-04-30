#include<stdio.h>
#include<ctype.h>
#include<string.h>
void slice(char str[]);
int main()
{
char str[]="Bibhab";

slice(str);
return 0;
}
void slice(char str[])
{
    char ch;
    int c;
    char ch2;
    int max=0;
for(int i=0;str[i]!='\0';i++)
{
    ch=str[i];
    c=0;
    for(int j=1;str[j]!='\0';j++)
    {
if(str[j]==ch)
{
    c++;
}
    }
    if(c>max)
    {
        max=c;
        ch2=ch;
    }
    }
printf("%c",ch2);
}
