#include<iostream>
#include <string>
using namespace std;
class Ball
{
private:
	string m_color;
	double m_radius;
public:
	Ball()
	{
		m_color = "red";
		m_radius = 20.0;
	}
	Ball(string color)
	{
		m_color = color;
		m_radius = 20.0;
	}
	Ball(double radius)
	{
		m_color = "red";
		m_radius = radius;
	}
	Ball(string color, double radius)
	{
		m_color = color;
		m_radius = radius;
	}

	void print()
	{
		cout << "color: " << m_color << ", radius: " << m_radius << '\n';
	}
};

int main()
{
	Ball def;
	def.print();

	Ball black("black");
	black.print();

	Ball thirty(30.0);
	thirty.print();

	Ball blackThirty("black", 30.0);
	blackThirty.print();

	return 0;
}