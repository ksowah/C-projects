#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>  
#include <ctime>  

using namespace std;

int main()
{
    
  string product;
  float price;
  
   srand(time(0));
  int ticketCode =  (rand() % 1000) + 1000;
  
  int response;
  // take user response
  cout << "To secure a shelf enter '0'\n";
  cout << "To read shelf code enter '1'\n";
  cout << "Enter response: ";
  cin >> response;
  cout << endl;
  
  if (response == 0){
      
   // create new file for new registration
  cout << "Enter name of product: ";
  cin >> product;
  cout << "Enter price (per unit): ";
  cin >> price;
  
  
   float copyOfPrice = price;
  
  float charge = price * 0.02;
  price += charge;
  
  ofstream item(product + ".txt");
  
  item << "=========================================" << endl <<
  "\nYOUR SHELVE HAS BEEN SECURED\n" << endl << "product name: " << product << endl <<
  "Product code: " << ticketCode << endl << "Product price: " << copyOfPrice << endl << "2% charge: " << 
  charge << endl << "new price: " << price <<
  endl << "\n=========================================";
  
  item.close();
  
  cout << "\nShelve successfully secured";
      
  }else if(response == 1){
      
      // view file
      
      string myProduct;
      
      cout << "Please enter product name: ";
      cin >> product;
      
      cout << endl;
      cout << product << " has a shelf in our store" << endl;

     ifstream readItem(product + ".txt");        
            
      while (getline(readItem, myProduct)){
          
          cout << myProduct << endl;
          
      }      
      
      
  }
  
  
   

    return 0;
}
