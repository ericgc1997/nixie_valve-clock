//Funcion que usando la diferencia de tiempo en el programa entre el tiempo actual y uno anterior 
// devuelbe true cuando esta diferencia es mayor quel intervalo elejido

//funcion que con los pulsadores 1 y 2 permite ir viendo las distintas alarmas y 
//seleccionar la actual respectivamente devolviendo el numero de alarma en la variable sonido mientras se sigue mostrando la alarma elegida
int eligeSonido(int maxMelodias)
{
  int Dhora=alarH/10;
  int Uhora=alarH%10;
  int Dmin=alarM/10;
  int Umin=alarM%10;
  while(!leeBoton2())
  {
    pintaValvula (1,Dhora); pintaValvula (2,Uhora);
    pintaValvula (3,Dmin);  pintaValvula (4,Umin);  
    pintaValvula (5,0);     pintaValvula (6,0);
    if (leeBoton1())
    {
      sonido++;
        if (sonido>maxMelodias)  
            sonido=0; 
    }
    miSonido(sonido);
  }
  digitalWrite(pinBuzz,LOW);
  return sonido;
}

void miSonido(int n)
{
  switch (n)
  {
  case 0:
    activaAlarma=false;
  break;
  case 1:
    alarma1();
  break;
  case 2:
    alarma2();
  break; 
  case 3:
    alarma3();
  break;   
  case 4:
    alarma4();
  break;   
  case 5:
    alarma5();
  break; 
  case 6:
    alarma6();
  break;   

  }
}

bool Nota(unsigned nota, int intervalo)
{
  static unsigned long At;
  unsigned long Nt=millis();
  if (nota==HIGH)
      digitalWrite(pinBuzz,HIGH);
    else
      digitalWrite(pinBuzz,LOW);
  if ((Nt-At)>=intervalo)
  {
    At=Nt;
    return true;
  }
  else
    return false;
}
