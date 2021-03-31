#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>
#include "Computadora.h"

using namespace std;

class Laboratorio{

    //Metodos
public:
    //Constructor
    Laboratorio();

    //Comportamientos
    void agregarComputadora(const Computadora &comp);//Va a recibir una computadora como referencia constante
    void mostrar();

    friend Laboratorio & operator << (Laboratorio &l, const Computadora &c){

        l.agregarComputadora(c);//Llamamos a la funcion y mandamos una computadora
        return l;
    }

private:
    Computadora array[5];//Arreglo de nuestra clase computadora
    size_t cont;

};

#endif //LABORATORIO_H