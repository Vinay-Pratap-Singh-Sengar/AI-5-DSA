#include <iostream>
using namespace std;

int main(){
    int month;
    cout<<"enter the month number : "<<endl;
    cin>>month;

    switch(month){
        case 1 : 
            cout<<"winter season";
            break;
        
        case 2 : 
            cout<<"winter season";
            break;

        case 11 : 
            cout<<"winter season";
            break;

        case 12 : 
            cout<<"winter season";
            break;

        case 3 : 
        case 4 : 
        case 5 : 
        case 6 : 
            cout<<"summer season";
            break;

        case 7 : case 8 : case 9: case 10:
            cout<<"Rainy season";
            break;
        default : 
            cout<<"wrong input";
        
    }
    return 0;
}