#include <iostream>
#include <fstream>
#include <string>
using namespace std;





int main()
{

    // varriables to store user data 
        
        string fname;
        string lname;
        string userName;
        string password;
        string gender;
        string email;
        string dateOfBirth;
        int age;
        string nationality;
        int response;

        cout << "To create account enter '1'\n";
        cout << "To login enter '0'\n";
        cout << "Enter response: ";
        cin >> response;

    // conditional statement to put user in controle
        
        if (response == 1){
                
        //   create and write to file      

            cout << "Please enter first name: ";
        cin >> fname;
        cout << "Please enter last name: ";
        cin >> lname;
        cout << "Enter user name: ";
        cin >> userName;
        cout << "Enter password: ";
        cin >> password;
        cout << "Enter gender: ";
        cin >> gender;
        cout << "Enter email: ";
        cin >> email;
        cout << "Enter date of birth: ";
        cin >> dateOfBirth;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter nationality: ";
        cin >> nationality;

        if(age < 18){

            cout << "Sorry your age is not qualified to be registered";

        }

        ofstream database("C:\\Users\\user\\Desktop\\pract_cpp\\" + userName + password + ".txt");

        database << fname << endl << lname << endl << userName << endl
        << password << endl << gender << endl << email << endl << dateOfBirth
        << endl << age << endl << nationality << endl;

        cout << "File created successfully";

        database.close();


        }else if(response == 0){

                
       // read file         
                
            string myData;

            cout << "Please enter user name: ";
            cin >> userName;
            cout << "Please enter password: ";
            cin >> password;
                
                cout << "\n" << + "welcome to your dash board " +  userName << endl;
                cout << "Your personal data is displayed below\n";

            ifstream login("C:\\Users\\user\\Desktop\\pract_cpp\\" + userName + password + ".txt");

            while (getline(login, myData)){

                cout << myData << endl;

            }

            login.close();
        }


    return 0;
}
