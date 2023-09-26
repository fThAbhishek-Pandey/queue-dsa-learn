#include<iostream>
#include<vector>
using namespace std;
class node {
    public :
    int val;
    node*next;
    node (int data){
         val= data;
         next = NULL;
    }
};
class queue {
   
    int size;
    node* head;
    node* tail;
    public:
    queue (){
        this->head=NULL;
        this->tail=NULL;
        this->size=0;
    }
    void enqueue(int data){
        node * new_node = new node(data);
        if (this->head==NULL){//IF queue is empty 
        this->head=new_node;
        this->tail= new_node;
        this->tail->next=NULL;
        return;
        }       
            this->tail->next=new_node;
            this->tail=new_node;
            this->tail->next=NULL;
            this->size++;
    }
    void dequeue(){
        if (this->head==NULL){
            cout<<"underflow\n";
            return ;
        }
        node* temp=this->head;
       this-> head=this->head->next;
       if (this->head==NULL) this->tail=NULL;
       temp->next=NULL;
       delete temp;
    }
    int getsize(){
        return this->size;
    }
    bool empty (){
        return this->head==NULL;
    }
    int front(){
        if (this->head==NULL) return -1;
        return this->head->val;
    }
};
int main (){
    int n;
    cout<<"enter the number of element of queqe : ";
    cin>>n;
    cout<<"enter the element of queue\n";
    queue qu;
    //inserting the element of queqe
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        qu.enqueue(ele);
    }
    // printing the queue in field 
    while (!qu.empty()){
        cout<<qu.front()<<" ";
        qu.dequeue();
    }
    cout<<endl;
    return 0;
}