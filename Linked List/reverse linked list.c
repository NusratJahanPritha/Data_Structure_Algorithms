#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head,*newnode,*temp;

void addend(int data){  //create linked list
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    
    if(head==NULL){
        head=newnode;
        return;
    }
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=newnode;
}

void reverse(){
    struct node *prev, *current, *nextnode;
    
    prev=NULL;
    current=nextnode=head;
    
    while(nextnode!=NULL){
        nextnode=current->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }
    head=prev;
}
void print(){
    temp=head;
    printf("nodes:\n");
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

int main(){
    addend(3); //creating linked list
    addend(30);
    addend(36);
    addend(21);
    addend(25);
    addend(5);
    addend(2);
    print();
   
    reverse();
    print();
    
}

