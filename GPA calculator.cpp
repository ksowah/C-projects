#include <iostream>

using namespace std;




int sumGradePoint(double gradePoint[], int numOfCourses){

    {
        double sum = 0;

        for(int j = 0; j < numOfCourses; j++)

        sum += gradePoint[j];
        return sum;
    }

}

int main()
{

    int numOfCourses;
    int creditHours;


    cout << "Enter number of courses: ";
    cin >> numOfCourses;
    cout << endl;
    cout << "Enter credit hours: ";
    cin >> creditHours;
    cout << endl;

    double gradePoint[numOfCourses - 1];

    for(int i = 0; i < numOfCourses; i++){
        cout << "Enter grade point: ";
        cin >> gradePoint[i];
    }

          double sumOfGrade = sumGradePoint(gradePoint, numOfCourses);

          double gpa = sumOfGrade / (numOfCourses * creditHours);

          cout << "\nYour GPA is: " << gpa;

          if (gpa >= 3.6 && gpa <= 4.0){              //gpa classification
            cout << "\n\nFirst Class\n\n";
        }else if(gpa >= 3.0 && gpa <= 3.599){
            cout << "\n\nSecond Class (Upper Division)\n\n";
        }else if(gpa >= 2.00 && gpa <= 2.999){
            cout << "\n\nSecond Class (Lower Division)\n\n";
        }else if(gpa >= 1.50 && gpa <= 1.999){
            cout << "\n\nThird Class\n\n";
        }else if(gpa >= 1.00 && gpa <= 1.499){
            cout << "\n\nPass\n\n";
        }else if(gpa >= 0.00 && gpa <= 0.999){
            cout << "\n\nFail\n\n";
        }else{
            cout << "\n\nYou might have made a wrong input\n\n";
        }

        cout << "Your performance chart is shown below: \n\n";


         int j = 0;

        while((int)(gradePoint[j]) != 0){

            gradePoint[j] -= 1;
            cout << "[#";

            if((int)(gradePoint[j]) == 0){
                cout << endl;
                j++;

            }else if(j == numOfCourses - 1){

            while((int)(gradePoint[j]) != 0){
                    gradePoint[j] -= 1;
                cout << "[#";
            }

                break;
            }

        }

        cout << endl << endl;

    return 0;
}
