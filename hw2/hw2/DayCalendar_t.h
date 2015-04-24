#include "Meeting_t.h"
#include <vector>


template <class T>
class DayCalendar_t{
public:
    DayCalendar_t(){
        it=vec.begin();
    }
    void insert (const Meeting_t<T>* meet){
        
        vec.insert(0,meet);
    }
//    d::ostream& operator<<(std::ostream& os, const Meeting_t<T>& obj);
private:
    std::vector<Meeting_t<T>*> vec;
    typename std::vector<Meeting_t<T>*>::iterator it ;
};



//template <typename T>
//std::ostream& operator<<(std::ostream& os, const DayCalendar_t<T>& obj)
//{
//    
//    for( std::<Meeting_t<T>*>::const_iterator i = obj->vec.begin(); i != path.end(); ++i)
//        s   td::cout << *i << ' ';
//}