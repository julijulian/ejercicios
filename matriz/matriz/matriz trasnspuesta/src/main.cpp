#include <Arduino.h>
#include <DataCapture.h>


void setup() {
    Serial.begin (115200);
  Serial.println();
  int numeros[3][3];
  
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
       
 numeros [+i][+j]=DataCapture::captureInteger("ingrese numero ");
   
    }
  }
   Serial.print("matriz original ");
   Serial.println();
   for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
    Serial.print  (numeros [i][j])  ;
      
    }
    Serial.println ();
   }
   Serial.print("matriz trasnpuesta ");
   Serial.println();
   for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
    Serial.print  (numeros [j][i])  ;
      
    }
    Serial.println ();
   }
}

void loop() {
 
}


