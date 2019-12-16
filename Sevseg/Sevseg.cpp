/*
	Sevseg.cpp - Library for Seven Segment
	Created by Mochamad Farras Fauzan, December 16, 2019
	Released into the public domain.
*/
#include "Arduino.h"
#include "Sevseg.h"

Sevseg::Sevseg(int a,int b,int c,int d,int e,int f,int g){
	int pins[7]={a,b,c,d,e,f,g};
	for(int i=0;i<7;i++){
		Pins[i]=pins[i];
	}
	for(int i=0;i<7;i++){
		pinMode(Pins[i],OUTPUT);
	}
}

void Sevseg::number(char num){
	for(int i=0;i<7;i++){
		digitalWrite(Pins[i],LOW);
	  }
	if(num=='0'){
		for(int i=0;i<7;i++){
		  if(i==6) continue;
		  digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='1'){
		for(int i=0;i<7;i++){
		if(i==1 || i==2) digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='2'){
		for(int i=0;i<7;i++){
		if(i==2 || i==5) continue;
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='3'){
		for(int i=0;i<7;i++){
		if(i==4 || i==5) continue;
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='4'){
		for(int i=0;i<7;i++){
		if(i==0 || i==3 || i==4) continue;
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='5'){
		for(int i=0;i<7;i++){
		if(i==1 || i==4) continue;
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='6'){
		for(int i=0;i<7;i++){
		if(i==1) continue;
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='7'){
		for(int i=0;i<7;i++){
		if(i==0 || i==1 || i==2) digitalWrite(Pins[i],HIGH);;
		}
	}
	if(num=='8'){
		for(int i=0;i<7;i++){
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='9'){
		for(int i=0;i<7;i++){
		if(i==4) continue;
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='a' || num=='A'){
		for(int i=0;i<7;i++){
		if(i==3) continue;
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='b' || num=='B'){
		for(int i=0;i<7;i++){
		if(i==0 || i==1) continue;
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='c' || num=='C'){
		for(int i=0;i<7;i++){
		if(i==1||i==2||i==6) continue;
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='d' || num=='D'){
		for(int i=0;i<7;i++){
		if(i==0||i==5) continue;
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='e' || num=='E'){
		for(int i=0;i<7;i++){
		if(i==1||i==2) continue;
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='f' || num=='F'){
		for(int i=0;i<7;i++){
		if(i==1||i==2||i==3) continue;
		digitalWrite(Pins[i],HIGH);
		}
	}
	if(num=='o'){
		for(int i=0;i<7;i++){
		digitalWrite(Pins[i],LOW);
		}
	}
}

void Sevseg::clear(){
	for(int i=0;i<7;i++){
		digitalWrite(Pins[i],LOW);
	}
}