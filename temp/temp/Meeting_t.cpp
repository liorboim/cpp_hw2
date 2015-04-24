//
//  Meeting_t.cpp
//  temp
//
//  Created by lior bomwurzel on 4/24/15.
//  Copyright (c) 2015 lior bomwurzel. All rights reserved.
//

#include "Meeting_t.h"
//return false if there is an overlap
bool Meeting_t::operator==(const Meeting_t& p_meeting) const{
    //s1;f1;s2;f2
    if (m_end<=p_meeting.m_start &&m_start<=p_meeting.m_start)
        return true;
    //s2;f2;s1;f1
    if (p_meeting.m_end <= m_start&& p_meeting.m_start<=m_start)
        return true;
    //else there is an overlap
    return false;
}
