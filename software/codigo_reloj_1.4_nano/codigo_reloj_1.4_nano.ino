//declaracion de las fuciones a utilizar para evitar problemas en la compilacion

//Funciones dedicadas a mostrar distintos elementos
void muestraHora();
void muestraFecha();
void muestraAlarma();

//Funciones dedicadas a editar los elementos a mostrar
void editaHora();
void editaFecha();
void editaAlarma();

//Funciones relacionadas con el sonido de la alarma
void compruebaAlarma();
int eligeSonido(int maxMelodias);
void miSonido(int n);
bool Nota(unsigned nota, int intervalo);
void alarma1(); void alarma2(); void alarma3(); void alarma4();
void alarma5(); void alarma6(); void alarma7();

//Funciones basicas dell programa
void pintaValvula(int valvula, int numero);
int recorreValvula(int valvula, int maximo, int numero); 
void pintaNumero(int numero);
bool leeBoton1();
bool leeBoton2();

#include <RTClib.h>
#include <Wire.h>
RTC_DS3231 rtc;                 //creamos una variable RTC que es del tipo ds3231 (el oscilador que estamos usando)

////////////////DEFINICION DE LOS PINES CON LOS QUE TRABAREMOS Y DEMAS VARIABLES GLOBALES////////////////
int pinB1=12;         //pin Boton 1
int pinB2=13;         //pin boton 2
int b1; 
int b2;


////////////////PINES QUE CONTROLAN EL IC BCD A DECIMAL////////////////
int pinA=5;
int pinB=4;
int pinC=3;
int pinD=2;

////////////////PINES QUE CONTROLAN LA ACTIVACION DE LAS VALVULAS////////////////
int pinVa=6;
int pinVb=7;
int pinVc=8;
int pinVd=9;
int pinVe=10;
int pinVf=11;

////////////////VARIABLES DE SONIDO////////////////
int pinBuzz=A0;
int sonido=1;
int maxMelodias=6;


int tiempo=3; //variable que define la tasa de refresco de las valvulas
int menu;     //variable que establece en que menu nos encontramos

////////////////OTRAS VARIABLES////////////////
int resto;
int mihora, miminuto, misegundo, midia, mimes, mianno;              //variables de tiempo que el usuario selecciona
int hora, minuto, segundo, dia, mes, anno;                          //variables de tiempo que va a ir mostrando el reloj
int alarH, alarM;                                                   //variables de tiempo que el usuario guarda como alarma y que se mostrara
bool activaAlarma=false;
bool editado=false;
