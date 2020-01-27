#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a_val;
    double b_val;
    double c_val;
    double discriminant_val;
    double solution;
    cout<<"Enter a value for a:";
    cin>>a_val;
    cout<<"Enter a value for b:";
    cin>>b_val;
    cout<<"Enter a value for c:";
    cin>>c_val;

    discriminant_val = (pow(b_val,2)-4*a_val*c_val);

    if (a_val==0 && b_val==0 && c_val==0) {
        cout << "Infinite solutions." << endl;
    }else if(a_val==0 && b_val==0){
        cout << "No solution." << endl;
    }else if(a_val!=0 && discriminant_val > 0) {
        cout << "Two solutions: "<< endl;
        solution = (-1 * b_val + (sqrt(pow(b_val, 2) - 4 * a_val * c_val))) / (2 * a_val);
        cout << "x1 = " <<solution<< endl;
        solution = (-1 * b_val - (sqrt(pow(b_val, 2) - 4 * a_val * c_val))) / (2 * a_val);
        cout << "x2 = " <<solution<< endl;
    }else if(a_val!=0 && discriminant_val == 0) {
        cout << "One solution: "<< endl;
        solution = (-1 * b_val + (sqrt(pow(b_val, 2) - 4 * a_val * c_val))) / (2 * a_val);
        cout << "x = " << solution << endl;

    }else if(a_val!=0 && discriminant_val < 0) {
        cout << "No real solution "<< endl;
    }
    return 0;



}