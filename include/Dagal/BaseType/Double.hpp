#ifndef __DOUBLE_HPP__
#define __DOUBLE_HPP__

namespace Dagal
{
	class Double
	{
	private:
		double mVal;
	public:
		Double();
		Double(const Double& val);
		Double(const double val);

		Double& operator=(const Double& val);
		Double& operator=(const double val);

		Double& operator+=(const Double& val);
		Double& operator-=(const Double& val);
		Double& operator*=(const Double& val);
		Double& operator/=(const Double& val);

		Double operator+(const Double& val);
		Double operator-(const Double& val);
		Double operator*(const Double& val);
		Double operator/(const Double& val);

		bool operator==(const double val);

		operator double();
	};
}

#endif //__DOUBLE_HPP__

