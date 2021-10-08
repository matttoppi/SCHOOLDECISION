#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <conio.h>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>
#include <map>
#include<utility>
#include<Windows.h>
#include<shellapi.h>





//wentworth------------------------------------------
 std::string schoolname_wentworth = "Wentworth Institute of Technology";
	//happiness
float happiness_wentworth = 6.2;
	//cost
float creditcost_wentworth = 1160.0;
float livingCost_wentworth = 1600.0;
	//safety
float crimes_wentworth = 23.0;
float students_wentworth = 4449.0;
float crimeIndex_wentworth = 19.0;
	//pRank
float pRank_wentworth = 44.0;
float onlineS_wentworth = 8.3;
	//Career Growth
float milesFromCity_wentworth = 0.0;
float noncappenalty_wentworth = 0.0;
float prestigeValue_wentworth = 2.5; //scale (0-3)
	//acceptance
float gpa_wentworth = 3.0; 
float prereqVal_wentworth = 0.0;
float gradeprereq_wentworth = 0.0;
	//car 
float easelocation_wentworth = 3.5;
float campusPark_wentworth = 7.5;
float costPark_wentworth = 250.0;


//UMass Boston------------------------------------------
std::string schoolname_umassBoston = "University of Massachusetts Boston";
	//happiness

float happiness_umassBoston = 3.6;
	//cost
float creditcost_umassBoston = 500.0;
float livingCost_umassBoston = 1600.0;
	//safety
float crimes_umassBoston = 9.0;
float students_umassBoston = 15989.0;
float crimeIndex_umassBoston = 19.0;
	//pRank
float pRank_umassBoston = 113.0;
float onlineS_umassBoston = 6.7;
	//Career Growth
float milesFromCity_umassBoston = 0.0;
float noncappenalty_umassBoston = 0.0;
float prestigeValue_umassBoston = 1.0; //scale (0-3)
	//acceptance
float gpa_umassBoston = 2.5;
float prereqVal_umassBoston = 0.0;
float gradeprereq_umassBoston = 0.0;
	//car 
float easelocation_umassBoston = 3.5;
float campusPark_umassBoston = 2.5;
float costPark_umassBoston = 2000.0;


//Merrimack College------------------------------------------
std::string schoolname_merrimack = "Merrimack College";
	//happiness
float happiness_merrimack = 0.8;
	//cost
float creditcost_merrimack = 1500.0;
float livingCost_merrimack = 900.0;
	//safety
float crimes_merrimack = 44.0;
float students_merrimack = 5186.0;
float crimeIndex_merrimack = 75.0;
	//pRank
float pRank_merrimack = 1347.0;
float onlineS_merrimack = 3.6;
	//Career Growth
float milesFromCity_merrimack = 28.0;
float noncappenalty_merrimack = 1.0;
float prestigeValue_merrimack = 1.0; //scale (0-3)
	//acceptance
float gpa_merrimack = 3.0;
float prereqVal_merrimack = 0.0;
float gradeprereq_merrimack = 0.0;
	//car 
float easelocation_merrimack = 8.0;
float campusPark_merrimack = 7.5 ;
float costPark_merrimack = 0.0;


//Suffolk University------------------------------------------
std::string schoolname_suffolk = "Suffolk University";
	//happiness
float happiness_suffolk = 2.2;
	//cost
float creditcost_suffolk = 1213.0;
float livingCost_suffolk = 1600.0;
	//safety
float crimes_suffolk = 20.0;
float students_suffolk = 7169.0;
float crimeIndex_suffolk = 19;
	//pRank
float pRank_suffolk = 371;
float onlineS_suffolk = 6.0;
	//Career Growth
float milesFromCity_suffolk = 0.0;
float noncappenalty_suffolk = 0.0;
float prestigeValue_suffolk = 1.0; //scale (0-3)
	//acceptance
float gpa_suffolk = 2.5;
float prereqVal_suffolk = 0.0;
float gradeprereq_suffolk = 0.0;
	//car 
float easelocation_suffolk = 3.0;
float campusPark_suffolk = 7.5;
float costPark_suffolk = 2000.0;


//Fitchburg State College------------------------------------------
std::string schoolname_fitchburg = "Fitchburg State University";
	//happiness
float happiness_fitchburg = 4.0;
	//cost
float creditcost_fitchburg = 40.0;
float livingCost_fitchburg = 750.0;
	//safety
float crimes_fitchburg = 31.0;
float students_fitchburg = 7251.0;
float crimeIndex_fitchburg = 31.0;
	//pRank
float pRank_fitchburg = 584.0;
float onlineS_fitchburg = 6.0;
	//Career Growth
float milesFromCity_fitchburg = 27.8;
float noncappenalty_fitchburg = 1.0;
float prestigeValue_fitchburg = 0.0; //scale (0-3)
	//acceptance
float gpa_fitchburg = 2.5;
float prereqVal_fitchburg = 0.0;
float gradeprereq_fitchburg = 0.0;
	//car 
float easelocation_fitchburg = 8.0;
float campusPark_fitchburg = 7.5;
float costPark_fitchburg = 200.0;


//SNHU------------------------------------------
std::string schoolname_SNHU = "Southern New Hampshire University";
	//happiness
float happiness_SNHU = 2.0;
	//cost												

float creditcost_SNHU = 320.0;
float livingCost_SNHU = 900.0;
	//safety
float crimes_SNHU = 21.0;
float students_SNHU = 3000.0;
float crimeIndex_SNHU = 15.0;
	//pRank
