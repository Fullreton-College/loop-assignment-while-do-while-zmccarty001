#include <iostream>
#include <iomanip>
using namespace std;
int main () 
{
    cout<<fixed<<setprecision(2);
    double yearly_Fee = 3000.00;
    double yearly_Inc = 0.03;
    int count = 0;

    cout<<"Here are the projected rates for the country club"
    <<" over the next five years: \n";
    

    while (count < 5) {
        yearly_Fee += yearly_Fee * yearly_Inc;
        cout<<"Year "<< count + 1<< ": $"<<yearly_Fee<<endl;
        count++;
    }

    return 0;

}