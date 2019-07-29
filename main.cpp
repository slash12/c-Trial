#include <iostream>
#include <string>
using namespace std;

class Test
{
    public:
        Test(string x)
        {
            this->setName(x);
        }
        void setName(string n)
        {
            this->name = n;
        }

        string getName()
        {
            return name;
        }

    private:
        string name;
};

int main()
{
    Test t1("something");
    return 0;
}

