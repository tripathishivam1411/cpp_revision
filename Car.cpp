#include<iostream>
using namespace std ;
class Car{
    public:
    string name;
    int price;
    int speed;
    int seat;
    
};
void  print(Car c){
        cout<<c.name<<" "<<c.speed<<" " <<
c.seat<<" "<<c.price<<endl;
    }
int main(){
    Car c1;
    c1.name="honda City";
    c1.price=450000;
    c1.seat=5;
    c1.speed=280;

    Car c2;
    c2.name="swift";
    c2.price=10000;
    c2.seat=4;
    c2.speed=180;
        Car c3;
    c3.name="defender";
    c3.speed=500;
    c3.price=500000;
    c3.seat=8;

print(c1);
print(c3);
print(c3);
}