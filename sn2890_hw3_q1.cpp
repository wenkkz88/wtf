#include <iostream>
using namespace std;

int main() {
    float item_one_price;
    float item_two_price;
    char member_status;
    float tax_rate;
    float full_price;
    float discounted_subtotal;
    float total_with_tax;

    cout<<"Enter price of item 1: ";
    cin>>item_one_price;
    cout<<"Enter price of item 2: ";
    cin>>item_two_price;
    cout<<"Does the customer have a club card? (Y/N) ";
    cin>>member_status;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>tax_rate;

    //Price before any discounts
    full_price = item_one_price + item_two_price;
        cout<<"Base price: "<<full_price<<endl;

    //Buy one, get the lower priced item half off.
    if (item_one_price >= item_two_price) {
        item_two_price /=2;
    }else{
        item_one_price /=2;
    }

    //If the user is a member, give 10% discount, otherwise just calculate the discounted subtotal.
    if (member_status == 'y' || member_status == 'Y')
    {
        discounted_subtotal  = (item_one_price + item_two_price) * 0.9;
    }else {
        discounted_subtotal = (item_one_price + item_two_price);
    }
    //Add in the tax
    total_with_tax = discounted_subtotal * (1+tax_rate/100);

    cout<<"Price after member discounts: "<<discounted_subtotal<<endl;
    cout<<"Amount Due: "<<total_with_tax<<endl;

    return 0;

}