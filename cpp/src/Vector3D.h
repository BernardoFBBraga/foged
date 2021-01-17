#ifndef VECTOR_3D
#define VECTOR_3D

#include <cmath>

struct Vector3D
{
    float x, y, z;

    Vector3D() = default;

    Vector3D(float a, float b, float c)
    {
        x = a;
        y = b;
        z = c;
    }

    float &operator[](int i)
    {
        return ((&x)[i]);
    }

    const float &operator[](int i) const
    {
        return ((&x)[i]);
    }

    Vector3D &operator*=(float s)
    {
        x *= s;
        y *= s;
        z *= s;
        return (*this);
    }

    Vector3D &operator/=(float s)
    {
        s = 1.0F / s;
        x *= s;
        y *= s;
        z *= s;
        return (*this);
    }
};

inline Vector3D operator * (const Vector3D& v, float s){
    return (Vector3D(v.x*s, v.y*s, v.z*s));
}

inline Vector3D operator / (const Vector3D& v, float s){
    s = 1.0F /s;
    return (Vector3D(v.x*s, v.y*s, v.z*s));
}

inline Vector3D operator - (const Vector3D& v){
    return (Vector3D(-v.x, -v.y, -v.z));
}

inline float Magnitude(const Vector3D& v){
    return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}
#endif