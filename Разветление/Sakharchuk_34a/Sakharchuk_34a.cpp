//34. Даны действительные числа x, y, z.Получить:
//а) max(x, y, z);

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"ru");
    double x, y, z;
    cin >> x >> y >> z;
    auto res = max(max(x, y),z);
    cout << "Максимальное число: " << res;
}