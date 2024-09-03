#include <iostream>
using namespace std;

struct point {
	double  m_x;
	double  m_y;
	point(double  x, double  y) {
		m_x = x;
		m_y = y;  // ÈÑÏĞÀÂËÅÍÈÅ 1 y = y
	}
}; // ÈÑÏĞÀÂËÅÍÈÅ 3 ;


void print_point(const point& point_object)
{
	std::cout << "x:" << point_object.m_x << ", y: " << point_object.m_y << std::endl;
}

int main()
{
	int i = 0;
	for (i = 0; i < 5; i++) // ÈÑÏĞÀÂËÅÍÈÅ 2  ;
	{
		point my_point(i, 2*i);
		print_point(my_point);

	}
	return 0;
}

void print_point1(const point& point_object) // ÈÑÏĞÀÂËÅÍÈÅ 4 print_point -> print_point1
{
	std::cout << "x:" << point_object.m_x << ", y: " << point_object.m_y << std::endl;
}
