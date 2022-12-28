## Define a class
```cpp
class DateClass
{
private:
    int m_year {};
    int m_month {};
    int m_day {};
public:
	// default constructor
	DateClass() = default;
	DateClass(int year, int month, int day):
		m_year{year},
		m_month{month},
		m_day{day}
	{}
	void print() // defines a member function named print()
	{
	        std::cout << m_year << '/' << m_month << '/' << m_day;
	}
};
```