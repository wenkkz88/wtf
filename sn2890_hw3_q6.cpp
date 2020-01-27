#include <iostream>
using namespace std;

int main() {
    int start_hour, start_minute;
    char time_sep;
    string start_day;
    int call_length;
    double rate;
    double call_cost;

    cout<<"Enter call start time:";
    cin>>start_hour>>time_sep>>start_minute;
    cout<<"Enter day of week the call was initiated on:";
    cin>>start_day;
    cout<<"Enter length of the call in minutes:";
    cin>>call_length;
    //If the call started on the weekend, then flat rate of $0.15 applies.
    if (start_day == "Su" || start_day == "Sa")
        rate=0.15;
    else{
        //Weekday calls between 8am and 6pm get rate 0.4, otherwise rate is 0.25
        if(start_hour >= 8 && start_hour < 18){
            rate=0.40;
        }else{
            rate=0.25;
        }
    }
    call_cost = rate*call_length;
    //cout<<start_day<<" "<<start_hour<<" "<<time_sep<<" "<<start_minute<<" "<<call_length<<endl;
    cout<<"Call cost is "<<call_cost<<endl;
    return 0;

}