#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
  Node(int x){
     this->data=x;
     this->next=NULL;
 }
};

void insertAtHead(Node* &head,Node* node2){
    node2->next=head;
    head=node2;
}


void printLL(Node* head){
      Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}

void insertAtTail(Node* &tail,Node* node5){
      tail->next=node5;
      tail=node5;
}

void insertATPosition(Node* & head,int pos, Node* mynode){
    Node* ptr=head; // 25, 15,150.   pos=2
    while(pos!=1){
        ptr=ptr->next;
        pos--;
    }
    Node* temp=ptr->next;
    ptr->next=mynode;
    mynode->next=temp;
}

int main(){
     Node* node1=new Node(15);
     Node* head=node1;
     Node* tail=node1;
     Node* node2= new Node(25);
     Node* node4=new Node(150);
     insertAtHead(head,node2);
     insertAtTail(tail,node4);
     Node* node5=new Node(30); // 25,15,30,150;
     insertATPosition(head,2,node5);


   
     printLL(head);
    return 0;
}

