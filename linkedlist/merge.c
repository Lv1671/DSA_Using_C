#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
}*first = NULL, *second = NULL , *third = NULL; //*last = NULL;

void create(int A[], int n){
    struct Node *t,*last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    
    for(int i = 1; i < n; i++){
        t = (struct Node *) malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    
}
void create1(int B[] , int n){
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = B[0];
    second->next = NULL;
    last = second;
    
    for(int i = 1; i < n; i++){
        t = (struct Node *) malloc(sizeof(struct Node));
        t->data = B[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    
}
void display(struct Node * p){
    while(p != NULL){
        printf("%d ", p->data);
        p = p->next;
    }
}
void insert(int x , int pos){
    struct Node *p, *t;
    p = first;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    if(pos == 0){
     t->next = first;
     first = t;   
    }else if(pos > 0 && p){
        for(int i = 1; i < pos - 1; i++){//
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}//void insertLast(int x){
 //   struct Node *t;
 //    t = (struct Node *)malloc(sizeof(struct Node));
 //    t->data = x;
 //    t->next = NULL;
 //    if(first == NULL){
 //        first = last = t;
 //    }else{
 //        last->next = t;
 //        last = t;
 //    }
//}
void insertSorted(struct Node * p ,int x){
    struct Node *t,* q = NULL;
    while(p && p->data < x){
        q = p;
        p = p->next;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = q->next;
    q->next = t;
    
}
void Delete(int pos){
    struct Node *p, *q = NULL;
    int x = 0;
    p = first;
    if(pos == 0 && p){
        first = first->next;
        x = p->data;
        free(p);
    }else if(pos > 0 && p){
        for(int i = 0; i < pos-1; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
    }
}
void remove_duplicate(struct Node *p){
    struct Node *q = p->next;
    while(q!=NULL){
        if(p->data != q->data){
            p = q;
            q = q->next;
        }else{
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}
void reverse(struct Node * p){
    struct Node *q = NULL,*r = NULL;
    while(p != NULL){
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
void concatenate(struct Node *p, struct Node *q){
    third = p;
    while(p->next != NULL){
        p = p->next;
    } p->next = q;
}
void merge(struct Node *p , struct Node *q){
    struct Node * last;
    if(p->data < q->data){
        third = last = p;
        p = p->next;
        last->next = NULL;
    }else{
        third =last = q;
        q = q->next;
        last->next = NULL;
    }
    while(p && q){
        if(p->data < q->data){
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
            
        }else{
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;

        }
        if(p)last->next = p;
        if(q)last->next = q;
    }
}
int main(){
    int A[] = {1,3,9,11};
    int B[] = {8,5,6,13};
    
    create(A,4);
    create1(B,4);
        //remove_duplicate(first);
       // reverse(first);
      // Delete(5);
     //insert(7,6);
    //insertLast(9);
   //insertSorted(first ,4 );
  // display(first);
 //display(second);
// concatenate(first , second);
   merge(first, second);
    display(third);
}