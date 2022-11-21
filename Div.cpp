/* Desarrollar la funcion div

Div:NxN-{0} -> N / Div(dividendo, divisor) =  { 0                                           dividendo < divisor
                                              { 1 + Div(dividendo - divisor, divisor)       e.o.c

*/
#include<cassert>

unsigned division(unsigned,unsigned);

int main(){

    assert (division(16,8) == 2);
    assert (division(17,4) == 4);
    assert (division(3,6) == 0);
    assert (division(10,10) == 1);
}

unsigned division(unsigned a, unsigned b){ return  (a<b) ? 0: 
                                         1+division(a-b,b);
}

/*

Pila de invocaciones

Linea 11

main
---
test
main
--
div               Si depuramos esto vamos a ver que cuando ingresamos a div va a ver la condicion
test              si no cumple la primer condicion, va a saltar a la otra condicion y por lo tanto 
main              cambian las variables de div, ya que dentro de esa misma hay una resta
--                Por ejemplo: en la linea 14, va asaltar a saltar a la linea 19 donde esta la primer                 
test              condicion y como no cumple salta a siguiente linea y resuelve la resta, esto hace que  
main              cambien las variables dichas en el assert(se genera una pila de varias restas hasta llegar al ultimo)
                   , se convierten en nuevas variables y luego vuelve 
--                al test y por ultimo vuelve al main 
main


*/