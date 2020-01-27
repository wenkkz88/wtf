#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double weight;
    double height;
    double bmi;

    cout<<"Please enter weight (in pounds):";
    cin>>weight;
    cout<<"Please enter height (in inches):";
    cin>>height;

    //convert to metric
    weight *= 0.453592;
    height *= 0.0254;

    //calculate bmi
    bmi = (weight/pow(height,2));

    //cout<<weight<<" "<<height<<" "<<bmi<<endl;

    //show the results
    if (bmi < 18.5) {
        cout<<"Weight status: underweight"<<endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout<<"Weight status: normal"<<endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout<<"Weight status: overweight"<<endl;
    } else if (bmi >= 30){
        cout<<"Weight status: obese"<<endl;
    }
    return 0;

}