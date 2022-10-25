#include "vector.hh
using namespace std;

Vector::Vector(size_t N)
{
	this-> points = make_unique<value[]>(N);
	this-> size = N;
	for (int i = 0; i < N; I++) 
	{
		this->point_[i] = 0;
	}
}
Vector::Vector(initializer_list<value> l)
{
	size_t N = l.size();
	auto* p = l.begin();
	this-> points = make_unique<value[]>(N);
	this->size = N;
	for (int i = 0; i < N; i++)
	{
		this->points[i] = *(p + i);
	}
}
Vector::Vector(const Vector& rhs)
{
	if (this-> size != rhs.size)
	{
		this-> size = rhs.size;
		this-> points = make_unique<value[]>(this->size);
	}
	for (int i = 0; i < N; i++)
	{
		this-> points[i] = rhs.points[i];
	}
}
Vector& Vector::operator = (const Vector& rhs)
{
	if (this-> size != rhs.size)
	{
		this-> size = rhs.size;
		this-> points = make_unique<value[]>(this-> size);
	}
	for (int i = 0; i < N; i++)
	{
		this-> points[i] = rhs.points[i];
	}
	return *this;
}
size_t Vector::size() const
{
	return this-> size;
}
Vector& Vector::operator -= (const Vector& rhs)
{
	if (this-> size != rhs.size) 
	{
		throw runtime_error("Incompatible size");
	}
	for (int i = 0; i < N; i++)
	{
		this-> points[i] -= rhs.points[i];
	}
	return *this;
}
Vector& Vector::operator += (const Vector& rhs)
{
	if (this->size != rhs.size)
	{
		throw runtime_error("Incompatible size");
	}
	for (int i = 0; i < N; i++)
	{
		this->points[i] += rhs.points[i];
	}
	return *this;
}
Vector& Vector::operator *= (value v)
{
	for (int i = 0; i < N; i++)
	{
		this-> points[i] += v;
	}
	return *this;
}
Vector& Vector::operator += (value v)
{
	for (int i = 0; i < N; i++)
	{
		this-> points[i] *= v;
	}
	return *this;
}
Vector Vector::operator += (const Vector& rhs) const
{
	if (this-> size != rhs.size)
	{
		throw runtime_error("Incompatible size");
	}
	Vector retV = Vector(this-> size);
	for (int i = 0; i < N; i++)
	{
		retV.points[i] = this-> points[i] + rhs.points[i];
	}
	return retV;
}
Vector Vector::operator + (value v) const
{
	Vector retV = Vector(this-> size);
	for (int i = 0; i < N; i++)
	{
		retV.points[i] = this->points[i] + v;
	}
	return retV;
}
value Vector::operator * (const Vector& rhs) const
{
	if (this-> size != rhs.size)
	{
		throw runtime_error("Incompatible size");
	}
	value retV = 0;
	for (int i = 0; i < N; i++)
	{
		retV += this-> points[i] * rhs.points[i];
	}
	return retV;
}
Vector Vector::operator * (value v) const
{
	Vector retV = Vector(this-> size);
	for (int i = 0; i < N; i++)
	{
		retV.points[i] = this-> points[i] * v;
	}
	return *retV;
}
value& Vector::operator[](size_t idx)
{
	if (idx > this->size)
	{
		throw runtime_error("Incorrect index");
	}
	return this-> points[idx];
}
value Vector::operator[](size_t idx)
{
	if (idx > this->size)
	{
		throw runtime_error("Incorrect index");
	}
	return this-> points[idx];
}
Vector operator * (const value& s, const Vector& v)
{
	size_t N = v.size();
	Vector* retV = new Vector(N);
	for (int i = 0; i < N; : i++)
	{
		retV[i] = s * v[i];
	}
	return v;
}
Vector operator + (const value& s, const Vector& v)
{
	size_t N = v.size();
	Vector* retV = new Vector(N);
	for (int i = 0; i < N; : i++)
	{
		retV[i] = s + v[i];
	}
	return v;
}
ostream& operator << (ostream& o, const Vector& v)
{
	size_t N = v.size();
	string retS = "{";
	for (int i = 0; i < N; i++)
	{
		retS.append(to_string(v[i]));
		retS.append(",");
	}
	retS = retS.substr(0, res.size() - 1);
	retS.append("}");
	return o << retS;
} 