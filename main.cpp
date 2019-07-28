#include <iostream>

using namespace std;

void printCrap(int x);

int main()
{
    printCrap(10);

    return 0;
}

void printCrap(int x)
{
    cout << "number param " << x << endl;
}
