//1.
#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
void createNode(node* &head,int data){
    node* newnode=new node(data);
    if(head==nullptr){
        head=newnode;
    }
    else{
        node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void printLinkedlist(node* &head){
    node* current=head;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

int main(){
    node* head=nullptr;
    for(int i=10;i<=40;i+=10){
        createNode(head,i);
    }
    printLinkedlist(head);
    return 0;
}

//2.

#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
void insertAtEnd(node* &head,int data){
    node* newnode=new node(data);
    if(head==nullptr){
        head=newnode;
    }
    else{
        node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void printLinkedlist(node* &head){
    node* current=head;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

int main(){
    node* head=nullptr;
    insertAtEnd(head,10);
    insertAtEnd(head,20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    printLinkedlist(head);
    return 0;
}
