#include <iostream>
using namespace std;

double Cong(double n, double m)
{
    return n + m;
}

double Tru(double n, double m)
{
    return n - m;
}

double Nhan(double n, double m)
{
    return n * m;
}

double Chia(double n, double m)
{
    return n / m;
}

int main()
{
    double n, m;
    cout << "Nhap vao so thuc dau tien:";
    cin >> n;
    cout << "Nhap vao so thuc thu hai:";
    cin >> m;

    cout << "Ket qua khi cong 2 so " << n << " va " << m << " la:" << Cong(n, m) << endl;
    cout << "Ket qua khi tru 2 so " << n << " va " << m << " la:" << Tru(n, m) << endl;
    cout << "Ket qua khi nhan 2 so " << n << " va " << m << " la:" << Nhan(n, m) << endl;
    cout << "Ket qua khi chia 2 so " << n << " va " << m << " la:" << Chia(n, m) << endl;

    cin.get();
    cin.ignore();
    return 0;

}