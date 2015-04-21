// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <exception>
#include <iostream>

#include "DayCalendar_t.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Meeting_t<double> * m1 = new Meeting_t<double>(1.3, 1.9, "hello");
	Meeting_t<float> * m2 = new Meeting_t<float>(1.3,1.9 , "hello");
	int i = 0;
	cout << "hello "<<*m1;
	//DayCalendar_t *vec = new DayCalendar_t();
	//vec->first.insert(vec->first.begin(), (BaseMeet*)m1);
	//std::vector<Meeting_t<float>> first;
	//first.insert(first.begin(), *m1);
	//	vec->first.insert(vec->first.begin(), *m1);
	//	vec->first.insert(vec->first.begin(), *m2);
	//	Meeting_t<float> * m3 = &vec->first.at(0);
	try{
		//m3->debuf(vec->first.at(1));
	//	m1->debuf(*m2);
	}
		catch (char* s)
	{ 
		cout << s;
	}
	cin >> i;
	return 0;
}

