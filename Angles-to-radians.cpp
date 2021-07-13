#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    double angle;
    int pi = 180;
    double ans;
    cout << "Please enter angle: ";
    cin >> angle;
    ans = angle / pi;
    cout << "Your angle in radians is: ";
    cout << ans << endl;
   return 0;
}
