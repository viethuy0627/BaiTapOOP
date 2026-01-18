#include <iostream>
using namespace std;

struct Time
{
    int Hour;
    int Minute;
    int Second;
};

int main()
{
    Time T;
    int h, m, s;
    
    cout << "Nhap vao gio phut giay hien tai: ";
    cin >> T.Hour >> T.Minute >> T.Second;

    cout << "Nhap vao gio phut giay cong them: ";
    cin >> h >> m >> s;

    T.Second += s;
    while (T.Second >= 60)
    {
        T.Second -= 60;
        T.Minute++;
    }

    T.Minute += m;
    while (T.Minute >= 60)
    {
        T.Minute -= 60;
        T.Hour++;
    }

    T.Hour += h;
    while (T.Hour >= 24)
    {
        T.Hour -= 24;
    }

    cout << "Ket qua: ";
    cout << T.Hour << ":" << T.Minute << ":" << T.Second << endl;

    system("pause");
    return 0;
}