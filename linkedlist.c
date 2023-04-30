//Linked list traversal
#include<stdio.h>
#include<stdlib.h>
 struct Node{
        int i;
        struct Node *Link;
};
void linkedlist(struct Node *ptr)
{
    while(ptr!=NULL){
    printf("%d\n",ptr->i);
    ptr=ptr->Link;
    }
}
int main(int argc, char const *argv[])
{
   struct Node *head,*next,*third;
   //Allocate memory for nodes in the linked list in Heap
   head=(struct Node *)malloc(sizeof(struct Node));
   next=(struct Node *)malloc(sizeof(struct Node));
   third=(struct Node *)malloc(sizeof(struct Node));
    head->i=7;
    head->Link=next;
    next->i=11;
    next->Link=third;
    third->i=9;
    third->Link=NULL;
    linkedlist(head);
    return 0;
}
