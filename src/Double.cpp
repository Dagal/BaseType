#include <Dagal/BaseType/Double.hpp>

#include <cmath>

namespace Dagal
{

Double::Double() : mVal(0)
{
}

Double::Double(const Double& val)
{
	mVal = val.mVal;
}

Double::Double(const double val) : mVal(val)
{
}

Double& Double::operator=(const Double& val)
{
	mVal=val.mVal;
	return *this;
}

Double& Double::operator=(const double val)
{
	mVal=val;
	return *this;
}

Double& Double::operator+=(const Double& val)
{
	mVal += val.mVal;
	return *this;
}

Double& Double::operator-=(const Double& val)
{
	mVal -= val.mVal;
	return *this;
}

Double& Double::operator*=(const Double& val)
{
	mVal *= val.mVal;
	return *this;
}

Double& Double::operator/=(const Double& val)
{
	if (val.mVal == 0.0)
		mVal = NAN;
	else
		mVal /= val.mVal;
	return *this;
}

Double Double::operator+(const Double& val)
{
	Double retour = *this;
	retour += val;
	return retour;
}

Double Double::operator-(const Double& val)
{
	Double retour = *this;
	retour -= val;
	return retour;
}

Double Double::operator*(const Double& val)
{
	Double retour = *this;
	retour *= val;
	return retour;
}

Double Double::operator/(const Double& val)
{
	Double retour;
	if (val.mVal == 0.0)
		retour = NAN;
	else
	{
		retour = *this;
		retour /= val;
	}
	return retour;
}

bool Double::operator==(const double val)
{
	return (mVal == val);
}

Double::operator double()
{
	return mVal;
}

} // namespace Dagal
