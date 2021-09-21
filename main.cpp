#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian" );
    ifstream a;
    ofstream l;
    int q;
    while (q != 1 & q != 2)
    {
    cout << "Провести опрос или выдать сохраненные результаты?" << endl;
    cin >> q;
    if (q == 1)
    {
        char m[100];
        char n[100];
        ifstream j;
        j.open("opros.txt");
        l.open("output.txt");
        j.getline(m, 100);
        cout << m;
        cin >> n;
        l << n << endl;
    }
    else if (q == 2)
    {
        char b[100];
        a.open("output.txt");
        a.getline(b, 100);
        cout << b << endl;
    }
    else
    {
        cout << "Пожалуйста, введите в ответе цифру 1 или 2" << endl;
    }
    }


}
