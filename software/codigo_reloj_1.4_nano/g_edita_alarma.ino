void editaAlarma()
{
  Serial.println("editando");
  int valvula;
  int Dhora, Uhora, Dmin, Umin;
  Dhora=0;
  Uhora=0;
  Dmin=0;
  Umin=0;
  editado=false;
  while(!editado)
  {
    while(!editado)
    {
      
      Dhora=recorreValvula(1,2,Dhora);  //editamos la decena de la hora en la valvula 1
      pintaValvula (2,Uhora); 
      pintaValvula (3,Dmin);  pintaValvula (4,Umin); 
      pintaValvula (5,0);     pintaValvula (6,0);
    }
    editado=false;
    while(!editado)
    {
      pintaValvula (1,Dhora);
      if(Dhora==2)                        //editamos la unidad de la hora en la valvula 2
        Uhora=recorreValvula(2,4,Uhora);
      else
        Uhora=recorreValvula(2,9,Uhora);
          
      pintaValvula (3,Dmin);  pintaValvula (4,Umin); 
      pintaValvula (5,0);     pintaValvula (6,0);
    }
    editado=false;
    while(!editado)
    {
      pintaValvula (1,Dhora); pintaValvula (2,Uhora);
      Dmin=recorreValvula(3,5,Dmin);   //editamos la decena del minuto en la valvula 3
      pintaValvula (4,Umin); 
      pintaValvula (5,0);     pintaValvula (6,0);
    }
    editado=false;
    while(!editado)
    {
      pintaValvula (1,Dhora); pintaValvula (2,Uhora);
      pintaValvula (3,Dmin);
      Umin=recorreValvula(4,9,Umin);   //editamos la unidad del minuto en la valvula 4
      pintaValvula (5,0);     pintaValvula (6,0);
    }
    alarM=Dmin*10+Umin;      //guardamos el la variable mi hora los valores seleccionados en las valvulas
    alarH=Dhora*10+Uhora;      //guardamos el la variable mi hora los valores seleccionados en las valvulas 1 y 2 
    editado=true;
  }                
}
