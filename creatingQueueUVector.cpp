#include<iostream>
#include<vector>
using namespace std;
class queue {
vector<int> vec;
int front;
int back;
public: 
 queue (){
    this->front=-1;
    this->back= -1;
 }
  void enqueue(int data){
   if (vec.size()==0){
  this-> vec.push_back(data);
   this-> front++;
   this-> back++;
   return;
   } 
 this-> vec.push_back(data);
  this->back++;
  return;
  }
  void dequeue(){
    if (this->front==this->back) {
        cout<<"underflow\n";
        this->front=-1;
        this->back=-1;
       this-> vec.clear();
        return ;
    }
    this->front++;
    return ;
  }
  int getfront(){
    if (this->front==-1) return -1;
    return this->vec[this->front];
  }
  bool empty (){
    return this->front==-1;
  }
};
int main (){
    cout<<"enter the number of element of queue : ";
    int n;
    cin>>n;
    cout<<"enter the element of queue\n";
    queue qu;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        qu.enqueue(ele);
    }
    while (!qu.empty()){
        cout<<qu.getfront()<<" ";
        qu.dequeue();
    }
    return 0;
}