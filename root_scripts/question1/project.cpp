
	#include "tempTrender.h"
	#include <string>
	#include <iostream>
	
	void project() {
		string pathToFile = "../../data_files/oneDayTemp_highQuality_Lund.txt"; //Put the path to data file, Southern Sweden
	
	
		tempTrender t(pathToFile); //Instantiate your analysis object
		
		t.tempOnDay(4, 14); //Call implemented function
		//t.tempOnDay(235);
		//t.tempPerDay();
		//t.hotCold();
		//t.tempPerYear(2050);
		
	}
