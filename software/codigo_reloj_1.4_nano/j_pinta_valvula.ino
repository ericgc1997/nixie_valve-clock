/////////////A la hora de usar las valvulas poner inicalmente en LOW y luego cada una en HIGH///////////////////
void pintaValvula(int valvula, int numero)
{
  digitalWrite(pinVa,LOW); digitalWrite(pinVb,LOW); digitalWrite(pinVc,LOW); 
  digitalWrite(pinVd,LOW); digitalWrite(pinVf,LOW); digitalWrite(pinVe,LOW);
  if (valvula==1)
  {
    digitalWrite(pinVa,HIGH);
    pintaNumero(numero);   
  }
  if (valvula==2)
  {
    digitalWrite(pinVb,HIGH);
    pintaNumero(numero);
  }
  if (valvula==3)
  {
    digitalWrite(pinVc,HIGH);
    pintaNumero(numero);
  }
  if (valvula==4)
  {
    digitalWrite(pinVd,HIGH);
    pintaNumero(numero);
  }
  if (valvula==5)
  {
    digitalWrite(pinVe,HIGH);    
    pintaNumero(numero);
  }
  if (valvula==6)
  {
    digitalWrite(pinVf,HIGH);
    pintaNumero(numero);
  }
  delay(tiempo);
}
