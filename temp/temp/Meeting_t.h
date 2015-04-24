//
//  Meeting_t.h
//  temp
//
//  Created by lior bomwurzel on 4/24/15.
//  Copyright (c) 2015 lior bomwurzel. All rights reserved.
//

#ifndef __temp__Meeting_t__
#define __temp__Meeting_t__
#include <string>
class Meeting_t
{
public:
    Meeting_t(float p_start, float p_end, std::string p_topic){
        m_start=p_start;
        m_end=p_end;
        m_topic=p_topic;
    };
    //~Meeting_t()
      bool operator==(const Meeting_t& meeting) const;
private:
    float m_start;
    float m_end;
    std::string m_topic;
};
#endif /* defined(__temp__Meeting_t__) */
