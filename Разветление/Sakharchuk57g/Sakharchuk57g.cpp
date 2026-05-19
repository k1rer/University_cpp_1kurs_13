// 57. Дано действительное число a. Вычислить f(a), если
//        { 0                   при x <= 0,
// f(x) = { x*x - x             при 0 < x <= 1,
//        { x*x - sin(pi*x*x)   в остальных случаях
// Контрольный пример 1: 
// Исходные данные : a = 5
// Ожидаемый результат : 25

#define _USE_MATH_DEFINES
#include <iostream>

using namespace std;

static double f(double x)
{
    if (x <= 0)
    {
        return 0;
    }
    else if (0 < x && x <= 1)
    {
        return x * x - x;
    }
    else
    {
        return x * x - sin(M_PI * x * x);
    }
}

int main()
{
    double a;
    cin >> a;
    cout << f(a);
    return 0;
}
