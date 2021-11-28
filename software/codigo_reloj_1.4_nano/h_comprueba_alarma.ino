/////////////////funaion que comprueva la hora actual conla alarma y si son iguales activa la alarma hasta pulsar B2//////////////////
void compruebaAlarma()
{
  DateTime now = rtc.now();
  hora=now.hour();
  minuto=now.minute();
  segundo=now.second();
  if ((hora==alarH) && (minuto==alarM)&&(segundo==0))
    activaAlarma=true;
  while(activaAlarma)
  {
    muestraHora();
    miSonido(sonido); 
    if(leeBoton2()||leeBoton1())
      activaAlarma=false;           
  }
}
