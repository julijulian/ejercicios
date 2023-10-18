#include <Arduino.h>
#include<DataCapture.h>

void setup() {
    Serial.begin (115200);
  Serial.println();
  String nombre;
int salario,salarioM,salariom,n_empleados=0,posM=0,posm=0,i;
float mayor=0,menor=9999999;
n_empleados=DataCapture::captureInteger("numero de empleados :  ");

for (int i=0;i<n_empleados;i++){
   nombre =DataCapture::captureString("digite su nombre:  ");
   salario =DataCapture::captureInteger("digite su salario:  ");
   Serial.println();
}
    Serial.println();
if (salario>mayor){
  salario=salarioM;
   posM = i;
  
}


Serial.print ("el salario mas alto es    ");
Serial.print (salarioM);

Serial.println ();
Serial.print ("el salario mas bajo es    ");
Serial.print(posm);

}




void loop() {
  
}
