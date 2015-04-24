//
//  Meeting_t.cpp
//  hw2
//
//  Created by lior bomwurzel on 4/24/15.
//  Copyright (c) 2015 lior bomwurzel. All rights reserved.
//

#include "Meeting_t.h"
#include <iostream>

template class Meeting_t < int > ;
template class Meeting_t < float >;

template <typename T>
void Meeting_t<T>::debuf(const Meeting_t<T>& p_meeting){
    if (*this == p_meeting)
        throw "not ok";
}


//return true if meeting are overlaping
template <typename T>
bool Meeting_t<T>::operator==(const Meeting_t<T>& p_meeting) const{
    //s1;f1;s2;f2
    if (m_endHour<=p_meeting.m_StartHour )
        return false;
    //s2;f2;s1;f1
    if (p_meeting.m_endHour <= m_StartHour)
        return false;
    //else there is an overlap
    return true;
}


template <typename T>
std::ostream& operator<<(std::ostream& os, const Meeting_t<T>& obj)
{
    os << "hello";
    /**	os << "Name:" << obj.getName();
     << "Address: " << obj.getStart();
     << "Phone: " << obj.getEnd();
     << "topic:" << obj.getTopic(); */
    return os;
}


template <typename T>
std::string Meeting_t<T>::getTopic(){ return m_topic; }

template <typename T>
T Meeting_t<T>::getStart(){
    return m_StartHour;
}

template <typename T>
T Meeting_t<T>::getEnd(){
    return m_endHour;
}