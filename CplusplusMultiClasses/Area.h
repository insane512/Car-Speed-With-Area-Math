#include <iostream>
using namespace std;

class Area
{
public:
	Area();
	int getArea();
	void setArea(int length,int width,int hight);
	~Area();

private:

	int area;
	int length;
	int hight;
	int width;
};

Area::Area()
{
	cout << "The Area Object Is Created!" << endl;
}

inline int Area::getArea()
{
	return area;
}

inline void Area::setArea(int length, int width, int hight)
{
	area = length * width * hight;
	cout << "The Area Is: " << area << endl;
}

Area::~Area()
{
	cout << "The Area Object Is Destroyed!" << endl;
}
