#include <Servo.h>

#define servo 6
#define foto A0

#define ALTO 42 
#define JUMP 32                            

Servo servoMotor;

int valueFoto = 0; //Value of the fotoResistor

void setup() {
  Serial.begin(9600);
  servoMotor.attach(6);

  servoMotor.write(ALTO);
}   

void loop() {

  valueFoto = analogRead(foto);
  Serial.println(valueFoto);
  if(valueFoto < 500       ){
    servoMotor.write(JUMP);
    delay(200);
    servoMotor.write(ALTO);
  }
                                                                                                                                                                                  

}
