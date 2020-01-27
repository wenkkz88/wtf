#include <iostream>
#include <cmath>
using namespace std;

    const int FLOOR_ROUND=1;
    const int CEILING_ROUND=2;
    const int ROUND=3;

int main() {
    int choice;
    double my_val;
    cout<<"Please enter a real number:";
    cin>>my_val;
    cout<<"Choose your rounding method:\n1. Floor round\n2. Ceiling round\n3. Round to the nearest whole number\n";
    cin>>choice;


    switch(choice){
        case 1: cout<<floor(my_val)<<endl;
            break;
        case 2: cout<<ceil(my_val)<<endl;
            break;
        case 3: cout<<round(my_val)<<endl;
            break;
    }
    return 0;

}