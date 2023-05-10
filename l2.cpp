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
void print(Node *head){
    
    Node *temp = head;
    while(temp != NULL){
        cout<<temp-> data<<" ";
        temp=temp->next;
    }
}
int main()
{
   
    
    
     // dynamically 
     Node *n1= new Node(10);
     Node *head = n1;
     Node *n2 = new Node(20);
     Node *n3 = new Node(28);
     Node *n4 = new Node(40);
     Node *n5 = new Node(1000);
     n1->next= n2;
     n2->next=n3;
     n3->next = n4;
     n4->next = n5;
     print(head);

     
    return 0;
}
