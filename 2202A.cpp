#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        std::cin >> x >> y;
        if ((x - 2 * y) % 3 == 0 && (x - 2 * y) >= 0 && y <= x / 2)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}