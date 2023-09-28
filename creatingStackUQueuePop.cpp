#include<iostream>
#include<queue>
using namespace std;
class stack {
    queue<int> st;
    public:
     stack (){}
     void push_back(int data){
        queue<int> temp;
        while (!this->st.empty()){
                temp.push(st.front());
                this->st.pop();
        }
        this-> st.push(data);
        while (!temp.empty()){
            this->st.push(temp.front());
            temp.pop();
        }
     }
     void pop_top(){
        if (st.empty ()) {
            cout<<"underflow \n";
            return;
        }
        this->st.pop();
     }
     int top(){
       if (st.empty ()) {
            cout<<"underflow \n";
            return -1;
        }
        return this->st.front();  
     }
     bool isempty (){
        return this->st.empty();
     }
};
void display (stack st){
    while (!st.isempty()){
        
        cout  <<st.top()<<" ";
        st.pop_top();
    }cout<<endl;
}
int main (){
    cout<<"enter the size of stack : ";
    int n;
    cin>>n;
    stack st;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        st.push_back (ele);
    }
    display (st);
}