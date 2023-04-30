#include<stdio.h>
int main()
{
int a[2][10];
printf("Enter terms");
for(int i=0;i<1;i++)
{
    for(int j=0;j<10;j++){
a[i][j]=2*(j+1);
    }
}
for(int i=1;i<2;i++)
{
    for(int j=0;j<10;j++){
a[i][j]=3*(j+1);
    }
}
for(int i=0;i<2;i++)
{
    for(int j=0;j<10;j++){
printf("%d\t",a[i][j]);
    }
    printf("\n");
}
}