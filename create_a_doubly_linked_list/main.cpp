//
//  main.cpp
//  create_a_doubly_linked_list
//
//  Created by Uby H on 26/07/23.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
}*first=NULL;
void create(int A[], int n)
{
    struct Node *t=NULL,*last=NULL;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->prev=NULL;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->prev=last;
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display()
{
    struct Node *p=first;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the linked list : "<<endl;
    cin>>n;
    cout<<"Enter the elements in the linked list : "<<endl;
    int A[n];
    for(int i=0;i<n;i++)
        cin>>A[i];
    create(A,n);
    cout<<"The linked list is given by : "<<endl;
    display();
    return 0;
}
