#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
}*first = NULL;

void create(int A[], int n){
    struct Node * t, *last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data =A[0];
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
void count(struct Node * p){
    int count = 0;
    while(p != NULL){
        count+=1;
         p = p->next;
    }
    printf("\n%d", count);
}
void reverse(struct Node * p){
    if(p != NULL){
        
        reverse(p->next);
        printf("\n%d\t",p->data);
    }
    
}
void display(struct Node * p){
    while(p != NULL){
        printf("%d", p->data);
        p = p->next;
    }
}
void sum(int A[] ,int n, struct Node * p){
    int sum = 0;
    while(p != NULL){
        for(int i = 0; i < n; i++){
            sum+=A[i];
            p = p->next;
        }
    }
    printf("%d\n", sum);
}
void max(struct Node * p){
    int Max = -(int)1e9;
    while(p != NULL){
        if(p->data > Max){
            Max = p->data;
        }
        p = p->next;
    }
    printf("Maximum in the list is : %d",Max);
}
void search(int key , struct Node * p){
    
    while(p != NULL){
        if( p->data == key){
            printf("\nkey value is %d",p->data);
        }
         p = p->next; 
    }
}
void impSearch(int key , struct Node * p){
    struct Node *q = NULL;
    while(p != NULL){
        if(p->data == key){
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q=p;
        p = p->next;
        
    }
}

int main(){
 int A[] = {1,2,3,4,5};
 int key = 0;
 create(A,5);
 display(first);
 count(first);
 reverse(first);
 sum(A,5, first);
 max(first);
 search(key, first);
 impSearch(key , first);
 return 0;
}