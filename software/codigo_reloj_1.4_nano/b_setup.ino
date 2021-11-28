void setup() 
{
  rtc.begin();
  Serial.begin(9600);
  pinMode(pinB1,INPUT);
  pinMode(pinB2,INPUT);
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);
  ///////////esto dejarlo como OUTPUT al provar con las valvulas//////////////
  pinMode(pinVa,OUTPUT);
  pinMode(pinVb,OUTPUT);
  pinMode(pinVc,OUTPUT);
  pinMode(pinVd,OUTPUT);
  pinMode(pinVe,OUTPUT);
  pinMode(pinVf,OUTPUT);
  
  pinMode(pinBuzz,OUTPUT);

  ////////////Guardamos las variables de la edicion para al apagaar y volver a encender no perder//////////
  ////////////el valor de estas dado que al editar una volveran a cero las otras(rtcadjust)////////////////
  DateTime now = rtc.now();
  mianno=now.year();
  mimes=now.month();
  midia=now.day();
  misegundo=now.second();
  miminuto=now.minute();
  mihora=now.hour();
  Serial.println("hola");

 // rtc.adjust(DateTime(mianno, mimes, midia, mihora, miminuto, misegundo));
  // esto solo habra que ponerlo en edita Hora rtc.adjust(DateTime(0,0,0,0,0,0));
  menu=1;
}
