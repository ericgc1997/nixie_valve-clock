void loop() 
{

  compruebaAlarma();  
  if (leeBoton1())
  {
    menu=menu+1;
  } 
  switch (menu)
  {
    case 1:
    if (leeBoton2())
        editaHora(); 
    else
      muestraHora();
    break;
    
    case 2:
    if (leeBoton2())
      editaFecha();
    else
      muestraFecha();
    break;
    
    case 3:
    if (leeBoton2())
    {
      editaAlarma();
      sonido=eligeSonido(maxMelodias);
    }
    else
      muestraAlarma(); 
    break;
    
    default:
    menu=1;
    break;
  }

  
}
