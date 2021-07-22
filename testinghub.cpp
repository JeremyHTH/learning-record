#include <iostream>
using namespace std;

const unsigned char image[4] = 
{
    'a','b','c','d'
};
int a =0;

int main()
{
    for(int i=0; i<4; i++)
    {
        cout << image[i];   
    }
    cout << a;
    return 0;
}