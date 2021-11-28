/////////////FUNCION QUE DEVUEVE VERDADERO AL DETECTAR EL CAMBIO DE ESTADO A POSITIVO DE UN PULSADOR////////////////////

bool leeBoton1()
{
  static byte Ast, Nst;               //antiguo estado y nuevo estado respectivamente
                                     //se define como una variable estatica para que mantenga su valor una vez salga del bucle en otro caso no funcionara
  Nst=digitalRead(pinB1);
  if (Nst!=Ast)
  {
    Ast=Nst;
    if (Nst==HIGH)
      return true;
  }
  else 
    return false;
}

bool leeBoton2()
{
  static byte Ast, Nst;               //antiguo estado y nuevo estado respectivamente
                                     //se define como una variable estatica para que mantenga su valor una vez salga del bucle en otro caso no funcionara
  Nst=digitalRead(pinB2);
  if (Nst!=Ast)
  {
    Ast=Nst;
    if (Nst==HIGH)
      return true;
  }
  else 
    return false;
}
