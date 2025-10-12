#include<iostream>
using namespace std;

int main()
{
    int length =0;
    int*Arr = NULL;


    cout<<"Enter the number of element:\n";
    cin>>length;
   //step:allocate the memory
    Arr = new int[length];
    if (Arr == NULL)
    {
        cout<<"unable to allocate memory\n";
    } 
    else
    {
        cout<<"memory gets successfully allocated\n";
    }
    ///step2 : use the memory

    ///step3 : deallocate the memory

    delete[] Arr;
    return 0;
}