#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void printlinkedlist(struct node *p){
    while(p != NULL){
        printf("%d ",p->data);
        printf("%p ",p->prev);
        p = p->next;
    }
}

int main(){
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    
    one->data = 10;
    two->data = 20;
    three->data = 30;
    
    one->next = two;
    one->prev = NULL;
    
    two->next = three;
    two->prev = one;
    
    three->next = NULL;
    three->prev = two;
    
    head = one;
    printlinkedlist(head);
}