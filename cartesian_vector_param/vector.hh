#pragma once

#include <ostream>
#include <cmath>

#include "config.h"
using namespace std;
class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector();
    // possibly more
    Vector(std::initializer_list<int> pCoor);

// Public Member functions here
    Vector& operator +=(const Vector& a);
    // More to go
    Vector& operator + (const Vector& a);
    Vector& operator -=(const Vector& a);
    Vector& operator - (const Vector& a);
    Vector& operator * (value a);
    value   operator * (const Vector& a);

     value operator[](const int a) const;
     value& operator[](const int a);

    

private:
// Private Member functions here
    float norm()
    {
        value somme = 0;
        for (int i = 0; i < NDIM; i++) 
        {
            somme += coor[i] * coor[i];
        }
        return sqrt(somme);
    }
// Member variables are ALWAYS private, and they go here
    value coor [NDIM]= { };
};

// Nonmember function operators go here
ostream& operator << (ostream& os, Vector& t);
float operator* (const Vector& a);
