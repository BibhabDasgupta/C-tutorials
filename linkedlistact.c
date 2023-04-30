// A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. 
// The elements in a linked list are linked using pointers
//In simple words, a linked list consists of nodes where each node contains a data field and 
//a reference(link) to the next node in the list.
// Like arrays, a Linked List is a linear data structure. Unlike arrays, linked list elements are not stored 
// at a contiguous location; the elements are linked using pointers. They include a series of connected nodes. 
// Here, each node stores the data and the address of the next node.
// Arrays can be used to store linear data of similar types, but arrays have the following limitations:

// 1)The size of the arrays is fixed: So we must know the upper limit on the number of elements in advance. 
// Also, generally, the allocated memory is equal to the upper limit irrespective of the usage. 
// 2)Insertion of a new element / Deletion of a existing element in an array of elements is expensive: 
// The room has to be created for the new elements and to create room existing elements have to be shifted 
// but in Linked list if we have the head node then we can traverse to any node through it and insert new node 
// at the required position.
// Example: 
// In a system, if we maintain a sorted list of IDs in an array id[] = [1000, 1010, 1050, 2000, 2040]. 
// If we want to insert a new ID 1005, then to maintain the sorted order, we have to move all the elements 
// after 1000 (excluding 1000). 

// Deletion is also expensive with arrays until unless some special techniques are used. 
// For example, to delete 1010 in id[], everything after 1010 has to be moved due to this so much work 
// is being done which affects the efficiency of the code.
// Advantages of linked lists
// 1)Dynamic Array.
// 2)Ease of Insertion/Deletion.
// 3)Insertion at the beginning is a constant time operation and takes O(1) time, 
// as compared to arrays where inserting an element at the beginning takes O(n) time,
// where n is the number of elements in the array.
// A linked list node
// struct Node {
//     int data;
//     struct Node* next;
// };
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
//Displaying the list
void printlist(struct Node* n)
{
    while(n!=NULL)
    {
        printf("%d\n",n->data);
        n=n->next;
    }
}
//Insertion at beginning
void push(struct Node *n,int data)
{
     struct Node *p=(struct Node*)malloc(sizeof(struct Node));
     struct Node* d=n;
     n=p;
     n->next=d;
     n->data=data;
     printlist(n);
}
//Insertion at end
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
//Insertion at middle
void push3(struct Node* n,int data,int pos)
{
    struct Node *q=n;
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    int c=0;
    while(c+1!=pos)
    {
        n=n->next;
        c++;
    }
    struct Node *d=n->next;
    n->next=p;
    n->next->next=d;
    n->next->data=data;
    printlist(q);
}
//Deleting from begining
void pop(struct Node *n)
{
    struct Node *temp=n;
    n=n->next;
    printlist(n);
    free(temp);
}
//Deleting from end
void pop1(struct Node *n)
{
    struct Node *q=n;
    while (n->next->next!=NULL)
    {
        n=n->next;
    }
    n->next=NULL;
    printlist(q);
    free(n->next->next);
}
//Deleting from middle
void pop2(struct Node *n,int pos)
{
    struct Node *q=n;
    int c=0;
  while(c+1!=pos)
  {
    n=n->next;
    c++;
  }
  n->next=n->next->next;
  printlist(q);
  free(n->next);
}
int main()
{
    struct Node *head=NULL;
    struct Node *second=NULL;
    struct Node *third=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    printlist(head);
    int data;
    printf("Enter the data");
    scanf("%d",&data);
    push(head,data);
    push2(head,data);
    int pos=2;
    int pos1=1;
    push3(head,data,pos);
    pop(head);
    pop1(head);
    pop2(head,pos1);
}