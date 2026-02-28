#include <iostream>

using namespace std;
int main()
{
    float x, y, z;
    cin >> x >> y >> z;
    float a = (1 + pow(sin(x + y), 2)) / (2 + abs(x - (2 * x) / (1 + pow(x, 2) * pow(y, 2)))) + 1;
    float b = pow(cos(atan(1 / z)), 2);
    cout << a << endl;
    cout << b;
}