/*
  HouseProfile.h - HouseProfile library for Wiring - implementation
  Copyright (c) 2006 John Doe.  All right reserved.
*/

// include core Wiring API
#include <Arduino.h>

// include this library's description file
#include "HouseProfile.h"

// Constructor //

HouseProfile::HouseProfile()
{
  
}

// Setting values //

void HouseProfile::setAge(int age)
{
  age = age;
}

void HouseProfile::setLightPref(double lightPref)
{
  lightPref = lightPref;
}

void HouseProfile::setTempPref(double temperaturePref)
{
  temperaturePref = temperaturePref;
}

void HouseProfile::setName(char *name)
{
  name = name;
}

//creating a profile//

void HouseProfile::createProfile(char *name,int age)
{
	setName(name);
	setAge(age);
}

//getting values//

char *getName()
{
	return name;
}

int getAge()
{
	return age;
}

double getLightPref()
{
	return lightPref;
}

double getTempPref()
{
	return temperaturePref;
}