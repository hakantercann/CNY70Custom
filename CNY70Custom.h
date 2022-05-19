/*
  CNY70Custom.h - Library for CNY70 sensor
  Created by Hakan Tercan, May 18, 2022.
  Not Released
*/
#ifndef CNY70Custom_h
#define CNY70Custom_h
#include "Arduino.h"
class CNY70Custom
{
	public:
		CNY70Custom(int Pin);
		boolean isThisWhite();
		String getColour();
	private:
		int _Pin;
		long _ReferenceValue;
};


#endif
