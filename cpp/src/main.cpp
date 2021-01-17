#include <iostream>
#include <Vector3D.h>

int main()
{
    Vector3D* v = new Vector3D(1,2,3);
    std::cout << v->x;
    return 0;
};