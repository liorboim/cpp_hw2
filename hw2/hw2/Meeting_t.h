
#ifndef hw2_Meeting_h
#define hw2_Meeting_h

#include <string>
#include <iostream>

template <class T>
class Meeting_t{


public:
    Meeting_t( std::string p_topic){
        
        m_topic     = p_topic;
    };
    
    void initialize_meetinig(T p_start, T p_end);
    
    
    //build	~Meeting_t();
    bool operator==(const Meeting_t<T>& meeting) const;
    
    
    
    inline const std::string& getTopic() const{
        return m_topic;
    }
    
    inline T getStartTime() const{
        return m_StartTime;
    };
    
    inline T getEndTime() const{
        return m_endTime;
    };
    
   
protected:
    
    inline void setStartTime(T p_time){
        m_StartTime = p_time;
    }
    inline void setEndTime(T p_time){
        m_endTime = p_time;
    }
    
private:
    T m_StartTime;
    T m_endTime;
    std::string m_topic;
};


template <typename T>
void Meeting_t<T>::initialize_meetinig(T p_start, T p_end) {
    if (p_start > p_end){
        
        char e[100] = "Error: can't set meeting with - start time > end time";
        throw  e;
    }
    
    setStartTime(p_start);
    setEndTime(p_end);
}


template <typename T>
bool Meeting_t<T>::operator==(const Meeting_t<T>& p_meeting) const{
    
    if (this == &p_meeting){
        //the same object.
        return true;
    }
    
    
    if (    getEndTime() >= p_meeting.getStartTime() &&
            getStartTime() <= p_meeting.getStartTime()){
        return true;
    }
    
    
    if (    p_meeting.getEndTime()   >= getStartTime() &&
            p_meeting.getStartTime() <= getStartTime()){
        return true;
    }
    
    return false;
}


template <typename T>
std::ostream& operator<<(std::ostream& os, const Meeting_t<T>& obj)
{
    os  << "Meeting topic: "    << obj.getTopic()
        << ", Start hour: "    << obj.getStartTime()
        << ", End hour: "       << obj.getEndTime()
        << std::endl;
    
    return os;
}



#endif



