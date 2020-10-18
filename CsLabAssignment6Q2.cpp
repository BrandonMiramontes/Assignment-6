#include <iostream>
using namespace std;

int main() 
{

    int n, i, sum = 0;

    cout << "Input an integer: ";
    cin >> n;

    if (n > 0) 
    {
        for (i = 1; n > i; i++)
        {
            
            sum += i;
            cout << i << ", ";
        }
    }
    else
    {
        cout << endl;
        cout << "Place an integer that is not a negative or a 0" << endl;
    }
   

    cout << "the sum of these numbers is: " << sum << endl;

    return 0;
}
