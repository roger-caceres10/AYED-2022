/* Recursividad
   Factorial

   Fact:N-->N/Fact(x) ={ x* Fact(x-1)   si x>1
                       { 1              e.o.c 

Fact (4) == 4*3*2*1 = 24

*/

#include<cassert>

unsigned Fact(unsigned);

int main(){

    assert (Fact(0) == 1);
    assert (Fact(5) == 120);
    assert (Fact(10) == 3628800);
    assert (Fact(1) == 1);
    assert (Fact(12) == 479001600);
    assert (Fact(-3) == 1);

}

unsigned Fact(unsigned x){ return (x>1) ? x*Fact(x-1):
                                    1; 
}

/* se resuleve asi:
  Fact(3)=
     3*Fact(2)=           //Tiene una gran complejidad a nivel de operaciones ya que hay varias invocaciones, todo el tiempo llaman a otras funciones y demas
       3*(2*Fact(1))=
         3*(2*1)=
           3*(2)=
              6
*/