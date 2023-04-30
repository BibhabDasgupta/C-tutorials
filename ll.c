#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node *next;
};
// void linkedlistTraversal(struct Node *ptr)
// {
//     while(ptr!=NULL)
//     {
//         printf("%d\n",ptr->data);
//         ptr=ptr->next;
//     }
// }

void linkedlistTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int cycle(struct Node* n)
{
    struct Node* p=n;
    struct Node* q;
    int c=0;
    while(p!=NULL)
    {
        q=p->next;
        int k=0;
        while(q!=NULL && k<=4)
        {
           if(p==q)
           {
              c=1;
              break;
           }
           else
           {
              q=q->next;
              k++;
           }
        }
        if(c==1)
        break;
        else
        p=p->next;
    }
    if(c==1)
        return 1;
    else
    return 0;
}

int main()
{
    struct Node *start;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    start=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    start->data=13;
    start->next=second;

    second->data=57;
    second->next=third;

    third->data=70;
    third->next=second;

    fourth->data=10;
    fourth->next=NULL;
    // printf("\nlinked list befor deletion\n");
    //     linkedlistTraversal(start);
int a=cycle(start);
if(a==1)
printf("y");
else
printf("n");
//  start = deleteF(start);
//     linkedlistTraversal(start);

//  start = deleteB(start,2);
//     linkedlistTraversal(start);


// printf("Linked list after deletion\n");
//     start = deleteA(start,70);
//     linkedlistTraversal(start);
return 0;

}