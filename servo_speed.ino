void servo_speed(int motor, int value) { 
  int delay_time = 40; 
  int smoothness = 5; 
  int prev = prev_phase[motor]; 
 
  if (prev < value) { 
    for (int i=prev; i<value; i+=smoothness) { 
      pwm.setPWM(motor, 0, i); 
      delay(delay_time); 
    } 
  } else { 
    for (int i=prev; i>value; i-=smoothness) { 
      pwm.setPWM(motor, 0, i); 
      delay(delay_time); 
    } 
  } 
  prev_phase[motor] = value; 
}
