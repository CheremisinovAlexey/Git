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
    cout << "¬ведите ваше им€ и фамилию: " << endl;
    cin >> b >> c;
    cout << " акую книгу вы можете посоветовать, за какуб партию будете голосовать?" << endl;
    cin>>d;
    a<<b<<' '<<c<<endl;
    a<<d;
    a.close();
}
