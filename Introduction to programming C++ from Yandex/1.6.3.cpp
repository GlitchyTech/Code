#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, S, p;
    cin >> a >> b >> c;
    p = (a + b + c)/2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << S << endl;
    return 0;
}