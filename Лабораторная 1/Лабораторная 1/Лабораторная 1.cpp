#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class Fraction {

protected:
    long first;
    unsigned short second;

public:
    Fraction() {
        first = 0;
        second = 0;
    }

    void init(long f, unsigned short s) {
        first = f;
        second = s;
    }

    void read() {
        cout << "\nВведите целую часть: "; cin >> first;
        cout << "Введите дробную часть: "; cin >> second;
    }

   


    static void Add(Fraction a, Fraction b) {
        cout << "\nСумма: " << a.first + b.first << "." << a.second + b.second << endl;
    }

    static void Sub(Fraction a, Fraction b) {
        cout << "Разность: " << a.first - b.first << "." << a.second - b.second << endl;
    }

    static void Mul(Fraction a, Fraction b) {
        cout << "Умножение: " << a.first * b.first << "." << a.second * b.second << endl;
    }

    static void Equal(Fraction a, Fraction b) {
        if (a.first == b.first && a.second == b.second)
        {
            cout << "Числа равны" << endl;
        }
        else {
            if ((a.first - b.first) > 0) {
                cout << "Число 1 > Числа 2\n\n";
            }
            else {
                cout << "Число 1 < Числа 2\n\n";
            }
        }
    };
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Fraction N, M, A;
    N.read();
    M.read();
    A.Add(N, M);
    A.Sub(N, M);
    A.Mul(N, M);
    A.Equal(N, M);
    system("pause");
    return 0;
}