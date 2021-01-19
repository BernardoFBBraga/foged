#ifndef VECTOR_3D
#define VECTOR_3D

#include <iostream>
#include <cmath>

struct Vector3D
{
    float x, y, z;

    // construtor default permite instanciar sem inicializar
    Vector3D() = default;

    // construtor
    Vector3D(float a, float b, float c)
    {
        x = a;
        y = b;
        z = c;
    }

    // float & no retorno indica que retorna valor por referência
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

    Vector3D &operator+=(const Vector3D &v)
    {
        x += v.x;
        y += v.y;
        z += v.z;
        return (*this);
    }

    Vector3D &operator-=(const Vector3D &v)
    {
        x -= v.x;
        y -= v.y;
        z -= v.z;
        return (*this);
    }
};

std::ostream &operator<<(std::ostream &os, const Vector3D &v)
{
    return os << "[" << v.x << "," << v.y << "," << v.z << "]";
}

inline Vector3D operator*(const Vector3D &v, float s)
{
    return (Vector3D(v.x * s, v.y * s, v.z * s));
}

inline Vector3D operator/(const Vector3D &v, float s)
{
    s = 1.0F / s;
    return (Vector3D(v.x * s, v.y * s, v.z * s));
}

// para negativar um vetor
inline Vector3D operator-(const Vector3D &v)
{
    return (Vector3D(-v.x, -v.y, -v.z));
}

inline Vector3D operator+(const Vector3D &a, const Vector3D &b)
{
    return (Vector3D(a.x + b.x, a.y + b.y, a.z + b.z));
}

inline Vector3D operator-(const Vector3D &a, const Vector3D &b)
{
    return (Vector3D(a.x - b.x, a.y - b.y, a.z - b.z));
}

inline float Magnitude(const Vector3D &v)
{
    return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}
#endif