#include<iostream>
using namespace std;

class Demo
{
    public:
    void Display()
    {
        cout<<"inside Display\n";
    }
};

int main()
{    
    Demo dobj;

    cout<<sizeof(dobj);     // 1byte

    return 0;
}