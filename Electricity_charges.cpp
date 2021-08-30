/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string customerName;
    double quantityOfElectricity;
    string category;
    double monthlyBill;
    
    cout << "please enter your name: ";
    getline(cin, customerName);
    cout << "please enter quantity of elcectricity used: ";
    cin >> quantityOfElectricity;
    
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
    
    
    
    double ruralElectrification = 0.01 * monthlyBill;
    
     monthlyBill += ruralElectrification;
    
    double governmentSubsidy = 0.5 * monthlyBill;
    
     monthlyBill -= governmentSubsidy;
    
    cout << endl << "==============================" << endl;
    cout << "Name: " << customerName << endl;
    cout << "Electricity consumed: " << quantityOfElectricity << "kw" << endl;
    cout << category << " user" << endl;
    cout << "1% rural electrification: " << ruralElectrification << endl;
    cout << "50% Government Subsidy: " << governmentSubsidy << endl;
    cout << "Final balance to be paid: " << monthlyBill << endl;
    cout << endl << "==============================" << endl;
    

    return 0;
}
