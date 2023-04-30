//To find whether a number is prime or not
#include<stdio.h>
#include<math.h>
int main()
{
int a;
printf("Enter a number");
scanf("%d",&a);
int b=0;    
for(int i=2;i<=sqrt(a);i++)
   {
      if(a%i==0)
      {
            b++;
      }
   }
if(b==0)
   {
      printf("PRime");
   }
else
 {printf("Not prime");}
return 0;
}
