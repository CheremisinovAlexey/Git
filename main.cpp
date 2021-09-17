#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian" );
    ifstream a;
    char b[100];
    char c[100];
    a.open("input.txt");
    a.getline(b, 100);
    cout<<b<<endl;
    cin>>c;

    char m[100];
    char n[100];
    ifstream j;
    j.open("opros.txt");
    j.getline(m, 100);
    cout << m;
    cin >>n;
}
