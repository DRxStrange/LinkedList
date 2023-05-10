#include <iostream>

using namespace std;
class Node{
    public:
    //store the data
    int data;
    // store the address of the Node
    Node *next;
    // for creating object make constructor
    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};
int main()
{
    //statically create node.
    Node n1(1);
    Node *head = &n1;
    
    Node n2(2);
   
    Node n3(3);
  
    Node n4(4);
   
    Node n5(5);
    
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    print(head);  
    return 0;
}
