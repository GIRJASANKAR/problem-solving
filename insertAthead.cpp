#include<iostream>
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
void insertAtTail(Node* &head,int val){
    cout<<"hey";
    Node* ptr=head;
    Node* node6= new Node(val);

    while(ptr!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=node6;
    node6->next=NULL;
}

void printLL(Node* head){
      Node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<"--> ";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
     Node* node1=new Node(15);
     Node* head=node1;
     Node* node2= new Node(25);
     Node* node3= new Node(35); 
     Node* node4= new Node(45);
     Node* node5= new Node(55);
     
     
     
     insertAtHead(head,node2);
     insertAtHead(head,node3);
     insertAtHead(head,node4);
     insertAtHead(head,node5);
   
     printLL(head);
     cout<<endl;
     insertAtTail(head,150);
     cout<<endl;
     printLL(head);
    return 0;
}

