#include <iostream>
#include "Triangle.h"
#include "Exception.h"

int main()
{
    unsigned int A, B;
    cout << "Enter A";
    cin >> A;
    cout << "Enter B";
    cin >> B;

    Triangle tr(A, B);
    Angles ang;
    try { ang = tr.ConversionNoEx(); }
    catch (...) { cerr << "invalid_argument" << endl; }

    cout << ang.a << ang.b;

    try { Angles ang = tr.ConversionThrow(); }
    catch (...) { cerr << "invalid_argument" << endl; }

    try { Angles ang = tr.ConversionSpecification(); }
    catch (invalid_argument& e) { cerr << e.what() << endl; }

    try { Angles ang = tr.ConversionEmptyClass(); }
    catch (ExeptionEmpty) { cerr << "invalid_argument" << endl; }

    try { Angles ang = tr.ConversionMyException(); }
    catch (MyException& e) { cerr << e.message() << endl; }

    try { Angles ang = tr.ConversionMyExceptionHier(); }
    catch (MyExceptionHier& e) { cerr << e.what() << " " << e.arg() << endl; }
}