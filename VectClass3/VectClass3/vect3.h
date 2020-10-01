#ifndef _VECTOR3_H_
#define _VECTOR3_H_

#include <math.h>

template <class T>
class vect3
{
public:
	T x, y, z = 0.0f;

	//Constructor
	vect3() :x(0.0f), y(0.0f), z(0.0f) {}
	vect3(const T _x, const T _y, const T _z) : x(_x), y(_y), z(_z) {}
	vect3(const vect3<T>& inVect) : x(inVect.x), y(inVect.y), z(inVect.z) {}
	//destructor
	~vect3() {}
    //operators
    vect3<T>& operator + (const vect3<T>& inVect)
    {
        vect3<T> temp;
        temp.x = this->x + inVect.x;
        temp.y = this->y + inVect.y;
        temp.z = this->z + inVect.z;
        return temp;
    }
    vect3<T>& operator - (const vect3<T>& inVect)
    {
        vect3<T> temp;
        temp.x = this->x - inVect.x;
        temp.y = this->y - inVect.y;
        temp.z = this->z - inVect.z;
        return temp;
    }
    vect3<T>& operator += (vect3<T>& inVect)
    {
        x = x + inVect.x;
        y = y + inVect.y;
        z = z + inVect.z;
        return *this;
    }
    vect3<T>& operator -= (vect3<T>& inVect)
    {
        x = x - inVect.x;
        y = y - inVect.y;
        z = z - inVect.z;
        return *this;
    }
    vect3<T>& operator = (const vect3<T>& inVect)
    {
        x = inVect.x;
        y = inVect.y;
        z = inVect.z;
        return *this;
    }
    bool operator == (const vect3<T>& inVect)
    {
        return (x == inVect.x && y == inVect.y && z == inVect.z);
    }

    //Methods
    void Normalize()
    {
        T absValue = (sqrt((x * x) + (y * y) + (z * z)));
        x = x / absValue;
        y = y / absValue;
        z = z / absValue;
    }

    void Zero()
    {
        x = y = z = 0.0f;
    }

    bool IsZero()const
    {
        return (x == 0 && y == 0 && z == 0);
    }

    T DistanceTo(const vect3<T>& vect)const
    {
        return sqrt(((x - vect.x) * (x - vect.x)) + ((y - vect.y) * (y - vect.y)) + ((z - vect.z) * (z - vect.z)));
    }

    //Print method
    void PrintVector()const
    {
        std::cout << x << "," << y << "," << z << std::endl;
    }



};





#endif // !_VECTOR3_H_
