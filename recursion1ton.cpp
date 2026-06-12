#include<iostream>
using namespace std;

int sum(int n){
    if(n==1)
        return 1;

    return sum(n-1) + n;
}

int main(){
    int result = sum(10);
    cout << result;
    return 0;
}