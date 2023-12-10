#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head,*newnode,*temp;

void addend(int data){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    
    if(head==NULL){
        head=newnode;
        return;
    }
    temp=head;
    while(temp->next!=NULL){ //add at the end of a given linked list
        temp=temp->next;
        
    }
    temp->next=newnode;
}


void print(){
    temp=head;
    printf("nodes:\n");
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void getlength(){
    temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    printf("length:%d",count);
}
int main(){
    addend(3);
    addend(30);
    addend(36);
    addend(21);
    addend(25);
    addend(5);
    addend(2);
    print();
    getlength();
    
}
