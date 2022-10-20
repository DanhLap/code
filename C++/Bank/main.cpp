#include <iostream>
#include "F:\Edu\IT\C++\Codes\Bank\Client\client.h"
using namespace std;

int main()
{
    cout<<"this is a bank"<<endl;
    Client cl = Client("Danh",(long)1,(long)10000);
    cl.Affichage();
    cl.depot(10000);
    cl.Affichage();
    cout<<"this is a bank"<<endl;
    return 0;
}