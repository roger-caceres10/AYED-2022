//Nomnbre: Roger Caceres  Comision: k1253


#include <cassert>

#include <iostream>

#include <string>

#include <cstring>


 using namespace std::literals;

int main (){

    /*
    TIPO DE DATO: DOUBLE
    */
   //No es recomendable utilizar la comparacion mediante igualdad con tipo double

    assert(0.0 - 1.0 == -1.0);      //el resto de la izquierda es binario mientras que el de la derecha solo va con el de la derecha
    assert(5.0 == 1.5 + 3.5);       //Suma y comparacion
    assert(4.9 != 3.2 - 1.8);       //Diferencia y resta
    assert(170.1 <= 199.78);        //Menor o igual
    assert(13.5 >= 6.7);            //Mayor o igual
    assert(4.5 == 1.5 * 3.0 );      //comparacion y multiplicacion 
    assert(6.8 == 17 / 2.5);        //comparacion y division   
    assert(0.1 == 1.0 / 10.0);
    assert(0.0 == 0. and .0 == 0.0 and 0.0 == 0.0f and 0.0 == 0e1);  //f = float 
    assert(0.9 != 0.3 + 0.3 + 0.3);
    assert(1.0 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); 
    /*  Assertion failed (==). 1/10 (0.1) no puede ser respresentado con presicion en double ya que no puede ser representado en base 2 (da periodico) */
    
    

//ºººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººº

    /*
    TIPO DE DATO: INT
    */

    assert(0 == -1 + 1);          //Suma y comparacion
    assert(6 != 7 - 2);           //Diferencia y resta
    assert(1 >= -2);              //Menor o igual
    assert(-10 <= 9);             //Mayor o igual
    assert(9== 3 * 3 );           //comparacion y multiplicacion
    assert(-5 == 15 / -3 );       //comparacion y division        
    assert(1 == 11 % 2 );         //comparacion y resto 
  



//ººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººº

    /*
    TIPO DE DATO: unsigned
    */

    //u para unsigned

   assert(0u==0u);
   assert(0u==15u%3u);
   assert(5u==3u+2u);
   assert(9999999999 == 9999999998 + 1);
   assert(1400 <= 1500);
   assert(8000 >= 1000);


//ºººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººº

    /*
    TIPO DE DATO: BOOL
    */
   
    assert(true);                                 
    assert(false or true);                        
    assert(true and true);                   
    assert(not false);                       
    assert(false != true and true or false);
    assert(false != (5+5.0==10));                             
    assert(true == true);
    assert(true == (true and true) and false or true );


//ºººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººº

    /*
    TIPO DE DATO: CHAR
    */

    assert('A' != 'B');  
    assert('A' <= 'B');            // A=65 < B=66 en ASCII 
    assert('A'== 65);
    assert('B'== 'A' + 1);
    assert(131 == 'A' + 'B');      //Combinacion de tipos de datos
    assert(1 == 'B' % 'A');                     
    assert('8' != '1' + '7');      //Assertion failed (==); falla debido a que son tratados como CHAR ---> (8=56) != (1=49) + (7=55)  ; (49 + 55 = 104)
    assert( 1 == 'B' - 'A');
    assert( 'aa'!= 'A');
    assert('a'- 32 == 'A');
    

    //ººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººº

    /*
    TIPO DE DATO: STRING
    */
  
    assert( "A"s == "A"s );
    assert( 8 == "banfield"s.length());            
    assert( "bbb"s >= "bb"s);
    assert( "1" <= "2" );
    assert( "AA"s < "AB"s );
    assert( "hello"s == "hello"s );
    assert( "hello"  == "hello"  );   

    {
      {
        char s []= "chau";
        char t []= "chau"; //son secuencias de char y estan inicializadas con lo mismo, esta es una forma de hacer cadenas en C
        assert (s != t);

        assert(0==strcmp(s,t)); //No nos vamos a meter con cadenas de string
      }

      {
        std::string s {"hola"s};
        std::string t {"hola"s};
        assert (s == t);

        s = "chau";
        assert(s=="chau");
      }
    }
    

    std::cout << "esta bien";
    
}

