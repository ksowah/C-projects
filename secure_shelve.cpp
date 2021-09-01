#include <iostream>
#include <string>
using namespace std;

int main()
{
    
  string product;
  float price;
  
  cout << "Enter name of product: ";
  cin >> product;
  cout << "Enter price: ";
  cin >> price;
  float copyOfPrice = price;
  
  float charge = price * 0.02;
  price += charge;
  
  cout << "=========================================";
  cout << "\n\nShelve secured.\n";
  cout << "Product name: " << product << endl;
  cout << "Product price: " << copyOfPrice << endl;
  cout << "2% charge: " << charge << endl;
  cout << "new price: " << price << endl;
  cout << "=========================================";
  
  
  
   

    return 0;
}
