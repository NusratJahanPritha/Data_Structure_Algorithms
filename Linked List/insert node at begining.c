#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head,*newnode,*current;


void addfirst(int data){
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}

void print(){
    current=head;
    while(current!=NULL){
        printf("%d\n",current->data);
        current=current->next;
    }
    
}

int main(){
    addfirst(3);
    addfirst(5);
    addfirst(1);
    print();
}