#include<iostream>
#include<deque>
#include<vector>
using namespace std;
 vector<int> max_sw (vector<int>nums,int k){
    deque<int> dq;
    vector<int> ans;
    for(int i=0;i<k;i++){
        while(!dq.empty()&&nums[dq.back()]<nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);
    for(int i=k;i<nums.size();i++){
        if (dq.front()==i-k) dq.pop_front();
         while(!dq.empty()&&nums[dq.back()]<nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(nums[dq.front()]);
    }
    return ans;
 }
int main (){
    int n;
    cout<<"enter the size of vector : ";
    cin>>n;
    cout<<"enter the element of vector \n";
    vector<int> nums(n);
    for (int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"enter the size of sliding window : ";
    int k;
    cin>>k;
    vector<int> ans = max_sw (nums,k);
    for (auto num: ans){
        cout<<num<<" ";
    }cout<<endl;
    return 0;

}