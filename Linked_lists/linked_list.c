//CREATING A LINKED LIST 

#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

int main(){
    struct node *head,*second,*third;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    return 0;
}
