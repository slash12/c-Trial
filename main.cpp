#include <iostream>

using namespace std;

int main()
{
    /* displaying text
    *cout << "Hello world!" << endl;
    *cout << "Hello world! \n";
    *cout << "Hello World two";
    */

    /*Variable declaration
    *int a = 4;
    *int b = 24;

    *int sum = a + b;
    *cout << sum;
    */

    //creating variable without entering their value
    int a;
    int b;
    int sum;

    cout << "Enter a number! \n";
    cin >> a;

    cout << "Enter another number \n";
    cin >> b;

    sum = a + b;
    cout << "The sum is " << sum << endl;

    return 0;
}
