#include <iostream>
using namespace std;

int main()
{
     bool flag = 0;
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {

            cout << "Non prime number";
            flag = 1;
            break;
        }
        if (flag == 0)
        {
            cout << "prime" << endl;
        }
    }
}