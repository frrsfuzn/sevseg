/*
	Sevseg.h - Library for Seven Segment
	Created by Mochamad Farras Fauzan, December 16, 2019
	Released into the public domain.
*/
#ifndef Sevseg_h
#define Sevseg_h

#include "Arduino.h"
class Sevseg{
	public:
		Sevseg(int a,int b,int c,int d,int e,int f,int g);
		void number(char num);
		void clear();
	private:
		int Pins[7];
		
}; //DONT FORGET THERE'S SEMICOLON HERE

#endif
