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
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=newnode;
}



void delete_after_position(){
    struct node *nextnode;
    int pos;
    printf("enter position after which u wanna delete\n");
    scanf("%d",&pos);
    
    temp=head;
    for(int i=0;i<pos;i++){
        temp=temp->next;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
    
    
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
    addend(3);
    addend(30);
    addend(36);
    addend(21);
    addend(25);
    addend(5);
    addend(2);
    print();

    // delete_begin();
    // print();
    // delete_end();
    // print();
    delete_after_position();
    print();
    
}
