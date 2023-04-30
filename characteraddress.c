#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str[50];
    char st[50];
    printf("Enter string\n");
    gets(str);
    int c=0;
    int j=0;
    int z=0;
    for(int i=0;str[i]!=' ';i++)
    {
         z++;
    }
for(int i=(strlen(str)-1);i>z;i--)
{
    if(str[i]==' ')
    {
       for( j=i+1;j<i+c+1;j++)
       {
        printf("%c",str[j]);
       }
       str[j+1]=' ';
       c=0;
    }
    else{
        c++;
        continue;
    }
}
   for(int i=0;i<=z;i++)
   {
    printf("%c",str[i]);
   }
    return 0;
}
