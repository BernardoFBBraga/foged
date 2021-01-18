#include <iostream>
#include <Vector3D.h>

int main()
{
    Vector3D* v = new Vector3D(1,2,3);
    // *v: struct apontado por v 
    // abaixo, esse struct é copiado para um novo struct t
    Vector3D t = *v;

    // Altera o struct apontado por v, mas não altera t
    *v *= 3;

    // prova que os valores são diferentes
    std::cout << v->x << std::endl;
    std::cout << t.x << std::endl;

    // prova que os endereços são diferentes
    // &t: endereço de t
    std::cout << &t << std::endl;
    std::cout << v << std::endl;

    // acessando valor pelo operador [] sobrecarregado
    std::cout << (*v)[0] << std::endl;
    std::cout << t[0] << std::endl;
    return 0;
};