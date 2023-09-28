#include<iostream>
#include<queue>
using namespace std;
class stack {
 queue<int>st;
 public :
   void push_back(int data){ // Tic = O(1)
      this->st.push(data);   
   };
   void pop_back (){// TiC = O(n)
    queue<int> temp;
    while (this->st.size()>1){
        temp.push(this->st.front());
        this->st.pop();
    }
       this->st.pop();
       while (!temp.empty()){
          this->st.push(temp.front());
          temp.pop();
       }
   };
   int top (){ // TiC =O(N)
    queue<int> temp;
    while (this->st.size()>1){
        temp.push(this->st.front());
        this->st.pop();
    }
      int ans= this->st.front();
      temp.push(ans);
      this->st.pop();
       while (!temp.empty()){
          this->st.push(temp.front());
          temp.pop();
       }
       return ans;
   };
   bool isempty (){
    return this-> st.empty();
   }
};
void display (stack st){
    while (!st.isempty()){
        cout<<st.top()<<" ";
        st.pop_back();
    }cout<<endl;
}
int main (){
    cout<<"enter the size of stack : ";
    int n;
    cin>>n;
    cout<<"enter the element of stack\n";
    stack st;
    for (int i=0;i<n;i++){
        int ele ;
        cin>>ele;
        st.push_back (ele);
    }
    display(st);
    return 0;
}