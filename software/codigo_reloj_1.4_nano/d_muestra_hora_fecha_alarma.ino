
void muestraHora()
{
  DateTime now = rtc.now();
//  int hora, minuto, segundo;  
 
  hora=now.hour();
  pintaValvula(1,hora/10);
  pintaValvula(2,hora%10);
  
  minuto=now.minute();
  pintaValvula(3,minuto/10);
  pintaValvula(4,minuto%10);
  
  segundo=now.second();
  pintaValvula(5,segundo/10);
  pintaValvula(6,segundo%10);
  mihora=hora;
  miminuto=minuto;
  misegundo=segundo;
}


void muestraFecha()
{
  DateTime now = rtc.now();
//  int dia, mes, anno, resto;
  
  dia=now.day();
  pintaValvula(1,dia/10);
  pintaValvula(2,dia%10);
 
  mes=now.month();
  pintaValvula(3,mes/10);
  pintaValvula(4,mes%10);
 
  anno=now.year();
  if (anno<2000 && anno>=1000)
    resto=anno%1000;
  else if (anno<3000 && anno>=2000)  
    resto=anno%2000;
  else if (anno<4000 && anno>=3000)  
    resto=anno%3000;
  else if (anno<5000 && anno>=4000)  
    resto=anno%4000;
  else if (anno<6000 && anno>=5000)  
    resto=anno%5000;
  pintaValvula(5,resto/10);    
  pintaValvula(6,resto%10);
  mianno=anno;
  mimes=mes;
  midia=dia;
}

void muestraAlarma()
{
  pintaValvula(1,alarH/10);
  pintaValvula(2,alarH%10);
  pintaValvula(3,alarM/10);
  pintaValvula(4,alarM%10);
  pintaValvula(5,0);
  pintaValvula(6,0);
}
