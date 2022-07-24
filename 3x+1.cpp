#include<iostream>
using namespace std;
int main ()
{
    long x;
    
    for (int i = 1; i <= 1000; i++)
    {
        x = i;
        while(x > 1)
        {
            if (x % 2 == 0)
                x = x / 2;
            else
                x = (3 * x) + 1;
            cout << x <<endl;
            if(x == 1)
            {
                cout << i <<" is completed" << endl;
                break;
            }
        }
    }
    return 0;
}