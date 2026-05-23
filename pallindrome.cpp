#include<iostream>
using namespace std;

int main() {

    int n;
    int sum = 0;
    int rem;
    
    cout << "Enter your number: ";
    cin >> n;

    int original = n;

    while(n > 0) {
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }

    if(sum == original) {
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }

    return 0;
}