
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node * head = NULL;

void push(int value){
    struct Node *n1;
    n1 = new Node();
    n1->data = value;
    n1-> next = NULL;

    if(head == NULL){
        head = n1;
    }
    else{
        n1->next = head;
        head = n1;
    }
}
void pop(){
    struct Node * temp = head;
    head = temp->next;
    delete(temp);
}

void printStack(){
    struct Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<"..............."<<endl;
}

int stackSize(){
    int c =0;
    Node *temp =head;
    while(temp!=NULL){
        c++;
        temp = temp->next;
    }
    return c;
}

int stackSum(){
    int c = 0;

    struct Node * temp = head;

    while(temp != NULL){
        sum = sum = temp->next;
    }
    return sum;
}

void insertAtEnd(int value){
    struct Node *n1;
    n1 = new Node();
    n1->data = value;
    n1-> next = NULL;

    if(head == NULL){
        head = n1;
    }
    else{
        struct Node * temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    printStack();
    pop();
    pop();


}
