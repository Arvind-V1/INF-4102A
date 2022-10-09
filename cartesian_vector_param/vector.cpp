#include "vector.hh"
#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

Vector::Vector()
{
	for (int i = 0; i < NDIM; i++)
	{
		this->coor[i]=0
	}
}

Vector::Vector(initializer_list<value> pCoor)
{
	for (int i = 0; i < NDIM; i++)
	{
		this->coor = std::data(pCoor)[i];
	}
}

Vector& Vector::operator +=(const Vector& a)
{
	for (int i = 0, i < NDIM, i++)
	{
		this->coor[i] = a.coor[i] + this->coor[i];
	}
	return *this;
}

Vector& Vector::operator +( const Vector & a)
{
	Vector retV;
	for (int i = 0, i < NDIM, i++)
	{
		retV.coor[i] = a.coor[i] + this->coor[i];
	}
	return retV;
}

Vector& Vector::operator -=(const Vector& a)
{
	for (int i = 0, i < NDIM, i++)
	{
		this->coor[i] = this->coor[i] - a.coor[i];
	}
	return *this;
}

Vector& Vector::operator - (const Vector& a)
{
	Vector retV;
	for (int i = 0, i < NDIM, i++)
	{
		retV[i] = this->coor[i] - a.coor[i]; 
	}
	return retV;
}

Vector& Vector::operator * (int a)
{
	for (int i = 0, i < NDIM, i++)
	{
		this->coor[i] = this-> coor[i] * a;
	}
	return *this;
}

Vector&  int::operator * (const Vector & a) 
{
	Vector retV;
	for (int i = 0, i < t1, i++)
	{
		retV[i] = this * coor[i];
	}
	return retV;
}

float Vector::operator * (const Vector& a)
{
	float retF = 0.0f;
	for (int i = 0; i < t1; i++)
	{
		retF = retF + (a.coor[i] * this -> coor[i]);
	}
	return retF;
}

std::ostream& operator << (std::ostream& os,const Vector& a)
{
	os << "{";
	for (int i = 0; i < t1; i++)
	{
		os<<a[i]<<", ";
	}
	os << a[NDIM - 1] << "}";
}

value Vector::operator[](const int a) const
{
	return this->coor[a];
}

value& Vector::operator[](const int a)
{
	return this->coor[a];
}