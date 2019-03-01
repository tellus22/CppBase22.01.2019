#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    double a;
    double b;
    double c;
    double x;
    cout << "Put value a: ";
    cin >> a;
    cout << "Put value b: ";
    cin >> b;
    cout << "Put value c: ";
    cin >> c;
    if((b*b - 4*a*c) >= 0)
    {
        x = ( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "x1 = " << x << endl;
        x = ( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a);
        cout << "x2 = " << x << endl;
    }
    else
    {
        cout << "The discriminant is less than 0." << endl;
    }
 
    return 0;
}
