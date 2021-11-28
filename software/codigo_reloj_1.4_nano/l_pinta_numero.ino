  

void pintaNumero(int numero)
{
 switch (numero)
 {
  case 0:
    digitalWrite(pinA, LOW);  digitalWrite(pinB, LOW);  
    digitalWrite(pinC, LOW);  digitalWrite(pinD, LOW);
  break;

  case 1:
    digitalWrite(pinA, HIGH);  digitalWrite(pinB, LOW);  
    digitalWrite(pinC, LOW);  digitalWrite(pinD, LOW);
  break;

  case 2:
    digitalWrite(pinA, LOW);  digitalWrite(pinB, HIGH);  
    digitalWrite(pinC, LOW);  digitalWrite(pinD, LOW);
  break;
  
  case 3:
    digitalWrite(pinA, HIGH);  digitalWrite(pinB, HIGH);  
    digitalWrite(pinC, LOW);  digitalWrite(pinD, LOW);
  break;

  case 4:
    digitalWrite(pinA, LOW);  digitalWrite(pinB, LOW);  
    digitalWrite(pinC, HIGH);  digitalWrite(pinD, LOW);
  break;

  case 5:
    digitalWrite(pinA, HIGH);  digitalWrite(pinB, LOW);  
    digitalWrite(pinC, HIGH);  digitalWrite(pinD, LOW);
  break;

  case 6:
    digitalWrite(pinA, LOW);  digitalWrite(pinB, HIGH);  
    digitalWrite(pinC, HIGH);  digitalWrite(pinD, LOW);
  break;

  case 7:
    digitalWrite(pinA, HIGH);  digitalWrite(pinB, HIGH);  
    digitalWrite(pinC, HIGH);  digitalWrite(pinD, LOW);
  break;

  case 8:
    digitalWrite(pinA, LOW);  digitalWrite(pinB, LOW);  
    digitalWrite(pinC, LOW);  digitalWrite(pinD, HIGH);
  break;

  case 9:
    digitalWrite(pinA, HIGH);  digitalWrite(pinB, LOW);  
    digitalWrite(pinC, LOW);  digitalWrite(pinD, HIGH);
  break;
 }
}
