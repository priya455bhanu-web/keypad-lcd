void setup() 
{
  pinMode(13,OUTPUT);//r1
  pinMode(12,OUTPUT);//y1
  pinMode(11,OUTPUT);//g1
  pinMode(10,OUTPUT);//r2
  pinMode(9,OUTPUT);//y2
  pinMode(8,OUTPUT);//g2
  pinMode(7,OUTPUT);//r3
  pinMode(6,OUTPUT);//y3
  pinMode(5,OUTPUT);//g3

  
}
void loop()
 {
  digitalWrite(13,11);//green
  digitalWrite(10,11);//red
  digitalWrite(7,11);//yellow
  delay(5000);
  digitalWrite(13,00);//green
  digitalWrite(12,11);//yellow
  delay(2000);
  digitalWrite(12,00);
  digitalWrite(13,11);
  digitalWrite(8,11);
  digitalWrite(7,11);
  delay(5000);
  digitalWrite(8,00);
  digitalWrite(9,11);
  delay(2000);
  digitalWrite(9, 00);
  digitalWrite(10, 11);
  digitalWrite(5, 11);
  digitalWrite(13, 11); 
  delay(5000);
  digitalWrite(9, 00);
  digitalWrite(10, 11);
  digitalWrite(5, 11);
  digitalWrite(13, 11);
  delay(5000);
  digitalWrite(6,00);
  digitalWrite(13,00);
  digitalWrite(10,00);
  digitalWrite(7,00);
 }


  




