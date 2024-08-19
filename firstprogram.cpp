#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    string hello = "Hello World! \n";
    string goodDay = "Have a good day :)";
    const int myNum = 50;
    int x = 2, y = 8;


    cout << hello;
    cout << goodDay;
    cout << "\n\n I'm learning C++";
    cout << endl << "Saut de ligne";
    cout << "\tonglet horizontal ";
    cout << "\\ antislash ";
    cout << "\" guillemet ";
    cout << endl;
    cout << endl << myNum;
    cout << endl << x + y;
    cout << endl << endl;


    int a, b;
    cout << "Type a number: ";
    cin >> a;
    cout << "Type another number: ";
    cin >> b;
    int sum = a + b;
    cout << "Sum is: " << sum;

    return 0;

}