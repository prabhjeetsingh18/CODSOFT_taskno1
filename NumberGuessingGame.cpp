#include<iostream>
using namespace std;

int main(){
    while(1){
    int x=-1,y;
    cout<<"Enter the value of n for range of numbers:-  ";
    cin>>y;
    int n = rand()%y;
    while(x!=n){
    cout<<"Choose any number between 0 to "<<y<<":- ";
    cin>>x;
    if(x>n){
        cout<<"too high"<<endl;
    }
    else if(x<n){
        cout<<"too low"<<endl;
    }
    else if(x==n){
        cout<<"yes you are correct!!"<<endl;
    }
    cout<<endl;
}
}
}