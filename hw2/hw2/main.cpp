//
//  main.cpp
//  hw2
//
//  Created by lior bomwurzel on 4/24/15.
//  Copyright (c) 2015 lior bomwurzel. All rights reserved.
//

#include <iostream>
#include "DayCalendar_t.h"
#include "Meeting_t.h"
#include <exception>
using namespace std;

int main(int argc, const char * argv[]) {
    Meeting_t<float> *m1=new Meeting_t<float>(1.0,2.6,"hello");
    
    Meeting_t<float> *m2=new Meeting_t<float>(1.5,2.5,"hello");
    try {
        m1->debuf(*m2);
    } catch (char * s) {
        cout<<s;
    }
    /*  DayCalendar_t<float> *day=new  DayCalendar_t<float>();
       std::vector<Meeting_t<float>>::iterator it = day->first.begin() ;
    day->first.insert(day->first.begin(),*m1);*/
     //float a=m1->getStart();
  //  std::cout << "Hello, World!\n "<<*m1;
    //day->first.insert(day->first.begin(), *m1);
    return 0;
}
