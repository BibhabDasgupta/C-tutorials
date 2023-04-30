#include<stdio.h>
int main(int argc, char const *argv[])
{
    char another;
    int num;
    do
    {
        printf("Enter no");
        scanf("%d",&num);
        printf("%d",num*num);
        printf("Want to enter");
        scanf("%c",&another);
    }while(another=='y');
    return 0;
}