float pRank_SNHU = 339.0;
float onlineS_SNHU = 6.3;
	//Career Growth
float milesFromCity_SNHU = 0.0;
float noncappenalty_SNHU = 1.0;
float prestigeValue_SNHU = 0.0; //scale (0-3)
	//acceptance
float gpa_SNHU = 2.7;
float prereqVal_SNHU = 0.0;
float gradeprereq_SNHU = 0.0;
	//car 
float easelocation_SNHU = 7.5;
float campusPark_SNHU = 7.5;
float costPark_SNHU = 200.0;


//UNH------------------------------------------
std::string schoolname_UNH = "University of New Hampshire";
	//happiness
float happiness_UNH = 7.0;
	//cost
float creditcost_UNH = 1405.0;
float livingCost_UNH = 800.0;
	//safety
float crimes_UNH = 121.0;
float students_UNH = 14788.0;
float crimeIndex_UNH = 58.0;
	//pRank
float pRank_UNH = 82.0;
float onlineS_UNH = 7.2;
//Career Growth
float milesFromCity_UNH = 34.2;
float noncappenalty_UNH = 1.0;
float prestigeValue_UNH = 1.0; //scale (0-3)
	//acceptance
float gpa_UNH = 2.8;
float prereqVal_UNH = 0.0;
float gradeprereq_UNH = 0.0;
//car 
float easelocation_UNH = 8.0;
float campusPark_UNH = 7.5;
float costPark_UNH = 75.0;


//Saint Anselm------------------------------------------
std::string schoolname_saintAnselm = "Saint Anselm University";
	//happiness
float happiness_saintAnselm = 2.0;
	//cost
float creditcost_saintAnselm = 1000.0;
float livingCost_saintAnselm = 900.0;
	//safety
float crimes_saintAnselm = 40.0;
float students_saintAnselm = 2033.0;
float crimeIndex_saintAnselm = 15.0;
	//pRank
float pRank_saintAnselm = 1383.0;
float onlineS_saintAnselm = 7.3;
	//Career Growth
float milesFromCity_saintAnselm = 0.0;
float noncappenalty_saintAnselm = 1.0;
float prestigeValue_saintAnselm = 0.0; //scale (0-3)
	//acceptance
float gpa_saintAnselm = 3.0;
float prereqVal_saintAnselm = 0.0;
float gradeprereq_saintAnselm = 0.0;
	//car 
float easelocation_saintAnselm = 7.5;
float campusPark_saintAnselm = 7.5;
float costPark_saintAnselm = 150.0;


//Umass Amherst------------------------------------------
std::string schoolname_umassAmherst = "University of Massachusetts Amherst";
	//happiness
float happiness_umassAmherst = 5.4;
	//cost
float creditcost_umassAmherst = 405.0;
float livingCost_umassAmherst = 1050.0;
	//safety
float crimes_umassAmherst = 93.0;
float students_umassAmherst = 31350.0;
float crimeIndex_umassAmherst = 55.0;
	//pRank
float pRank_umassAmherst = 76.0;
float onlineS_umassAmherst = 9.0;
	//Career Growth
float milesFromCity_umassAmherst = 25.2;
float noncappenalty_umassAmherst = 1.0;
float prestigeValue_umassAmherst = 3.0; //scale (0-3)
	//acceptance
float gpa_umassAmherst = 3.0;
float prereqVal_umassAmherst = -1;
float gradeprereq_umassAmherst = -1;
	//car 
float easelocation_umassAmherst = 7.5;
float campusPark_umassAmherst = 7.5;
float costPark_umassAmherst = 350.0;


//Umass Lowell------------------------------------------
std::string schoolname_umassLowell = "University of Massachusetts Lowell";
	//happiness
float happiness_umassLowell = 5.5;
	//cost
float creditcost_umassLowell = 340.0;
float livingCost_umassLowell = 800.0;
	//safety
float crimes_umassLowell = 29.0;
float students_umassLowell = 18352.0;
float crimeIndex_umassLowell = 31.0;
	//pRank
float pRank_umassLowell = 87.0;
float onlineS_umassLowell = 8.5;
	//Career Growth
float milesFromCity_umassLowell = 30.3;
float noncappenalty_umassLowell = 1.0;
float prestigeValue_umassLowell = 2.0; //scale (0-3)
	//acceptance
float gpa_umassLowell = 2.0;
float prereqVal_umassLowell = 0.0;
float gradeprereq_umassLowell = 0.0;
	//car 
float easelocation_umassLowell = 6.0;
float campusPark_umassLowell = 7.5;
float costPark_umassLowell = 400.0;


//FGCU------------------------------------------
std::string schoolname_FGCU = "Florida Gulf Coast University";
	//happiness
float happiness_FGCU = 2.0;
	//cost
float creditcost_FGCU = 838.73;
float livingCost_FGCU = 800.0;
	//safety
float crimes_FGCU = 8.0;
float students_FGCU = 14977.0;
float crimeIndex_FGCU = 16.0;
	//pRank
float pRank_FGCU = 772.0;
float onlineS_FGCU = 7.8;
	//Career Growth
float milesFromCity_FGCU = 0.0;
float noncappenalty_FGCU = 1.0;
float prestigeValue_FGCU = 1.0; //scale (0-3)
	//acceptance
float gpa_FGCU = 3.0;
float prereqVal_FGCU = 0.0;
float gradeprereq_FGCU = 0.0;
	//car 
float easelocation_FGCU = 8.0;
float campusPark_FGCU = 7.5;
float costPark_FGCU = 0.0;