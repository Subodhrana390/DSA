bool isPowerofTwo(int n)
{
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            return true;
        }
        if (ans < INT32_MAX / 2)
            ans = ans * 2;
    }
    return false;
}