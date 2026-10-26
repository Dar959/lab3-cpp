#include <iostream>
using namespace std;
int sum(int a, int b)
{
     return a + b;
    }

    int difference(int a, int b)
    {
        return a - b;
    }
    int multiply(int a, int b) {
        return a * b;
    }
    int main(){
        int x;
        int y;
        cout << "vvedi numbers:";
        cin >> x >> y;
        int result = sum(x,y);
        cout << "Sum:" << result << '\n';
        int result_diff = difference(x,y);
        cout << "Diffrence:" << result_diff << '\n';
        int result_mult = multiply(x,y);
        cout << "product:" << result_mult << '\n';
        return 0;
    }