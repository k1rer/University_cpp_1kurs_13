#include <iostream>

// 11. Даны x, y, z. Вычислить a, b если 
// Пример можно посмотреть в этой же папке с названием Задание.JPG
// Контрольный пример: 
// Исходные данные : x = 1, y = 2, z = 3
// Ожидаемый результат : a = 1, 39227494, b = 0, 9

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