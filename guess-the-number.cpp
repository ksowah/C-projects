#include<iostream>
#include <cstdlib>  // Enables use of rand()
#include <ctime>  // Enables use of time()
using namespace std;


int main() {

    srand(time(0));
    int secreteNum = rand() % 11;
    int value;
    int i = 0;

    cout << "The secrete number ranges from 0 to 10\n";
    cout << "You have 4 chances\n\n";

    cout << "Guess the secrete number: ";
    cin >> value;
    
    
     if(value < 0 || value > 10) // ensure user chooses from the correct range
        {
            cout << "\nYour number should range from 0 to 10\n\n";
        }

    while(value != secreteNum && i != 3)
    {
            cout << "Try again: ";
            cin >> value;
            i++;
            if(value < 0 || value > 10)
        {
            cout << "\nYour number should range from 0 to 10\n\n"; // ensure user chooses from the correct range
        }

    }

        if(value == secreteNum)
        {
            cout << "\n\nYou win!!\n\n";
            cout << "The secrete number is indeed " << secreteNum <<endl;
        }
        else
            {
                cout << "\n\nYou lose!!\n";
                cout << "The secrete number is: " << secreteNum << endl;
            }


return 0;
}
