#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){

    unordered_map<string,int>m;
    pair<string,int>p =make_pair("shivam",1);
    m.insert(p);

        pair<string,int>pair2("tripathi",2);
        m.insert(pair2);

        m["mera"]=3;

    cout<<m["mera"];
    



    return 0;

}