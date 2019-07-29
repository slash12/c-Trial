#include <iostream>
#include <string>
using namespace std;

class Test
{
    public:
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
    Test t1;
    t1.setName("something");
    cout << t1.getName();
    return 0;
}

