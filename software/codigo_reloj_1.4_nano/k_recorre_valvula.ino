int recorreValvula(int valvula, int maximo, int numero)         //funcion que recorre la valvula seleccionada hasta el numero maxio
{                                                               //y debuelve el numero que se muestra al pulsar el boton 2
  pintaValvula(valvula,numero);
  if(leeBoton1())
  {
    numero++;
    if (numero>maximo)
      numero=0;   
  }  
  if(leeBoton2())
    editado=true; 
 return numero; 
}
