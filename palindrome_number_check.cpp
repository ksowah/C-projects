#include <iostream>
using namespace std;




int main() {


        int number;
        int reversed = 0, last;

        cout << "Please enter number: ";
        cin >> number;
        int copyOfNum = number;

        while(number != 0){

            last = number % 10;
            reversed = reversed * 10 + last;
            number /= 10;

        }


            if(reversed == copyOfNum){

                cout << "'" << copyOfNum << "'" << " is a palindrome number\n";

            }else{

            cout << "'" << copyOfNum << "'" << " is not a palindrome number\n";

            }


   return 0;
}

