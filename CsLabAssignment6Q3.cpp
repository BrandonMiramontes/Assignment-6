#include <iostream>
using namespace std;

int main() 
{
    int n;
    bool flag = true;
    cout << "please input a natural number: ";
    cin >> n;

    for (int i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) 
        {
            flag = false;
        
        }
    }

    if (flag == true)
        cout << n << " is a prime number";

    else
        cout << n << " is NOT a prime number";

    return 0;
}
