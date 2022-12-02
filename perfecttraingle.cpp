#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i < 5; i++)
    {

        for (int j = 0; j <= 9; j++)
        {
            /* code */

            if (j>=6-1&&j<=i+1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
    }
    cout << endl;
}
