#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
}*first = NULL;
void create(int A[], int n){
    struct Node * t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for(int i = 1; i < n; i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct Node * p){
    while(p != NULL){
        printf("%d", p->data);
        p = p->next;
    }
}
void insert(int x , int pos){
    struct Node * t, *p;
    t = (struct Node *)malloc(sizeof(struct Node));
    p = first;
    if(pos == 0){
        t->data = x;
        t->next = first;
        first = t;
        
    }else if(pos > 0 && p){
    t->data = x;
    for(int i = 0; i < pos - 1; i++){
        p = p->next;
    }
    t->next = p->next;
    p->next = t;
    }
   
   
}
int main(){
    int A[] = {1,2,3,4,5};
    create(A,5);
    insert(7,0);
    display(first);
}
