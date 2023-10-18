#include <Arduino.h>
#include <DataCapture.h>
#include <string.h>
using namespace DataCapture;
void setup() {
    Serial.begin (115200);
  Serial.println();
  int unidades,decenas,centenas,millar;
  int numero =DataCapture::captureInteger("ingrese numero:");
   unidades=numero%10; numero/=10;
    decenas=numero%10; numero/=10;
     centenas=numero%10; numero/=10;
      millar=numero%10; numero/=10;
  switch (millar){
    case 1:numero<'M'; break;
    case 2:numero<'M';break;
    case 3:numero<'MMM'; break;

  }
  switch (centenas) {
    case 1:numero <<'C'; break;
    case 2:numero <<'CC'; break;
    case 3:numero <<'CCC'; break;
    case 4:numero <<'CD'; break;
    case 5:numero <<'D'; break;
    case 6:numero <<'DC'; break;
    case 7:numero <<'DCC'; break;
    case 8:numero <<'DCCC'; break;
    case 9:numero <<'CM'; break;

  }
   
   switch (decenas) {
    case 1:numero <='X'; break;
    case 2:numero <<'XX'; break;
    case 3:numero <<'XXX'; break;
    case 4:numero <<'XL'; break;
    case 5:numero <<'L'; break;
    case 6:numero <<'LX'; break;
    case 7:numero <<'LXX'; break;
    case 8:numero <<'LXXX'; break;
    case 9:numero <<'XC'; break;

  } 

  switch (unidades) {
    case 1:numero <<'I'; break;
    case 2:numero <<'II'; break;
    case 3:numero <<'III'; break;
    case 4:numero <<'IV'; break;
    case 5:numero <<'V'; break;
    case 6:numero <<'VI'; break;
    case 7:numero <<'VII'; break;
    case 8:numero <<'VIII'; break;
    case 9:numero <<'IX'; break;}
   

}

 void loop () {
  
 } 


