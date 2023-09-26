#include<iostream>
#include<queue>// for creating queue data structure include header file queue
using namespace std;
int main (){
    cout<<"enter the number of  element of queue : ";
    int n;
    cin>>n;
    cout<<"enter the element of queue \n";
    queue<int> qu;// declaration of queue 
    for(int i=0;i<n;i++){// insitillisation of queue 
        int ele;
        cin>>ele;
       qu.push(ele);// enqueue element in queue
    }
    while(!qu.empty()) {
        cout<<qu.front()<<" ";// printing front element 
        qu.pop();// deleting front element 
    }
    cout<<endl;
    return 0;
}