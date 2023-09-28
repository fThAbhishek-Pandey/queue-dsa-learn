#include<iostream>
#include<vector>
using namespace std;
class cirque {
   vector<int> cqu;
   int fptr ;// fornt index pointer 
   int bptr ; // back index pointer 
   int curr_size;
   int cqu_size;
   public: 
   cirque (int n){// custructer
    this->cqu.resize(n);
    this-> fptr=0;
    this-> bptr = n-1;
    this-> curr_size=0;
     this->cqu_size=n;
   }
   void push_back (int data){
    if (isfull()) return ;
    this->bptr= (this->bptr +1)%this->cqu_size;// moving back pointer circulary 
    this->cqu[this->bptr] = data;
    curr_size++;
   }
   void pop_front (){
        if (isempty()) {
         cout<<"uderflow\n";
         return;
        }
        
        this->fptr= (this->fptr+1) %(this->cqu_size);// moving front pointer circly 
        curr_size--;
   }
   int front (){
      return this->cqu[this->fptr];
   }
   bool isempty (){
      return this->curr_size==0;
   }
   bool isfull (){
      return this->curr_size==this->cqu_size;
   }
};
void display (cirque cqu){
   while (!cqu.isempty()){
      cout<<cqu.front()<<" ";
      cqu.pop_front();
   } 
   cout<<endl;
}
int main (){
    cout<<"enter the size of queue : ";
    int n;
    cin>>n;
    cirque cqu(n);
    cout<<"enter the element of stack \n";
    for(int i=0;i<n;i++){
      int ele;
      cin>>ele;
      cqu.push_back(ele);
    }
    display (cqu);
    cqu.pop_front();
    display (cqu);
    cqu.pop_front();
    display (cqu);
   cqu.pop_front();

}