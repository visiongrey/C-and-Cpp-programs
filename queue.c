#include<stdio.h>
struct node{
int data;
struct node* next;
};
struct node* head;
struct node* tail;
int main(){
head=tail=NULL;
enqueue();
enqueue();
print();
dequeue();
print();
return 0;
}
void enqueue(){
int i,val;
struct node* t=(struct node*)malloc(sizeof(struct node*));
printf("\nEnter the value : ");
scanf("%d",&val);
t->data=val;
t->next=NULL;
if(head==NULL){
head=tail=t;
return;
}
tail->next=t;
tail=t;
}
void dequeue(){
struct node* t=head;
head=t->next;
free(t);
}
void print(){
struct node* t=head;
while(t){
printf("%d-",t->data);
t=t->next;
}
printf("\n");
}
