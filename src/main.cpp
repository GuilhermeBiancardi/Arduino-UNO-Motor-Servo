#include <Arduino.h>
#include <Servo.h>

#define pinOrange 6

Servo servomotor;

void setup() {
    Serial.begin(9600);
    servomotor.attach(pinOrange);
    // Inicia o Servo Motor na posição 0
    servomotor.write(0);
}

void loop() {

    int servo = 0;
    
    // Simulo a leitura de um potenciometro, random gerará um número de 0 a 1023
    int potenciometro = random(0, 1024);

    // Transforma a escala 0 a 1023 em 0 a 179, utilizada pelo Servo Motor
    servo = map(potenciometro, 0, 1023, 0, 179);

    servomotor.write(servo);

    delay(500);

}