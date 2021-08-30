#include <iostream>
#include <string>

using namespace std;

int main()
{
    string customerName;
    double quantityOfElectricity;
    string category;
    double monthlyBill;
    
    // take user details
    cout << "please enter your name: ";
    getline(cin, customerName);
    cout << "please enter quantity of elcectricity used: ";
    cin >> quantityOfElectricity;
    
    
    /* categorise the user into domestic, industrial and commercial depending on electricity consumed */
    if (quantityOfElectricity <= 150){
        
        category = "domestic";
        monthlyBill = quantityOfElectricity * 1.2;
        
    }else if(quantityOfElectricity > 350){
        category = "commercial ";
        monthlyBill = quantityOfElectricity * 3.5;
        
    }else{
        category = "industrial";
        monthlyBill = quantityOfElectricity * 2.3;
        
    }
    
    
    // Rural electrification charge
    double ruralElectrification = 0.01 * monthlyBill;
    
     monthlyBill += ruralElectrification;
    
    // government subsidy
    double governmentSubsidy = 0.5 * monthlyBill;
    
     monthlyBill -= governmentSubsidy;
    
    cout << endl << "=================================" << endl;
    cout << "Name: " << customerName << endl;
    cout << "Electricity consumed: " << quantityOfElectricity << "kw" << endl;
    cout << category << " user" << endl;
    cout << "1% rural electrification: " << ruralElectrification << " GHC" << endl;
    cout << "50% Government Subsidy: " << governmentSubsidy << " GHC" << endl;
    cout << "Final balance to be paid: " << monthlyBill << " GHC" << endl;
    cout << endl << "=================================" << endl;
    

    return 0;
}
