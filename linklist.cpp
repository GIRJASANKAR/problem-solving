#include <iostream>
using namespace std;

class Node{
    public:
    int mydata;
    Node* agla;
    
    Node(int x){
        this->mydata=x;
        this->agla=NULL;
    }
};

class LinkList{
    Node* head;
    public:
     LinkList(){
       head=NULL;
     }
   void insertNode(int);
    void printnode();
    void deletenode(int);
    
};



int main() {
    ListList L1=new ListList(5);
	cout<<"GfG!";
	cout<<L1;
	return 0;
}