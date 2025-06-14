#include <PCA9538.h>
#include <Wire.h>

// I2C address of PCA9538
#define PCA9538_ADDR 0x71

#define SCL 16      // Define SCL and SDA  pins of MCU
#define SDA 17

#define PCA9538_RST 2    

/**        
 * GPIO Number 1-8    
 * 
 * 
 */

#define OUTPUT1 1
#define OUTPUT2 2
#define OUTPUT3 3
#define OUTPUT4 4
#define INPUT1  5
#define INPUT2  6
#define INPUT3  7
#define INPUT4  8

PCA9538 io(PCA9538_ADDR);

void setup() {

  pinMode(PCA9538_RST, OUTPUT);

  digitalWrite(PCA9538_RST, HIGH);  // enable PCA9538 

  wire.begin(SDA,SCL);
  
  io.pinMode(OUTPUT1, OUTPUT);
  io.pinMode(OUTPUT2, OUTPUT);
  io.pinMode(OUTPUT3, OUTPUT);
  io.pinMode(OUTPUT4, OUTPUT);
  
  io.pinMode(INPUT1, INPUT);
  io.pinMode(INPUT2, INPUT);
  io.pinMode(INPUT3, INPUT);
  io.pinMode(INPUT4, INPUT);

}

void loop() {
  io.digitalWrite(OUTPUT1, HIGH);
  delay(100);
  io.digitalWrite(OUTPUT2, HIGH);
  delay(100);
  io.digitalWrite(OUTPUT3, HIGH);
  delay(100);
  io.digitalWrite(OUTPUT4, HIGH);
  delay(100);
  io.digitalWrite(OUTPUT1, LOW);io.digitalWrite(OUTPUT2, LOW);io.digitalWrite(OUTPUT3, LOW);io.digitalWrite(OUTPUT4, LOW);
  
  io.digitalRead(INPUT1);
  io.digitalRead(INPUT2);
  io.digitalRead(INPUT3);
  io.digitalRead(INPUT4);
  delay(1000);
}
