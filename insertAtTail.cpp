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
    //   while(tail->next!=NULL){
    //       tail=tail->next;
    //   }
      tail->next=node5;
      tail=node5;
}

int main(){
     Node* node1=new Node(15);
     Node* head=node1;
     Node* tail=node1;
    //  Node* node2= new Node(25);
    //  Node* node3= new Node(35); 
     Node* node4=new Node(150);
     Node* node5=new Node(160);
Node* node6=new Node(170);
Node* node7=new Node(180);
     
    //  insertAtHead(head,node2);
    //  insertAtHead(head,node3);
     insertAtTail(tail,node4);
     insertAtTail(tail,node5);  
     insertAtTail(tail,node6);
     insertAtTail(tail,node7);
   
     printLL(head);
    return 0;
}

