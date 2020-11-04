#include <iostream>
#include "arreglo.h"
#include "computadora.h"
using namespace std;

int main()
{
    Arreglo<Computadora> computadoras;

    Computadora C1("Computadora 01", "Linux", "Core i5-10400F", 8);
    Computadora C2("Computadora 02", "MacOs", "Core i7-2860QM", 6);
    Computadora C3("Computadora 03", "Windows", "Intel Xeon E-22xx", 12);

    computadoras << C1 << C2 << C3 << C1 << C1;
    Computadora C4("Computadora 01", "Linux", "Core i5-10400F", 8);

    cout<<"// buscar() una computadora existente"<<endl;
    Computadora *ptr = computadoras.buscar(C4);
    if (ptr != nullptr) {
        cout << *ptr << endl;
    }
    else
    {
        cout << "No existe" << endl;
    }

    Computadora C5("Computadora 04", "ChromeOs", "Core i5-7100F", 8);
    cout<<"// buscar() una computadora no existente"<<endl;
    Computadora *ptr2 = computadoras.buscar(C5);
    if (ptr2 != nullptr) {
        cout << *ptr2 << endl;
    }
    else
    {
        cout << "No existe" << endl;
    }
    cout << endl;

    cout<<"// buscar_todas() las computadoras"<<endl;
    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(C4);

    if (ptrs.size() > 0) {
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *c = ptrs[i];
            cout << *c << endl;
        }
    }
    else {
        cout << "No existen coincidencias" << endl;
    }

    system("PAUSE");
    return 0;
}