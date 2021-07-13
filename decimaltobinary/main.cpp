#include <iostream>
#include <cmath>
using namespace std;


int main() {

 // this array stores the remainders of the decimal number

   int binary[32];
   int i = 0;

   // users input is stored in this decimal variable
   int decimal;

   cout << "Please enter decimal number: ";
   cin >> decimal;
   cout << endl;

   // this loop repeates the process of storing the remainders in the array

   while ( decimal >= 1)
   {
       binary[i] = decimal % 2;
       decimal /= 2;
       i ++;

    }

   // the for loop prints the remainders from reverse

    {

   for (int j = i - 1; j >= 0; j--)
        cout << binary[j] ;

        cout << endl;
    }



   return 0;
}
