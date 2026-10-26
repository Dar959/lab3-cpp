#include <iostream>
using namespace std;
bool isPositive(int f)
{
    return f > 0;
}
bool isThreeDigit(int f)
{
    return f >= 100 && f <= 999;
}
int main()
{
    int x;
    cout << "vvedi:";
    cin >> x;
    if (isPositive(x)) cout << "Positive: yes\n";
    else cout << "Positive: no\n";
    if (isThreeDigit(x)) cout << "Three: yes\n";
    else cout << "Three: no\n";
    return 0;
}