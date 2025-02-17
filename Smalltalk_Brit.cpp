/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Apr 18, 2021
 *      Author: Kristian Crosby
 */

#include "../includes/Smalltalk.h"
#include "../includes/constants.h"
#include "../includes/Smalltalk_Brit.h"
class Smalltalk_Brit :
	public Smalltalk
{
public:
	//use base class constructor in initializer list to set Nationality and iPerson (See constants for Nationality strings)
	//also prepare the object for use by calling populatePhrases()
	Smalltalk_Brit::Smalltalk_Brit(int iPerson):Smalltalk(BRIT, iPerson){
		populatePhrases();
	}
	virtual ~Smalltalk_Brit(void);

	virtual void Smalltalk_Brit::populatePhrases(){
			mySmallTalk.push_back(BRIT_1);
			mySmallTalk.push_back(BRIT_2);
			mySmallTalk.push_back(BRIT_3);
			mySmallTalk.push_back(BRIT_4);
			mySmallTalk.push_back(BRIT_5);
			mySmallTalk.push_back(BRIT_6);
			mySmallTalk.push_back(BRIT_7);
	}
};


