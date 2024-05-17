#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    int maxi = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);
    }
    return maxi;
}

int getMin(int num[], int n)
{
    int mini = INT32_MAX;

    for (int i = 0; i < n; i++)
    {
        mini = min(mini, num[i]);
    }
    return mini;
}

int main()
{
    int size;
    cin >> size;
    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << getMax(num, size) << endl;
    cout << getMin(num, size) << endl;
    return 0;
}