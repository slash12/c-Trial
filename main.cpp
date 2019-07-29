#include <iostream>

using namespace std;

class Test
{
 public:
     void something()
     {
        cout << "something" << endl;
     }
};

int main()
{
    //declaration of object Test
    Test t1;
    //accessing the public method of the class
    t1.something();
    return 0;
}

