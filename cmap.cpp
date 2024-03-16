//User will give input array we have to print sum of repetative elements means if elements are 1,2,1,3,3,4 so answer is 4 sum(1,3)
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int>m;
    int input[5];
    for(int i = 0;i<5;i++){
        cout<<"enter the element :";
        cin>>input[i];
    }
        for(int i = 0; i<5;i++){
             m[input[i]]++;
        }
        int sum  = 0;
       for(auto ele:m){
            if(ele.second > 1){
                sum = sum + ele.first;
            } 
       }
    cout<<"answer is sum :"<<sum;

    return 0;
}