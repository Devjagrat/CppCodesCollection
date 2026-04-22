#include<iostream>
using namespace std;

int main(){
    int n, sum=0,i;
    cout<<"how many numbers you want to add ?"<<endl;
    cin>>n;
    cout<<"Enter the number"<<endl;
    while(n){
        cin>>i;
        sum += i;
        n--;
        if(n>0){
            cout<<"Next number ?"<<endl;
        }
        else{
            cout<<"Number count up"<<endl;
        }
    }
    cout<<"Your sum is: "<<sum<<endl;
    return 0;
}