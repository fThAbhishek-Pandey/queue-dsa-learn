#include<iostream>
#include<stack>
using namespace std;
class queue {
    stack<int> qu;
    public:
    queue (){};
    void push_back (int data){// TiC = O(n)
         stack<int> temp;
         while (!this->qu.empty()){
            temp.push(this->qu.top());
            this->qu.pop();
         }
         this->qu.push (data);
         while (!temp.empty()){
            this->qu.push(temp.top());
            temp.pop();
         }
    }
    void pop_front (){// TiC = O(1)
            if (qu.empty()) {
            cout<<"underflow\n";
            return ;
        }
            this->qu.pop();
    }
    int  front (){// TiC = O(1)
        if (qu.empty()) {
            cout<<"underflow\n";
            return -1;
        }
        return this->qu.top();
    
    }
 
    bool isempty (){
        return this->qu.empty();
    }
};
   void display (queue qu){
        while (!qu.isempty()){
            cout<<qu.front()<<" ";
            qu.pop_front();
        }
        cout<<endl;
    }
int main (){
    cout <<"enter the size of queue : ";
    int n;
    cin>>n;
    cout<<"enter the element of queue \n";
    queue qu;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        qu.push_back (ele);
    }
    display (qu);
    qu.pop_front ();
    display (qu);
    qu.pop_front ();
    display (qu);
    qu.pop_front ();
    display (qu);
    qu.pop_front ();
    display (qu);
    qu.pop_front ();
    display (qu);
    return 0;
}