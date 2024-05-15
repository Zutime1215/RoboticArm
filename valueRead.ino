// void valueRead() {
//   String s = Serial.readString();
//   if(s[0]=='1') {
//     Serial.println("On....");
//     onoff = 1;
//   }
//   else if(s[0]=='0') {
//     Serial.println("Off....");
//     onoff = 0;
//   }
//   else {
//     String number = s.substring(1);
//     if (s[0] == 'm') {   
//       motor = number.toInt();
//       Serial.println("Motor = " + String(motor));
//     }
//     else if (s[0] == 'v') {
//       value = number.toInt();
//       Serial.println("Value = " + String(value));
//     }
//   }
// }
