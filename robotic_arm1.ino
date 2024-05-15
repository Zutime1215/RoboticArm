#include <Wire.h> 
#include<Servo.h> 
#include <Adafruit_PWMServoDriver.h> 
 
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(); 
Servo claw; 
 
int prev_phase[] = {390, 150, 640, 150, 400}; 
char obj; 
 
void setup() { 
  Serial.begin(9600); 
  Serial.println("Link Start"); 
  pwm.begin(); 
  pwm.setPWMFreq(60); 
  claw.attach(3); 
 
  move(400, 140, 650, 140, 410); 
  delay(1000); 
  claw_open(); 
} 
 
void loop() { 
  // move(610, 340, 650, 140, 120); // Primate 
  // claw_close(); 
  // move(400, 140, 650, 140, 410); // Base 
 
  if (obj == 'A') { 
    move(400, 380, 650, 330, 410); 
  } else if (obj == 'B') { 
    move(290, 380, 650, 370, 410); 
    move(290, 420, 650, 370, 410); 
  } else if (obj == 'C') { 
    move(140, 380, 650, 300, 410); 
  } 
  claw_open(); 
  move(400, 140, 650, 140, 410); 
 
 
} 
 
void move(int a, int b, int c, int d, int e) { 
  servo_speed(0, a); 
  servo_speed(1, b); 
  servo_speed(2, c); 
  servo_speed(3, d); 
  servo_speed(4, e); 
} 
 
void claw_open() { 
  claw.write(20); 
} 
void claw_close() { 
  claw.write(60); 
} 
 
// Positions 
// Base Position: move(400, 140, 650, 140, 410); 
// Primate Position: move(610, 340, 650, 140, 120); 
// Position A: move(400, 380, 650, 330, 410); 
// Position B: move(290, 380, 650, 370, 410); move(290, 420, 650, 370, 410); 
// Position C: move(140, 380, 650, 300, 410);