#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct Node{
int data;
struct Node *link;
};
    struct Node *head=NULL;
void addnode(int d)
{
    struct Node *next;
    next=head;
    next->data=d;
    head=(struct Node *)malloc(sizeof(struct Node));
}
void reverse(struct Node *head)
{
   if(head->link!=NULL)
   {
    reverse(head->link);
   }
   else{
   printf("%d",head->data);
   }
}
void printlist()
{
    struct Node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}
int main(int argc, char const *argv[])
{
    head=(struct Node *)malloc(sizeof(struct Node));
    int n;
   printf("Enter data");
   scanf("%d",&n);
   addnode(n);
   int n1;
   printf("Enter data");
   scanf("%d",&n1);
   addnode(n1);
   int n2;
   printf("Enter data");
   scanf("%d",&n2);
   addnode(n2);
 //  reverse(head);
   printlist();
    return 0;
}
