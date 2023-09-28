#include<iostream>
#include<stack>
using namespace std;
class queue {
    stack<int> qu;
    public: 
    queue (){}
    void push_back (int data){ //TiC =O (1)
       this->qu.push(data); 
    }
    void pop_front(){// TiC =O (n)
        stack <int> temp;
        while (this->qu.size()>1){
            temp.push(this->qu.top());
          this->qu.pop();
        }
       this-> qu.pop();
        while (!temp.empty()){
           this-> qu.push(temp.top());
            temp.pop();
        }
    }
    int front (){// TiC = O(n)
        stack <int> temp;
        while (this->qu.size()>1){
            temp.push(this->qu.top());
           this-> qu.pop();
        }
        int ans = this->qu.top();
        while (!temp.empty()){
           this-> qu.push(temp.top());
            temp.pop();
        }
        return ans; 
    }
     bool isempty(){ // TiC = O(n)
        return this->qu.empty();
     }
};
 void display (queue qu){
    while (!qu.isempty()){
        cout<<qu.front()<<" ";
        qu.pop_front();
    }cout<<endl;
 }
int main(){
       cout<<"enter the length of queue : ";
       int n;
       cin>>n;
       cout<<"enter the element of queue\n";
       queue qu;
        for (int i=0;i<n;i++){
            int ele;
            cin>>ele;
            qu.push_back(ele);
        }
        display(qu);
        qu.pop_front();
        display(qu);
        qu.pop_front();
        display(qu);
        qu.pop_front();
        display(qu);
        qu.pop_front();
        display(qu);
        return 0;
}