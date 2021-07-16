#include <iostream>
#include <cmath>

using namespace std;

/* this function converts decimals to binary*/
void binary(int decimal)
{
    int copyDec = decimal;
    int binary[62];
    int i = 0;

   while ( decimal >= 1)
   {
       binary[i] = decimal % 2;
       decimal /= 2;
       i ++;

    }


    {
        cout << copyDec << " in binary is: ";
        for (int j = i - 1; j >= 0; j--)
        cout << binary[j] ;

        cout << endl;

    }

}

/*This function executes decimal to octal convertion*/
void octal(int decimal)
{
     int copyDec = decimal;
     int octal[30];         /*Array storing octal digits*/
    int i = 0;

     while(decimal >= 1)       /*This loop repeats the process of taking remainders*/
     {
         octal[i] = decimal % 8;
         decimal /= 8;

         i++;
     }

    {

    cout << copyDec << " in octal is: ";

     for(int j = i - 1; j >= 0; j--)    /*This for loop reads stored values in the array in reverse*/

        cout << octal[j] ;
        cout << endl;
    }

}

/*This function executes decimal to hexadecimal conversion*/
void hexadecimal(int decimal)
{
    int copyDec = decimal;
    int hexadecimal[32];
    int i = 0;

    while(decimal > 0)
    {
        hexadecimal[i] = decimal % 16;
        decimal /= 16;

        i++;
    }

    {
        cout << copyDec << " in hexadecimal is: ";

        for(int j = i - 1; j >= 0; j--)

            if(hexadecimal[j] == 10)
        {
            cout << "A";
        }
        else if(hexadecimal[j] ==11)
        {
            cout << "B";
        }
        else if(hexadecimal[j] ==12)
        {
            cout << "C";
        }
        else if(hexadecimal[j] ==13)
        {
            cout << "D";
        }
        else if(hexadecimal[j] ==14)
        {
            cout << "E";
        }
        else if(hexadecimal[j] ==15)
        {
            cout << "F";
        }
        else
        {
                cout << hexadecimal[j];
        }

            cout << endl;
    }

}

void program()  /* This function contains all decimal conversions*/
{

    int decimal;

    cout << "Please enter decimal number: ";
    cin >> decimal;
    cout << endl;

    binary(decimal);
    octal(decimal);
    hexadecimal(decimal);

}

void octalConvertion(long binary, long binary2)     /*this function accepts binary and converts it to octal*/
{
    int decimal = 0;
    int r;
    int i = 1;
    int octal[30];

    while(binary > 0)
    {
        r = binary % 10;
        decimal += r * i;
        i *= 2;
        binary /= 10;

    }

    i = 1;

    int decimal2 = decimal;

    while(decimal2 > 0)
    {
        octal[i] = decimal2 % 8;
        decimal2 /= 8;

        i++;
    }

    cout << binary2 << " in octal is: ";
    for(int j= i -1; j > 0; j--)
    {

        cout << octal[j];
    }
    cout << endl;

}


void hexConvertion(long binary, long binary2)       /*this function accepts binary and converts it to hexadecimal*/
{
    int decimal = 0;
    int r;
    int i = 1;
    int hex[32];

    while(binary > 0)
    {
        r = binary % 10;
        decimal += r * i;
        i *= 2;
        binary /= 10;
    }


    i = 1;

    int decimal2 = decimal;

    while(decimal2 > 0)
    {
        hex[i] = decimal2 % 16;
        decimal2 /= 16;

        i++;
    }

    cout << binary2 << " in hexadecimal is: ";
    for(int j= i -1; j > 0; j--)
    {
            if(hex[j] == 10)
        {
            cout << "A";
        }
        else if(hex[j] ==11)
        {
            cout << "B";
        }
        else if(hex[j] ==12)
        {
            cout << "C";
        }
        else if(hex[j] ==13)
        {
            cout << "D";
        }
        else if(hex[j] ==14)
        {
            cout << "E";
        }
        else if(hex[j] ==15)
        {
            cout << "F";
        }
        else
        {
                cout << hex[j];
        }

    }

    cout << endl;

}

void program2()     /*this function contains all binary conversions*/
{
    long binary;


    cout << "Please enter binary number: ";
    cin >> binary;
    long binary2 = binary;

     octalConvertion(binary, binary2);
    hexConvertion(binary, binary2);

}


int main()
{
    int response;

    cout << "To convert from decimal to BINARY, OCTAL and HEXADECIMAL enter '1'." << endl;
    cout << "To convert from binary to OCTAL and HEXADECIMAL, entaer '0'." << endl << endl;
    cout << "Please enter response: ";
    cin >> response;
    cout << endl;

    if(response == 1)
    {
        program();
    }
    else if(response == 0)
    {
        program2();
    }
    else
    {
        cout << "Invalid response!!\n";
    }

    return 0;
}
