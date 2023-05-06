//circular linkedlist
#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
}*head = NULL;

void create(int A[] , int n){
    struct Node *t, *last;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = head;
    last = head;
    
    for(int i = 1; i < n ; i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
void display(struct Node *p){
    do{
        printf("%d ", p->data);
        p = p->next;
    }while(p!= head);
}
void insert(int x , int pos){
    struct Node *p = head , *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    if(pos == 1){
        t->next = head;
        while(p->next !=head){
            p = p->next;
        }
        p->next = t;
        head = t;
    }else if( pos > 1){
        for(int i = 1; i < pos-1; i++){
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}
void Delete(int pos){
    struct Node *p = head , *q = NULL;
    int x  = 0;
    if(pos == 1){
        while(p->next !=head) p = p->next;
        p->next = head->next;
        x= head->data;
        free(head);
        head= p->next;
    }else if(pos > 1){
        for(int i = 1; i < pos; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
    }
}
int main(){
    int A[] = {10,20,30,40,50};
    create(A, 5);
    insert(100 , 4);
    Delete(3);
    display(head);
    return 0;
}