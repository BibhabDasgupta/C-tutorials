#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int g=0;
    char st[50000]="I tried to write a recursive function,but I ended up with a recursive recursive function that recursively recursed.";
    for(int i=0;st[i]!='\0';i++)
    {
        if((st[i]>='A' && st[i]<='Z')||(st[i]>='a' && st[i]<='z'))
        continue;
        else
        st[i]=' ';
    }
    puts(st);
    strupr(st);
    puts(st);
    char ch[1000][50];
    int j=0,k=0;
    for(int i=0;st[i]!='\0';i++)
    {
        if(st[i]==' ')
        {
            ch[j][k]='\0';
            j++;
            k=0;
            continue;
        }
        else
        {
         ch[j][k]=st[i];
         k++;
        }
    }
    int freq=0;
    for(int p=0;p<j;p++)
    {
        freq=0;
        if(ch[p]!=" ")
        {
        for(int y=p+1;y<j;y++)
        {
        if(ch[y]!=" ")
         g=strcmp(ch[p],ch[y]);
        if(g==0)
        {
            strcpy(ch[y]," ");
            freq++;
        }
        }
        if(ch[p]!=" ")
        printf("%d-%s\n",freq+1,ch[p]);
        }
    }
  
    int x=0;
    while(!x){
    char search[50];
    printf("Enter a word\n");
    scanf("%s",search);
    strupr(search);
    int r=0;
    for(int w=0;w<=j;w++)
    {
        int c=strcmp(ch[w],search);
        if(c==0)
        {
           r++;
        }
    }
    if(r>0)
        printf("%s is found %d times\n",search,r);
        else
        printf("%s is not found\n",search);
        printf("Enter 1 to exit");
        scanf("%d",&x);
    }
    return 0;
}
