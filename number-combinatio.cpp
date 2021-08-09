
#include<iostream>
using namespace std;


int product(int copyOfn, int numerator[]){  /*function to get the product of the prime values in the array*/

{

    int top = 1;

    for( int i = 0; i < copyOfn; i++)

        top = top * numerator[i];
       return top;
    }

}

int denProductA(int copyOfDenA, int denA[]){    /*function to get the product of the prime values in the array of the denominator*/

    {
    int downA = 1;

    for(int i = 0; i < copyOfDenA; i++)

        downA = downA * denA[i];
        return downA;
    }

}

int denProductB(int copyOfr, int denB[]){      /*function to get the product of the prime values in the array of the second part of the denominator*/


{
      int downB = 1;

      for(int i = 0; i < copyOfr; i++)

        downB = downB * denB[i];
        return downB;

}

}


int main()
{
   int n;
   int r;
   int i = 0;
   cout << "Enter first number: ";
   cin >> n;
   cout << endl;
   cout << "enter combination number: ";
   cin >> r;
    int numerator[n - 1];
   int copyOfn = n;

   while(n != 0)        /*loop through n to get the prime values of n */
   {
       numerator[i] = n;
       i++;
       n = n - 1;

   }


    int top = product(copyOfn, numerator);

    int j = 0;
    int denomenatorA = copyOfn - r;

     int copyOfDenA = denomenatorA;

    int denA[denomenatorA - 1];

    while(denomenatorA != 0){       /*loop through denomenatorA to get the prime values of denomenatorA*/

        denA[j] = denomenatorA;
        j++;
        denomenatorA = denomenatorA - 1;
    }

    int denoA = denProductA(copyOfDenA, denA);

    int copyOfr = r;
    int denB[r - 1];
    int k = 0;

    while(r != 0){      /*loop through denominatorB to get the prime values of denominatorB*/

        denB[k] = r;
        k++;
        r = r - 1;
    }

    int denoB = denProductB(copyOfr, denB);

    int finalDenomenator = (denoA * denoB);

    int combination = top / (finalDenomenator);

    cout << "The answer is: " << combination << endl;

    return 0;
}
