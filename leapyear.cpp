#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year as you want to know :"<<endl;
    cin>>year;
    if(year%100!=0&year%4==0){
        cout<<"leap year hai"<<endl;
    }
    else if(year%400==0){
        cout<<"leap year hai";
    }
        else{
        cout<<"leap year nahihai";
        }
        return 0;
    

}