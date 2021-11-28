/*
      Recorre las valvulas para seleccionar la fecha actual, primero el año luego el mes y luego el dia  
 */
void editaFecha()
{
  int Ddia, Udia, Dmes, Umes, Manno, Canno, Danno, Uanno;
  Ddia=0; 
  Udia=0;
  Dmes=0; 
  Umes=0;
  Manno=0; 
  Canno=0; 
  Danno=0;
  Uanno=0;   
  editado=false;
  while (!editado)
  {
/////////////////////////////////Edicion del año y guardado en la variable mianno////////////////////////////////////   
    while (!editado)
    {
      Manno=recorreValvula(3,9,Manno);
      pintaValvula(4,Canno);  pintaValvula(5,Danno);  pintaValvula(6,Uanno);
    }
    editado=false;
    while (!editado)
    {
      Canno=recorreValvula(4,9,Canno);
      pintaValvula(3,Manno);  pintaValvula(5,Danno);  pintaValvula(6,Uanno);
    }
    editado=false;
    while (!editado)
    {
      Danno=recorreValvula(5,9,Danno);
      pintaValvula(3,Manno);  pintaValvula(4,Canno);  pintaValvula(6,Uanno);
    }
    editado=false;
    while (!editado)
    {
      Uanno=recorreValvula(6,9,Uanno);
      pintaValvula(3,Manno);  pintaValvula(4,Canno);  pintaValvula(5,Danno);
    }
    editado=false;
/////////////////////////////////Edicion del mes y guardado en la variable mimes////////////////////////////////////      
    while (!editado)
    {
      pintaValvula(5,Danno);  pintaValvula(6,Uanno);
      Dmes=recorreValvula(3,1,Dmes);    
      pintaValvula(4,Umes);
      pintaValvula(1,Ddia);   pintaValvula(2,Udia);
    }
    editado=false;
    while (!editado)
    {
      pintaValvula(5,Danno);  pintaValvula(6,Uanno);   
      pintaValvula(3,Dmes);
      pintaValvula(1,Ddia);   pintaValvula(2,Udia);
      if (Dmes==0)
        Umes=recorreValvula(4,9,Umes);
      else
        Umes=recorreValvula(4,2,Umes);
    }
    editado=false;
/////////////////////////////////Edicion del dia y guardado en la variable midia////////////////////////////////////          
    while(!editado)
    {
      pintaValvula(5,Danno);  pintaValvula(6,Uanno);
      pintaValvula(3,Dmes);  pintaValvula(4,Umes);  
      pintaValvula(2,Udia);
      if (mimes!=2)
        Ddia=recorreValvula(1,3,Ddia);
      else
        Ddia=recorreValvula(1,2,Ddia);
    }
    editado=false;
    
    while(!editado)
    {
      pintaValvula(5,Danno);  pintaValvula(6,Uanno);
      pintaValvula(3,Dmes);  pintaValvula(4,Umes);  
      pintaValvula(1,Ddia);
      if ((mimes==1 || mimes==3 || mimes==5 || mimes==7 || mimes==8 || mimes==10 || mimes==12)&& Ddia==3)
        Udia=recorreValvula(2,1,Udia);
      else if((mimes==4 || mimes==6 || mimes==9 || mimes==11)&& Ddia==3)
        Udia=recorreValvula(2,0,Ddia);
      else if((mianno%4==0 && mianno%100==0 && mianno%400==0)&& mimes==2)
        Udia=recorreValvula(2,9,Udia);
      else if((mianno%4!=0 || mianno%100!=0 || mianno%400!=0)&& mimes==2)
        Udia=recorreValvula(2,8,Udia);
      else
        Udia=recorreValvula(2,9,Udia);
    }
    mianno=Manno*1000+Canno*100+Danno*10+Uanno;
    midia=Ddia*10+Udia;
    mimes=Dmes*10+Umes;
  }
  rtc.adjust(DateTime(mianno, mimes, midia, mihora, miminuto, misegundo));
}
