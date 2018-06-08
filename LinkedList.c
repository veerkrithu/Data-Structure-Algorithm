//
//  LinkedList.c
//  DataStructue&Algorithm
//
//  Created by Ganesan, Veeramani - Contractor {BIS} on 6/3/18.
//

#include <stdio.h>


struct Node {
    
    int data;
    struct Node *next;
};

void push(struct Node **headPtr, int data) {
    
    struct Node *newNode = (struct Node*) malloc (sizeof(struct Node));
    newNode->data = data;
    
    if(*headPtr == NULL)
    {
        *headPtr = newNode;
        return;
    }
    
    newNode->next = *headPtr;
    *headPtr = newNode;
}

void insertAfter(struct Node *node, int data)
{
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    
    if(node == NULL)
        return;
    
    newNode->next = node->next;
    node->next = newNode;
}

void append(struct Node **headPtr, int data) {
    
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    
    //If headPtr null then this is the head node.
    if(*headPtr == NULL)
    {
        *headPtr = newNode;
        return;
    }
    
    //Traverse from first to last node for appending new node
    struct Node *tempNode = *headPtr;
    while (tempNode->next != NULL)
        tempNode = tempNode->next;
    
    tempNode->next = newNode;
}

int main() {
    
    struct Node *head = NULL;
    append(&head, 3);
    append(&head, 5);
    push(&head, 6);
    insertAfter(head->next, 10);
}
