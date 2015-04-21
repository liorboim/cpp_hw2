#include <string>
template <class T>
class Meeting_t 
{
public:
	Meeting_t(T p_start, T p_end, std::string p_topic){
		m_endHour = p_end;
		m_StartHour = p_start;
		m_topic = p_topic;
	};
//build	~Meeting_t();
	bool operator==(const Meeting_t<T>& meeting) const;
	void debuf(const Meeting_t<T>& p_meeting);
	std::string getTopic();
	T getStart();
	T getEnd();
private:
	T m_StartHour;
	T m_endHour;
	std::string m_topic;
};
template <typename T>
std::ostream& operator<<(std::ostream& os, const Meeting_t<T>& obj);

/**class BaseMeet 
{
	BaseMeet(){};
};
*/