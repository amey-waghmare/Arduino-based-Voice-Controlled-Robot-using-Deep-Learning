
int m11=2;
int m12=3;
int m21=4;
int m22=5;
String voice="";
       

void setup()       
      {
      
       // Use L293D
       pinMode(m11,OUTPUT); // LeftMotor_1
       pinMode(m12,OUTPUT); // LeftMotor_2
       pinMode(m21,OUTPUT); // RightMotor_1
       pinMode(m22,OUTPUT); // RightMotor_2
       
       Serial.begin(9600);
       
       
      }

void loop()
   {  
       while(Serial.available()>0)
            {
               
               delay(50);
               char data = Serial.read();
               voice = voice + data;

               while(voice.length()>0)
                  {
                      if(voice == "forward")
                          {
                            Serial.println("Forward");
                            digitalWrite(m11,HIGH);
                            digitalWrite(m12,LOW);
                            digitalWrite(m21,HIGH);
                            digitalWrite(m22,LOW);
                            delay(1000);
                            voice=""; 
                          }

                      else if(voice == "backward")
                          {
                             Serial.println("Backward");
                             digitalWrite(m11,LOW);
                             digitalWrite(m12,HIGH);
                             digitalWrite(m21,LOW);
                             digitalWrite(m22,HIGH);
                             delay(1000);
                             voice="";
                          }

                      else if(voice == "left")
                         {
                          Serial.println("LEFT");
                          digitalWrite(m11,LOW);
                          digitalWrite(m12,HIGH);
                          digitalWrite(m21,HIGH);
                          digitalWrite(m22,LOW);
                          delay(1000);
                          voice="";
                         }

                     else if (voice == "right")
                         {
                            Serial.println("RIGHT");
                            digitalWrite(m11,HIGH);
                            digitalWrite(m12,LOW);
                            digitalWrite(m21,LOW);
                            digitalWrite(m22,HIGH);
                            delay(1000);
                            voice="";
                         }

                     else if (voice == "stop")
                         {
                            Serial.println("STOP");
                            digitalWrite(m11,LOW);
                            digitalWrite(m12,LOW);
                            digitalWrite(m21,LOW);
                            digitalWrite(m22,LOW);
                            delay(1000);
                            voice="";
                          }

                      else
                          {
                            voice="";
                          }
                    
                  }

              
            }
    

   }
