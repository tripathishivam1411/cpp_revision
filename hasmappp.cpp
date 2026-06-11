#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int,string>student;
    student[1]="shivam";
    student[2]="sudhir";
    student[3]="Puneet Superstar";
    // printing whole map
    for(auto mp:student){
        cout<<mp.first<<":"<<mp.second<<endl;        
    }

         student.erase(2);//erasing a value
        // printing after deletion
        for(auto it:student){
            cout<<it.first<<":"<<it.second<<endl;
        }
        cout<<student.size();//finding size of map
        // finding  a value 
        if(student.find(4)==student.end())
            student[4]="yash";
        if(student.find(4)!=student.end())
            cout<<student[4];

    return 0;
    
}