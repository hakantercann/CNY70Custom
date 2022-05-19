/*
  CNY70Custom.cpp - Library for CNY70 sensor
  Created by Hakan Tercan, May 18, 2022.
  Not Released
*/
#include "CNY70Custom.h"
#include "Arduino.h"
CNY70Custom::CNY70Custom(int Pin)//Just Analog Pin 
{
	_Pin = Pin;
	_ReferenceValue = 800;//if reading value of _pin is bigger than 800, that means colours is black otherwise is white.
}
boolean CNY70Custom::isThisWhite()
{
	if(analogRead(CNY70Custom::_Pin) > (CNY70Custom::_ReferenceValue)) // this control block check _pin is bigger than _referencevalue or not
	{
		return true;//the colour is black
	}
	else
	{
		return false;//the colour is white
	}
}
String CNY70Custom::getColour()
{
	if(CNY70Custom::isThisWhite())
	{
		return "Black";
	}
	else
	{
		return "White";
	}
}

