#include<stdio.h>
#include<stdlib.h>

struct Node{
int data;
struct Node* next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
// int index(struct Node* n,struct node* m)
// {
//     struct Node* p=n;
//     struct Node* q;
//     int c=0;
//     while(p!=NULL)
//     {
//         q=p->next;
//         while(q!=NULL)
//         {
//            if(p==q)
//            {
//               c=1;
//               break;
//            }
//            else
//            {
//               q=q->next;
//            }
//         }
//         if(c==1)
//         return 1;
//         else
//         p=p->next;
//     }
//     return 0;
// }
void createlist(int n,int m)
{
struct Node* head=(struct Node*)malloc(sizeof(struct Node));
struct Node* head1=(struct Node*)malloc(sizeof(struct Node));
int data; 
printf("Enter the first element for first linked list");
scanf("%d",&data);
head->data=data;
head->next=NULL;
int data1;
printf("Enter the first element for second linked list");
scanf("%d",&data1);
head1->data=data1;
head1->next=NULL;
printf("enter elements of first linked list:\n" );
for(int i=2;i<=n;i++)
{
struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
printf("Enter the next data");
scanf("%d",&data);
ptr->data=data;
 struct Node *p = head ;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
}
printf("enter elements of second linked list:\n" );
for(int i=2;i<=m;i++)
{
struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
printf("Enter the next data");
scanf("%d",&data);
ptr->data=data;
 struct Node *p = head1 ;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
}
int a=merge(head,head1);
if(a==-1)
printf("Never intersected");
else
printf("%d",a);
linkedlistTraversal(head);
}
int main()
{
   int n,m;
   printf("enter number of nodes for first linked list:");
   scanf("%d",&n);
   printf("Enter number of nodes for second linked list");
    scanf("%d",&m);
   createlist(n,m);
   return 0;
}