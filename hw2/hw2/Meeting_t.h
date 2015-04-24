
#ifndef hw2_Meeting_h
#define hw2_Meeting_h

#include <string>
#include <iostream>

template <class T>
class Meeting_t{


public:
    Meeting_t(T p_start, T p_end, std::string p_topic){
        m_endHour   = p_end;
        m_StartHour = p_start;
        m_topic     = p_topic;
    };
    
    
    //build	~Meeting_t();
    bool operator==(const Meeting_t<T>& meeting) const;
    
    friend std::ostream& operator<<(std::ostream& os, const Meeting_t<T>& obj);
    
    
    inline const std::string& getTopic() const{
        return m_topic;
    }
    
    inline T getStart() const{
        return m_StartHour;
    };
    
    inline T getEnd() const{
        return m_endHour;
    };
    
    
    
private:
    T m_StartHour;
    T m_endHour;
    std::string m_topic;
};



template <typename T>
bool Meeting_t<T>::operator==(const Meeting_t<T>& p_meeting) const{
    
    if (this == &p_meeting){
        //the same object.
        return true;
    }
    
    
    if (    getEnd() >= p_meeting.getStart() &&
            getStart() <= p_meeting.getStart()){
        return true;
    }
    
    
    if (    p_meeting.getEnd() >= getStart() &&
            p_meeting.getStart() <= getStart()){
        return true;
    }
    
    return false;
}


template <typename T>
std::ostream& operator<<(std::ostream& os, const Meeting_t<T>& obj)
{
    os << "Name:" << obj.getName()
     << "Address: " << obj.getStart()
     << "Phone: " << obj.getEnd()
     << "topic:" << obj.getTopic(); 
    return os;
}



#endif



