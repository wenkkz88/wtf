#include <iostream>
using namespace std;

int main() {
    string user_name;
    int grad_year;
    int current_year;
    int year_diff;

    cout<<"Please enter your name: ";
    cin>>user_name;
    cout<<"Please enter your graduation year: ";
    cin>>grad_year;
    cout<<"Please enter the current year: ";
    cin>>current_year;

    //Subtract graduation year from current year to get status.
    year_diff = grad_year - current_year;



    if (year_diff <= 0)
        //Grad year less than current year means the user has already graduated.
        cout<<user_name<<", you've already graduated."<<endl;
    else if(year_diff == 4)
        cout<<user_name<<", you are a Freshman."<<endl;
    else if(year_diff == 3)
        cout<<user_name<<", you are a Sophomore."<<endl;
    else if(year_diff == 2)
        cout<<user_name<<", you are a Junior."<<endl;
    else if(year_diff == 1)
        cout<<user_name<<", you are a Senior."<<endl;
    else if(year_diff > 4)
        //Grad year more than 4 mostly means they aren't in the 4-year program yet.
        cout<<user_name<<", you aren't in college yet.."<<endl;




    return 0;
}