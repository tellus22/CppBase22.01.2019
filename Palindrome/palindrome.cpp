#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int some = a;

    int b{0};

    while (some != 0)
    {
          b = b * 10 + some % 10;
          some /= 10;
    }

    if (a == b)
        cout << "True"<<endl;
    else
        cout << "False"<<endl;

	
	
    return 0;
}

