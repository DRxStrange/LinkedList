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
Node *takeInput(){
    int data;
    cin>>data;
    Node *head=NULL;
    while(data!=-1 ){
        //create Node
        Node *newNode = new Node(data);
        
        if(head==NULL){
            //head contain the address of the first Node
            head = newNode;
        }
        else{
        Node *temp = head; 
        while(temp->next != NULL){
            temp = temp ->next;
           } 
            temp-> next = newNode;
        }
         
        cin>>data;
    }
    return head;
    //T.C = O(n^2);
} 
int main()
{
    Node *head = takeInput();
    
     print(head);
     
    return 0;
}
