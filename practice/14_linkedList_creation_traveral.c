#include <stdio.h>
#include <stdlib.h>
struct Node{
int data;
struct Node* next;
};

void LinkedList_Traversal(struct Node* ptr){
    while(ptr!= NULL){
printf("%d \n", ptr->data);
ptr = ptr->next;
    }
}

int main(){
struct Node* head, *second, *third, *fourth;
head =(struct Node*) malloc(sizeof(struct Node));
second =(struct Node*) malloc(sizeof(struct Node));
third =(struct Node*) malloc(sizeof(struct Node));
fourth =(struct Node*) malloc(sizeof(struct Node));

head->data = 7;
head->next = second;

second->data = 11;
second->next = third;

third->data = 17;
third->next = fourth;

fourth->data = 22;
fourth->next = NULL;

LinkedList_Traversal(head);

return 0;
}
