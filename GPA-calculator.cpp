#include <iostream>

using namespace std;


// This program is strictly for 6 courses

int main()
{

   int numCourses;
   double gradePoint1,gradePoint2,gradePoint3,gradePoint4,gradePoint5,gradePoint6;
   double gpa;
   int creditHours;

   //collecting user data

   cout << "Please enter number of courses offered: ";
   cin >> numCourses;
   cout << endl;
   cout << "Please enter number of credit hours per course: ";
   cin >> creditHours;
    cout << endl;
   cout << "Enter first grade point: ";
   cin >> gradePoint1;
   cout << endl;
   cout << "please enter next grade point: ";
   cin >> gradePoint2;
   cout << endl;
    cout << "please enter next grade point: ";
   cin >> gradePoint3;
   cout << endl;
    cout << "please enter next grade point: ";
   cin >> gradePoint4;
   cout << endl;
    cout << "please enter next grade point: ";
   cin >> gradePoint5;
   cout << endl;
    cout << "please enter next grade point: ";
   cin >> gradePoint6;
   cout << endl;

   gpa = (gradePoint1 + gradePoint2 + gradePoint3 + gradePoint4 + gradePoint5 + gradePoint6) / (creditHours * numCourses);

   cout << "Your GPA is: " << gpa;

   if(gpa > 4 || gpa < 0)
   {
       cout << "\n \nwhoops!! one or more inputs may be incorrect!! \n";

   }

    return 0;
}
