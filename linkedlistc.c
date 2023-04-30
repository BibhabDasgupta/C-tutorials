#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void printlist(struct Node* n)
{
    while(n!=NULL)
    {
        printf("%d\n",n->data);
        n=n->next;
    }
}
void push2(struct Node* n,int data)
{
    struct Node *q=n;
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
   while(n->next!=NULL)
   {
     n=n->next;
   }
    n->next=p;
    n->next->next=NULL;
    n->next->data=data;
    printlist(q);
}
void createlist(int n)
{
    struct Node *head=(struct Node*)malloc(sizeof(struct Node));
    int data;
    printf("Enter the first element");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    for(int i=2;i<=n;i++)
    {
        int data;
        printf("Enter the %d -- element",i);
        scanf("%d",&data);
    struct Node *q=head;
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
   while(q->next!=NULL)
   {
     q=q->next;
   }
    q->next=p;
    q->next->next=NULL;
    q->next->data=data;
    }
    push2(head,5);
   // printlist(head);
}
int main()
{
    int n;
    printf("Enter the number of nodes");
    scanf("%d",&n);
    createlist(n);
    // struct Node *head=NULL;
    // head=(struct Node*)malloc(sizeof(struct Node));
    // head->next=NULL;
    // head->data=1;
    // int data;
    // printf("Enter data");
    // scanf("%d",data);
    // push2(head,data);
    //printlist(head);
    // int data;
    // printf("Enter the data");
    // scanf("%d",&data);
    // push(head,data);
    // push2(head,data);
    // int pos=2;
    // int pos1=1;
    // push3(head,data,pos);
    // pop(head);
    // pop1(head);
    // pop2(head,pos1);
}
