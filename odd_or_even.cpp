//This programme tells if a number is even or odd
#include<iostream>
using namespace std;




int main()
{
    int number;
    cout << "Please enter number: ";
    cin >> number;
    cout << endl;

    if(number % 2 == 0){
        cout << "This is an even number\n";
    }
    else{
        cout << "this is an odd number\n";
    }

    return 0;
}
