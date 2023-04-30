#include<stdio.h>
#include<math.h>
int main()
{
    int n=56;
    int r=0;
    int c=0;
    int s=0;
    int g=0;
    while(n!=0)
    {
        r=n%2;
        g=(int)pow(10,c);
        s=s+r*g;
        c++;
        n=n/2;
    }
    printf("%d",s);
    return 0;


}