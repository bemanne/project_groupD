//include C++ STL headers
#include <iostream>
#include <fstream>

#include "TMath.h"

//own files
#include "tempTrender2.h"

//ROOT library objects
#include <TH1.h>
#include <TGraph.h>
#include <TCanvas.h>
#include <TMultiGraph.h>
//using namespace std;
tempTrender::tempTrender(string filePath) {
	//cout << "The user supplied " << filePath << " as the path to the data file." << endl;
	//cout << "You should probably store this information in a member variable of the class. Good luck with the project! :)" << endl;
	fileToPath=filePath;
}

//make function to give hist with temp for each year
void tempTrender::hotCold(){
	
	
	TCanvas *c1 = new TCanvas("c1","The coldest temperature per year",60,60,500,300);
	
	TGraph* graph = new TGraph("../../data_files/coldestday_Lund.txt");
	TGraph* graph1 = new TGraph("../../data_files/hottestday_Lund.txt");
	TMultiGraph *mg = new TMultiGraph(); 
	mg -> Add(graph);
	mg -> Add(graph1);
	mg->Draw("a");
	c1->SaveAs("../../pictures/newpicture.jpg");
	//graph->CreateTMultiGraph(graph, graph1);
	
	//graph->Draw(graph);
	//graph1->Draw("same");
	
	//double mean = hist->GetMean(); //The mean of the distribution
	//double stdev = hist->GetRMS(); //The standard deviation
	//TCanvas* can = new TCanvas();
	
}
