#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora{
    
        string nombre_E;
        string sistema_O;
        string procesador_N;
        int ram;
    public:
        Computadora();
        Computadora(const string &nombre_E,
                  const string &sistema_O,
                  const string &procesador_N,
                  int ram);

        void setNombre_E(const string &v);
        string getNombre_E();
        void setSistema_O(const string &v);
        string getSistema_O();
        void setProcesador_N(const string &v);
        string getProcesador_N();
        void setRam(int v);
        int getRam();

        friend ostream& operator<<(ostream &out, const Computadora &c){
            
            out << left;
            out << setw(20) << c.nombre_E;
            out << setw(20) <<c.sistema_O;
            out << setw(20) << c.procesador_N;
            out << right;
            out << setw(0) << c.ram << "GB";
            out <<endl;
            return out;
        }

        friend istream& operator>>(istream &in, Computadora &c){
      
        cout << "Nombre del equipo: ";
        getline(cin, c.nombre_E);

        cout << "Sistema operativo: ";
        getline(cin, c.sistema_O);

        cout << "Procesador: ";
        getline(cin, c.procesador_N);

        cout << "Ram: ";
        cin >> c.ram;
        
        return in;
        }

        bool operator==(const Computadora& c)
    {
        return nombre_E == c.nombre_E;
    }
    bool operator==(const Computadora& c) const
    {
        return nombre_E == c.nombre_E;
    }


    };

#endif