#include <iostream>
#include <windows.h> // ��� SetConsoleOutputCP

using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    int a, b, c, d;

    cout << "������ a: "; cin >> a;
    cout << "������ b: "; cin >> b;
    cout << "������ c: "; cin >> c;
    cout << "������ d: "; cin >> d;

    int result = ((17 * a + 312 * c) >> 5)  // ĳ����� �� 32
        - ((b << 7) - (b << 3))      // �������� b �� 120
        + ((d << 7) - d);            // �������� d �� 127

    cout << "���������: " << result << endl;

    return 0;
}
