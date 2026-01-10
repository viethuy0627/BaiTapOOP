#include <iostream>
using namespace std;

void TinhNgay(int n, int x)
{
    int ngaysaukhicong = (n + x) % 7;

    switch (ngaysaukhicong)
    {
    case 0:
        cout << "Chu Nhat";
        break;
    case 1:
        cout << "Thu 2";
        break;
    case 2:
        cout << "Thu 3";
        break;
    case 3:
        cout << "Thu 4";
        break;
    case 4:
        cout << "Thu 5";
        break;
    case 5:
        cout << "Thu 6";
        break;
    default:
        cout << "Thu 7";
        break;
    }
        
}

int main()
{
    int n, x;
    cout << "Nhap vao ngay hien tai (Quy uoc CN:0 T2:1 T3:2 T4:3 T5:4 T6:5 T7:6): ";
    cin >> n;
    cout << "Nhap vao so ngay muon cong vo:";
    cin >> x;

    cout << "Ngay hien tai sau khi da cong vo:";
    TinhNgay(n, x);

    cin.get();
    cin.ignore();
    return 0;
}