#include<iostream>
using namespace std;
class computation{
    public:
    int compute(int a, int b){
        cout<<"1.Using two integer parameters:"<<endl;
        return a+b;   //calculation on two integer parameters 
    }
    float compute(int a, float b){
        cout<<"2.Using one integer and one float parameter:"<<endl;
        return a+b;   //calculation on one integer and one float parameter
    }
    double compute(int a, double b){
        cout<<"3.Using one integer and one double parameter:"<<endl;
        return a+b;   //calculation on one integer and one double parameter
    }
    int compute(char a, char b){
        cout<<"4.Using two char parameters:"<<endl;
        return a+b;   //calculation on two char parameters
    }
    int compute(char a, int b){
        cout<<"5.Using one char and one integer parameter:"<<endl;
        return a+b;   //calculation on one char and one integer parameter
    }
    int compute(){
        cout<<"6.When no parameter is passed:"<<endl;
        return 0;   //calculation on no parameter
    }
};
int main(){
    computation c;
    cout<<"Sum of 25 and 25= "<<c.compute(25 ,25)<<endl;
    cout<<"Sum of 25 and 4.9= "<<c.compute(25,4.9f)<<endl;
    cout<<"Sum of 25 and 4.987= "<<c.compute(25,4.987)<<endl;
    cout<<"Calculation on S and T (ASCII)= "<<c.compute('S','T')<<endl;
    cout<<"Calculation on t and 2= "<<c.compute('t',2)<<endl;
    cout<<"Calculation when no value is provided= "<<c.compute()<<endl;
}