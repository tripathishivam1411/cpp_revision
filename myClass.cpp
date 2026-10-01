#include<iostream>
#include<vector>

using namespace std;


 class Chai{
    public:
        
        string teaName;  //name of the tea
        int serving;  //number of serving
        vector<string>ingredients;      // list of ingredients for the tea

            //Memeber function
            void DisplayChaiDetails(){
                cout<<"Tea name:"<<teaName<<endl;
                cout<<"Servings:"<<serving<<endl;
                cout<<"Ingredients:";
                for(string ingredient : ingredients){
                    cout<<ingredient<<" ";
                }
                cout<<endl;
            }
            

};

    int main(){
        Chai chaiOne;
        chaiOne.teaName="Black tea";
        chaiOne.serving=10;
        chaiOne.ingredients={"Water","sugar","tealeaves"};

        chaiOne.DisplayChaiDetails();
        return 0;
    }