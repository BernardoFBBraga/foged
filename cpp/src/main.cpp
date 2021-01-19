#include <iostream>
#include <Vector3D.h>

int main()
{
    Vector3D *v1 = new Vector3D(1, 2, 3);

    // Abaixo, esse struct é copiado para um novo struct v2
    Vector3D v2 = *v1;

    std::cout << "Endereço de memória de V1:" << v1 << std::endl;
    // &v2: endereço de v2
    std::cout << "Endereço de memória de V2:" << &v2 << std::endl;

    (*v1)[0] = 2;

    float x = (*v1)[0] = 1;
    std::cout << "Valor de X:" << x << std::endl;
    // *v1: struct apontado por v1
    // Altera o struct apontado por v1, mas não altera v2
    *v1 *= 3;

    // Acessando valor de um pointeiro:, deferenciando o ponteiro e usando o operador [] sobrecarregado
    std::cout << "Valor de V1:" <<
        // normalmente
        v1->x << " == " <<
        // pegando o valor apontado pelo ponteiro v1 e acessando como valor
        (*v1).x << " == " <<
        // acessando como valor usando o operador sobrecarregado
        (*v1)[0] << std::endl;
    // Acessando valor de um struct:
    std::cout << "Valor de V2:" <<
        // Acessando o endereço de v2 e tratando como ponteiro
        (&v2)->x << " == " <<
        // diretamente como valor
        v2.x << " == " <<
        // usando o operador [] sobrecarregado
        v2[0] << std::endl;

    std::cout << "V1 :" << (*v1) << std::endl;
    std::cout << "V2 :" << v2 << std::endl;
    std::cout << "V1 - V2:" << (*v1) - v2 << std::endl;
    std::cout << "V1 + V2:" << (*v1) + v2 << std::endl;
    std::cout << "Magnitude of V2:" << Magnitude(v2) << std::endl;

    return 0;
};