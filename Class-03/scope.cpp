#include<iostream>
using namespace std;

int main(){
    int a = 20;
    if(true){
        int a = 10;
        cout<<"inner value is : "<<a<<endl;
    }
    cout<<"outer value is : "<<a<<endl;

    return 0;
}