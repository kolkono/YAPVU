#pragma once
#include <iostream>
using namespace std;

class ExeptionEmpty { };

class MyException
{
private:
	string _msg;
public:
	MyException(const string& s) : _msg(s) {}
	const char* message() const { return _msg.c_str(); }
};

class MyExceptionHier : public invalid_argument
{
private:
	int _num;
public:
	MyExceptionHier(const string msg, int n) : invalid_argument(msg), _num(n) {}
	double arg() const { return _num; }
};



