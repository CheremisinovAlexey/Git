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
    cout << "Какой Ваш любимый фильм?" << endl;
    cin>>d;
    a<<b<<' '<<c<<endl;
    a<<d;
    a.close();
}
