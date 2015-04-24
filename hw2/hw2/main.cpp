//
//  main.cpp
//  hw2
//
//  Created by lior bomwurzel on 4/24/15.
//  Copyright (c) 2015 lior bomwurzel. All rights reserved.
//

#include <iostream>
#include "DayCalendar_t.h"
#include <exception>


using namespace std;

int main(int argc, const char * argv[]) {
    Meeting_t<float> m1("hello1");
    
    Meeting_t<float> m2("hello1");
    
    try{
        m1.initialize_meetinig(2, 3);
        m2.initialize_meetinig(4, 2.4);
    }catch(char * e){
        cout << e;
    }
    
    
    cout << m1 << m2;
    
    if (m1 == m2){
        cout << "overlapping";
    }else{
        cout << "not overlapping";

    }
   
    /*  DayCalendar_t<float> *day=new  DayCalendar_t<float>();
       std::vector<Meeting_t<float>>::iterator it = day->first.begin() ;
    day->first.insert(day->first.begin(),*m1);*/
     //float a=m1->getStart();
  //  std::cout << "Hello, World!\n "<<*m1;
    //day->first.insert(day->first.begin(), *m1);
    return 0;
}


