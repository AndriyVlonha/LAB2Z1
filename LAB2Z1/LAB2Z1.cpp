#include <iostream>
#include <windows.h> // Для SetConsoleOutputCP

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    int a, b, c, d;

    cout << "Введіть a: "; cin >> a;
    cout << "Введіть b: "; cin >> b;
    cout << "Введіть c: "; cin >> c;
    cout << "Введіть d: "; cin >> d;

    int result = ((17 * a + 312 * c) >> 5)  // Ділення на 32
        - ((b << 7) - (b << 3))      // Множення b на 120
        + ((d << 7) - d);            // множення d на 127

    cout << "Результат: " << result << endl;

    return 0;
}
