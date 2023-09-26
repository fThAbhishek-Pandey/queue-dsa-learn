#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void rev_qu (queue<int> &qu){
     if(qu.size()==0) return;
     stack<int> st;
     while (!qu.empty()){
        st.push(qu.front());
        qu.pop();
     }
     while(!st.empty()){
        qu.push(st.top());
        st.pop();
     }
     return;
}
int main(){
    cout<<"enter the number of element of queue : ";
    int n;
    cin>>n;
    cout<<"enter the element of queue \n";
    queue<int> qu;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        qu.push(ele);
    }
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }cout<<endl;
    rev_qu (qu);
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    cout<<endl;
    return 0;
}