#include <iostream>
using namespace std;

class LinkList{
    public:
     int myval;
     LinkList* nextValAddress;
     LinkList(int x){
         this->myval=x;
         this->nextValAddress= NULL;
     }
};






int main() {
    LinkList* N1=new LinkList(5);  //to create in heap
    LinkList* N2=new LinkList(10);
    N1->nextValAddress=N2;
    cout<<N1->myval<<endl;
    cout<<N1->nextValAddress<<endl;
    cout<<N2->myval<<endl;
    cout<<N2->nextValAddress<<endl;
	return 0;
}