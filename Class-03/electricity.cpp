#include <iostream>
using namespace std;

int main(){
    int units;
    cout<<"Enter the total units : "<<endl;
    cin>>units;

    if(units <= 50){
        int bill = (units * 0.5) * 1.2;
        cout<<"the electricity bill of "<<units <<" units is :" <<bill<<endl;
    }

    else if(units <= 150){
        int bill = (25 + (units-50) * 0.75 ) * 1.2;
        cout<<"the electricity bill of "<<units <<" units is :" <<bill<<endl;
    }

    else if(units <= 250){
        int bill = (100 + (units - 150) * 1.2) * 1.2;
        cout<<"the electricity bill of "<<units <<" units is :" <<bill<<endl;
    }

    else{
        int bill = (220 + (units - 250) *1.5) * 1.2;
        cout<<"the electricity bill of "<<units <<" units is :" <<bill<<endl;
    }

    return 0;
}
// wap to take a number of month from user 
// 11,12,1,2 -> winter season
// 3,4,5,6 -> summer season
// 7,8,9,10 -> rainy season