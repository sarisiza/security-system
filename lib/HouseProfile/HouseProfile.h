/*
  HouseProfile.h - HouseProfiles library for Wiring - description
  Copyright (c) 2006 John Doe.  All right reserved.
*/

// ensure this library description is only included once
#ifndef _HouseProfile_h_
#define _HouseProfile_h_

// library interface description
class HouseProfile
{
  // user-accessible "public" interface
  public:
    HouseProfile();
	setAge(int age);
	setLightPref(double lightPref);
	setTempPref(double tempPref);
	setName(char *name);
	createProfile(char *name,int age);
	getName();
	getAge();
	getLightPref();
	getTempPref();
    

  // library-accessible "private" interface
  private:
    char *name;
	int age;
	double lightPref;
	double temperaturePref;
    
};

#endif

