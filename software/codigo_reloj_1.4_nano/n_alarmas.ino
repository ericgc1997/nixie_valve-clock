//Sonidos de alarma expresados en morse a la derecha de cada funcion

void alarma1()        //.. .. ..
{
  Serial.println("alarma1");
  static int n;
  int tiempo=150;
  switch (n)
  {
    case 0:
    if(Nota (HIGH,tiempo))
      n++;
    break;
    case 1:
    if(Nota(LOW,tiempo))
      n++;
    break;
    case 2:
    if(Nota (HIGH,tiempo))
      n++;
    break;
    case 3:
    if(Nota (LOW,2*tiempo))
      n=0;
    break;
    default:
    n=0;
    break;
  }
}

void alarma2()    //..-  ..-
{
  Serial.println("alarma2");
  static int n;
  int tiempo=100;
  
  switch (n)
  {
    case 0:
      if(Nota (HIGH,tiempo))
        n++;
    break;
    case 1:
      if(Nota(LOW,tiempo))
        n++;
    break;
    case 2:
      if(Nota (HIGH,tiempo))
        n++;
    break;
    case 3:
      if(Nota(LOW,tiempo))
        n++;
    break;
    case 4:
      if(Nota (HIGH,250))
        n++;
    break;
    case 5:
      if(Nota(LOW,250))
        n=0;
    break;
    default:
    n=0;
    break;
  }
}

void alarma3()    //...  ...  ...
{
  Serial.println("alarma3");
  int tiempo=150;
  static int n;
  switch (n)
  {
    case 0:
      if(Nota (HIGH,tiempo))
        n++;
    break;
    case 1:
      if(Nota(LOW,tiempo))
        n++;
    break;
    case 2:
      if(Nota (HIGH,tiempo))
        n++;
    break;
    case 3:
      if(Nota(LOW,tiempo))
        n++;
    break;
    case 4:
      if(Nota (HIGH,tiempo))
        n++;
    break;
    case 5:
      if(Nota(LOW,3*tiempo))
        n=0;
    break;
    default:
    n=0;
    break;
  }
}

void alarma4()    //....  ....  ....
{

  static int n;
  Serial.println(n);
  int tiempo=80;
  switch (n)
  {
    case 0:
    if(Nota (HIGH,tiempo))
      n++;
    break;
    case 1:
    if(Nota(LOW,tiempo))
      n++;
    break;
    case 2:
    if(Nota (HIGH,tiempo))
      n++;
    break;
    case 3:
    if(Nota (LOW,tiempo))
      n++;
    break;
    case 4:
    if(Nota (HIGH,tiempo))
      n++;
    break;
    case 5:
    if(Nota (LOW,tiempo))
      n++;
    break;
    case 6:
    if(Nota(HIGH,tiempo))
      n++;
    break;
    case 7:
    if(Nota(LOW,5*tiempo))
      n=0;
    break;
    
  }
}

void alarma5()        //_  _  _
{
  Serial.println("alarma5");
  static int n;
  switch (n)
  {
    case 0:
    if(Nota (HIGH,200))
      n=1;
    break;
    case 1:
    if(Nota(LOW,100))
      n=0;
    break;
    default:
    n=0;
    break;
  }
}

void alarma6()    //................                ...................
{
  Serial.println("alarma6");
  int t=20;
  static int n;
  switch (n)
  {
    case 0:
      if(Nota (HIGH,t))
        n++;
    break;
    case 1:
      if(Nota(LOW,t))
        n++;
    break;
    case 2:
      if(Nota (HIGH,t))
        n++;
    break;
    case 3:
      if(Nota(LOW,t))
        n++;
    break;
    case 4:
      if(Nota (HIGH,t))
        n++;
    break;
    case 5:
      if(Nota(LOW,t))
        n++;
    break;
    case 6:
      if(Nota (HIGH,t))
        n++;
    break;
    case 7:
      if(Nota (HIGH,t))
        n++;
    break;
    case 8:
      if(Nota(LOW,t))
        n++;
    break;
    case 9:
      if(Nota (HIGH,t))
        n++;
    break;
    case 10:
      if(Nota(LOW,t))
        n++;
    break;
    case 11:
      if(Nota (HIGH,t))
        n++;
    break;
    case 12:
      if(Nota(LOW,t))
        n++;
    break;
    case 13:
      if(Nota (HIGH,t))
        n++;
    break;
    case 14:
      if(Nota(LOW,t))
        n++;
    break;
    case 15:
      if(Nota (HIGH,t))
        n++;
    break;
    case 16:
      if(Nota (LOW,t))
        n++;
    break;
    case 17:
      if(Nota(HIGH,t))
        n++;
    break;
    case 18:
      if(Nota (LOW,t))
        n++;
    break;
    case 19:
      if(Nota(HIGH,t))
        n++;
    break;
    case 20:
      if(Nota (LOW,t))
        n++;
    break;
    case 21:
      if(Nota(HIGH,t))
        n++;
    break;
    case 22:
      if(Nota (LOW,t))
        n++;
    break;
    case 23:
      if(Nota(HIGH,t))
        n++;
    break;
    case 24:
      if(Nota(LOW,35*t))
        n=0;
    break;
    default:
    n=0;
    break;
  }
}
