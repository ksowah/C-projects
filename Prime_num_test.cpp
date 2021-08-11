
#include<iostream>
using namespace std;




int main()
{
    int n;
    bool prime = true;
    cout << "Enter number: ";
    cin >> n;
    cout << endl;

    int copyOfn = n;

    {

        if(n == 0 || n == 1){
            prime = false;
        }

        else{
                for(int i = 2; i <= n / 2; i++)

            if(n % i == 0){

                prime = false;
                break;
                }
            }
    }

        if(!prime){
            cout << "\'" << copyOfn << "\'" << "is not a prime number.\n";
        }
        else{
            cout << "\'" << copyOfn << "\'" << "is a prime number.\n";
        }


    return 0;
}
