#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;   
    }
};
node * head=NULL,*temp=NULL;
void push(int a)
{
    node* newnode=new node(a);
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
}
void print()
{
    node*ptr=head;
    while (ptr!=0)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;

    }
    
}
void reverse()
{
    node* prev=NULL,*cur=head,*nex=NULL;
    while (cur!=0)
    {
        nex=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nex;
    }
    head=prev;
    

}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    reverse();
    print();
    return 0;
}