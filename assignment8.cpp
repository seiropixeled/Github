#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;

    cout << "Input: ";
    cin >> n;

    int sum = 0;
    cout << "Explanation: ";
    for (int i = 1; i <= n; ++i)
    {
        int series_sum = 0;
        cout << "(";
        for (int j = 1; j <= i; ++j)
        {
            series_sum += j;
            cout << j;
            if (j < i)
            {
                cout << "+";
            }
        }
        cout << ") ";
        sum += series_sum;
    }
    cout << endl
         << "Output: " << sum;

    return 0;
}