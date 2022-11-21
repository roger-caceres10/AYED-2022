/*
  Optamos por utilizar el algoritmo de Euclides, por lo tanto, la funcion
  Mcd es una referencia de la funcion de Euclides

 Euclides: NxN -> N / Euclides(a, b) =    {   a                       si b == 0
                                            {   Euclides(b, a % b)      e.o.c.
 
 Mcd: NxN -> N / Mcd(a, b) = Euclides(a, b)

 */
#include<cassert>

unsigned int Euclides(unsigned int, unsigned int);
unsigned int MCD(unsigned int, unsigned int);

int main(){

    assert(MCD(0, 1) == 1);
    assert(MCD(1, 0) == 1);

    assert(MCD(50, 100) == 50);
    assert(MCD(100, 50) == 50);

    assert(MCD(45, 46) == 1);
    assert(MCD(46, 45) == 1);

    assert(MCD(3, 5) == 1);
    assert(MCD(5, 3) == 1);

    assert(MCD(10, 55) == 5);
    assert(MCD(55, 10) == 5);
}

unsigned int Euclides(unsigned int a, unsigned int b){
    return (b=0) ? a :
            Euclides(b,a%b);
}

unsigned int MCD(unsigned int a, unsigned int b){
    return Euclides(a,b);
}