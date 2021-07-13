#include <iostream>

using namespace std;



    void calculator()
    {
         double num1, num2;
        char operation;
        double answer;


    cout << "Hello there!! \n";
    cout << "This is a program that executes basic arithmetic operations such as, \n" << "addition, subtraction, multiplication and division \n \n";
    cout << "Lets do some calculations!!";
    cout << endl << endl;

    cout << "Enter first number: ";
    cin >> num1;
    cout << endl;

    cout << "Enter operator: ";
    cin >> operation;
    cout << endl << endl;

    cout << "Enter second number: ";
    cin >> num2;
    cout << endl << endl;



    if (operation == '+')
    {
        answer = num1 + num2;
        cout << "Your answer is: " << answer << endl;
    }
    else if(operation == '-')
    {
        answer = num1 - num2;
        cout << "Your answer is: " << answer << endl;
    }
     else if(operation == '*')
    {
        answer = num1 * num2;
        cout << "Your answer is: " << answer << endl;
    }
     else if(operation == '/')
    {
        answer = num1 / num2;
        cout << "Your answer is: " << answer << endl;
    }
    else
    {
        cout << "Invalid operator!!" << endl;
    }


    }




    void again()
    {

        double num1, num2;
        char operation;
        double answer;


        cout << "\n\nEnter first number: ";
    cin >> num1;
    cout << endl;

    cout << "Enter operator: ";
    cin >> operation;
    cout << endl << endl;

    cout << "Enter second number: ";
    cin >> num2;
    cout << endl << endl;

    if (operation == '+')
    {
        answer = num1 + num2;
        cout << "Your answer is: " << answer << endl;
    }
    else if(operation == '-')
    {
        answer = num1 - num2;
        cout << "Your answer is: " << answer << endl;
    }
     else if(operation == '*')
    {
        answer = num1 * num2;
        cout << "Your answer is: " << answer << endl;
    }
     else if(operation == '/')
    {
        answer = num1 / num2;
        cout << "Your answer is: " << answer << endl;
    }
    else
    {
        cout << "Invalid operator!!" << endl;
    }
    }




int main()
{

    int feedBack;
    int A = 1;
    bool breakOut = true;

    calculator();




    while (A == 1 && breakOut == true)
    {
        cout << "\nTo continue calculations enter '1', or enter any row key to quit: ";
        cin >> feedBack;

        if(feedBack == 1)
        {
            again();

        }
        else
        {
            cout << "\n\nByeee!!\n\n";

            breakOut = false;
        }
    }




    return 0;
}
