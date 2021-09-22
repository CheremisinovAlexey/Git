#include <iostream>
#include <fstream>
#include <Windows.h>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian" );
    SetConsoleCP(1251); //нужна библиотека Windows.h
    SetConsoleOutputCP(1251);
    ifstream a;
    ofstream l;
    int q;
    while (q != 1 & q != 2)
    {
        cout << "Провести опрос или выдать сохраненные результаты? " << endl;
        cin >> q;
        if (q == 1)
        {
            string e;
            char m[100];
            string n;
            string k;
            ifstream j;
            j.open("opros.txt");
            l.open("output.txt", std::ios::app);
            j.getline(m, 100);
            cout << m << endl;
            getline(cin, n);
            getline(cin, e);
            l << n << endl;

            std::string line;
            std::ifstream in("output.txt");
            in.close();
        }
        else if (q == 2)
        {
            char line[100];
            std::ifstream in("output.txt");
            if (in.is_open())
            {
                while (in.getline(line, 100))
                {
                    std::cout << line << std::endl;
                }
            }
            in.close();
        }
        else
        {
            cout << "Пожалуйста, введите в ответе цифру 1 или 2" << endl;
        }
    }
}
