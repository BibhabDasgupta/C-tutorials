//fibonacci series print nth term
#include<stdio.h>
int fib(int num);
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int a=fib(n);
    printf("%d",a);
    /*int b=1;
    int a=0;
    int c=0;
    while(n!=0)
    {
        if(n==1)
        {
    printf("%d",a);}
    else{
    c=a+b;
    a=b;
    b=c;}
    n--;
    }*/
return 0;
}
int b=1;
int a=0;
int c=0;
int fib(int num)
{
if(num==1)
{
    return a;
}
else{
c=a+b;
a=b;
b=c;
fib(num-1);
}
}
