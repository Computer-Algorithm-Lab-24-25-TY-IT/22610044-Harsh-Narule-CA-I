#include <iostream>
using namespace std;

int main() 
{
    int x[5], tmp;
    bool flg;
    cout << "Enter array elements:" << endl;
    for(int i = 0; i < 5; i++) 
    {
        cin >> x[i];
    }
    cout << "\nBefore Sorting:";
    for(int i = 0; i < 5; i++) {
        cout << " " << x[i];
    }
    for(int i = 0; i < 4; i++) 
    {
        flg = false;
        for(int j = 0; j < 4 - i; j++) 
        {
            if(x[j] > x[j+1]) 
            {
                flg = true;
                tmp = x[j];
                x[j] = x[j+1];
                x[j+1] = tmp;
            }
        }
        if(!flg)
            break;
    }
    cout << "\nAfter Sorting:";
    for(int i = 0; i < 5; i++) 
    {
        cout << " " << x[i];
    }
    cout << endl;
    return 0;
}
