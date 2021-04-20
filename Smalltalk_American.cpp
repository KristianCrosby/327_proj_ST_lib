/*
 * Smalltalk_American.cpp
 *
 *  Created on: Apr 18, 2021
 *      Author: Kristian Crosby
 */

#include <vector>
#include "../includes/Smalltalk.h"
#include "../includes/constants.h"
#include "../includes/Smalltalk_American.h"

class Smalltalk_American :
	public Smalltalk
{
public:
	//this constructor should call the 2 parameter constructor below in it's initializer list
	Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk(AMERICAN, iPerson){
		populatePhrases();
	}

	//use base class constructor in initializer list to set Nationality and iPerson (See constants for Nationality strings)
	//also prepare the object for use by calling populatePhrases()
	Smalltalk_American::Smalltalk_American(std::string myNationality,int iPerson):Smalltalk(myNationality, iPerson){
		populatePhrases();
	}

	~Smalltalk_American(void);
	virtual void Smalltalk_American::populatePhrases(){
		mySmallTalk.push_back(AMERICAN_PHRASE_1);
		mySmallTalk.push_back(AMERICAN_PHRASE_2);
		mySmallTalk.push_back(AMERICAN_PHRASE_3);
		mySmallTalk.push_back(AMERICAN_PHRASE_4);
		mySmallTalk.push_back(AMERICAN_PHRASE_5);
	}
};


