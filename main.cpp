#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian" );
    ofstream a;
    string b;
    string c;
    string d;
    a.open("output.txt");
    cout << "Введите ваше имя и фамилию: " << endl;
    cin >> b >> c;
    cout << "Какую книгу вы можете посоветовать?" << endl;
    cin>>d;
    a<<b<<' '<<c<<endl;
    a<<d;
    a.close();

    char m[100];
    char n[100];
    ifstream j;
    j.open("opros.txt");
    j.getline(m, 100);
    cout << m;
    cin >>n;
}
