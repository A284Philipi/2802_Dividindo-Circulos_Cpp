#include <iostream>

using namespace std;

int main()
{
    long long int n, r;
    cin >> n;
    r = 1 + (((n - 1) * n) / 2) + (((n) * (n - 1) * (n - 2) * (n - 3)) / 24);
    cout << r <<endl;
    return 0;
}
