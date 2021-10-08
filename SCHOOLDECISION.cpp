// SCHOOLDECISION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "data.h"

//functions prototyping
void processing(int menuChoice);
float cost(float creditCost, float livingCostMonth);
float safety(float crimes, float students, float crimeindex);
float pRank(float pRank, float onlineSentiment);
float cGrowth(float milesFromCity, float nonCapPenalty, float prestigeValue);
float acceptance(float gpa, float preReqValue, float gradePreReq);
float car(float easeOfLocation, float onCampusPark, float costPark);


int main()
{


	int mainMenuChoice;
	std::cout << "School Decision Metric\n\n";
	std::cout << "Please select an option:\n--------------------------------------";
	std::cout << "\n1. View algorithms mechanics\n2. Detailed view of category scores\n3. View final scoring\n\n";
	std::cin >> mainMenuChoice;

	processing(mainMenuChoice);

}

float cost(float creditCost, float livingCostMonth)
{
	//calculation of the cost value 
	float semesterTotal = (livingCostMonth * 6.0) + (creditCost * 15.0);
	float value = abs((semesterTotal / 3600.0) - 10.0);
	return value;
}

float safety(float crimes, float students, float crimeindex)
{
	float studentToCrime; 
	float StCValue;
	float crimeIndexValue;
	float value;

	//calculation of the student to crime ratio and converting that value into a 0-10 scale
	studentToCrime = students / crimes;
	StCValue = (studentToCrime - 50) / 45;

	if (StCValue > 10.0)
	{
		StCValue = 10.0;
	}

	//converting crime index into a 0-10 scale
	crimeIndexValue = (crimeindex - 15) / 6;

	value = (crimeIndexValue + StCValue) / 2;

	return value;
}

float pRank(float pRank, float onlineSentiment)
{
	//calculation of the prestige rank value
	float rankValue = (2000.0 - pRank) / 200.0;
	float onlineSentimentValue = (onlineSentiment * 2.0) - 10.0;
	float value = (rankValue + onlineSentimentValue) / 2.0;
	return value;
}

float cGrowth(float milesFromCity, float nonCapPenalty, float prestigeValue)
{
	//calculation of the career growth value
	float value = ((milesFromCity - 35.0) / -3.5) + prestigeValue - nonCapPenalty;

	if (value > 10)
	{
		value = 10;
	}

	return value;
}

float acceptance(float gpa, float preReqValue, float gradePreReq)
{
	//calculation of the acceptance value
	float x = ((gpa - 3.25)/ -0.15);
	float value = x + preReqValue + gradePreReq;

	if (value < 0)
		value = 0;

	return value;
}

float car(float easeOfLocation, float onCampusPark, float costPark)
{
	//calculation of the car value
	float pCostValue = ((costPark - 2000.0) / -200.0);
	float value = (pCostValue + easeOfLocation + onCampusPark) / 3;
	return value;
}



float weightedCalculation(std::string school_name, float fhappinessValue, float fCost_Value, float fSafety_Value,
	float fpRank_Value, float fcGrwoth_Value, float facceptance_Value, float fcar_Value)
{
	//weighted calculation
	float happinessV, costV, safetyV, prankV, cgrowthV, acceptanceV, carV;

	happinessV = fhappinessValue * (.25);
	costV = fCost_Value * (.25);
	safetyV = fSafety_Value * (.10);
	prankV = fpRank_Value * (.25);
	cgrowthV = fcGrwoth_Value * (.05);
	acceptanceV = facceptance_Value * (.05);
	carV = fcar_Value * (.05);
	
	float value = happinessV + costV + safetyV + prankV + cgrowthV + acceptanceV + carV;


	return value;
}


void printResults(std::string& school_name, float& fhappinessValue, float& fCost_Value, float& fSafety_Value,
	float& fpRank_Value, float& fcGrwoth_Value, float& facceptance_Value, float& fcar_Value)
{
	//printing of the various values
	std::cout << std::fixed;
	std::cout << std::setprecision(2) << std::endl<<std::endl;
	std::cout << school_name<< ":\n\n";
	std::cout << fhappinessValue << " - Happiness \n";
	std::cout << fCost_Value << " - Cost \n";
	std::cout << fSafety_Value << " - Safety \n";
	std::cout << fpRank_Value << " - Prestige of Program\n";
	std::cout << fcGrwoth_Value << " - Career Growth\n";
	std::cout << facceptance_Value << " - Acceptance\n";
	std::cout << fcar_Value << " - Car" << "\n";


}

void processing(int menuChoice)
{
	//call to functions for each school
	//Wentworth
	float wentworth_Cost_Value = cost(creditcost_wentworth, livingCost_wentworth);
	float wentworth_Safety_Value = safety(crimes_wentworth, students_wentworth, crimeIndex_wentworth);
	float wentworth_pRank_Value = pRank(pRank_wentworth, onlineS_wentworth);
	float wentworth_cGrowth_Value = cGrowth(milesFromCity_wentworth, noncappenalty_wentworth, prestigeValue_wentworth);
	float wentworth_Acceptance_Value = acceptance(gpa_wentworth, prereqVal_wentworth, gradeprereq_wentworth);
	float wentworth_Car_Value = car(easelocation_wentworth, campusPark_wentworth, costPark_wentworth);

	//umassBoston
	float umassBoston_Cost_Value = cost(creditcost_umassBoston, livingCost_umassBoston);
	float umassBoston_Safety_Value = safety(crimes_umassBoston, students_umassBoston, crimeIndex_umassBoston);
	float umassBoston_pRank_Value = pRank(pRank_umassBoston, onlineS_umassBoston);
	float umassBoston_cGrowth_Value = cGrowth(milesFromCity_umassBoston, noncappenalty_umassBoston, prestigeValue_umassBoston);
	float umassBoston_Acceptance_Value = acceptance(gpa_umassBoston, prereqVal_umassBoston, gradeprereq_umassBoston);
	float umassBoston_Car_Value = car(easelocation_umassBoston, campusPark_umassBoston, costPark_umassBoston);

	//merrimack
	float merrimack_Cost_Value = cost(creditcost_merrimack, livingCost_merrimack);
	float merrimack_Safety_Value = safety(crimes_merrimack, students_merrimack, crimeIndex_merrimack);
	float merrimack_pRank_Value = pRank(pRank_merrimack, onlineS_merrimack);
	float merrimack_cGrowth_Value = cGrowth(milesFromCity_merrimack, noncappenalty_merrimack, prestigeValue_merrimack);
	float merrimack_Acceptance_Value = acceptance(gpa_merrimack, prereqVal_merrimack, gradeprereq_merrimack);
	float merrimack_Car_Value = car(easelocation_merrimack, campusPark_merrimack, costPark_merrimack);

	//suffolk
	float suffolk_Cost_Value = cost(creditcost_suffolk, livingCost_suffolk);
	float suffolk_Safety_Value = safety(crimes_suffolk, students_suffolk, crimeIndex_suffolk);
	float suffolk_pRank_Value = pRank(pRank_suffolk, onlineS_suffolk);
	float suffolk_cGrowth_Value = cGrowth(milesFromCity_suffolk, noncappenalty_suffolk, prestigeValue_suffolk);
	float suffolk_Acceptance_Value = acceptance(gpa_suffolk, prereqVal_suffolk, gradeprereq_suffolk);
	float suffolk_Car_Value = car(easelocation_suffolk, campusPark_suffolk, costPark_suffolk);

	//fitchburg
	float fitchburg_Cost_Value = cost(creditcost_fitchburg, livingCost_fitchburg);
	float fitchburg_Safety_Value = safety(crimes_fitchburg, students_fitchburg, crimeIndex_fitchburg);
	float fitchburg_pRank_Value = pRank(pRank_fitchburg, onlineS_fitchburg);
	float fitchburg_cGrowth_Value = cGrowth(milesFromCity_fitchburg, noncappenalty_fitchburg, prestigeValue_fitchburg);
	float fitchburg_Acceptance_Value = acceptance(gpa_fitchburg, prereqVal_fitchburg, gradeprereq_fitchburg);
	float fitchburg_Car_Value = car(easelocation_fitchburg, campusPark_fitchburg, costPark_fitchburg);

	//SNHU
	float SNHU_Cost_Value = cost(creditcost_SNHU, livingCost_SNHU);
	float SNHU_Safety_Value = safety(crimes_SNHU, students_SNHU, crimeIndex_SNHU);
	float SNHU_pRank_Value = pRank(pRank_SNHU, onlineS_SNHU);
	float SNHU_cGrowth_Value = cGrowth(milesFromCity_SNHU, noncappenalty_SNHU, prestigeValue_SNHU);
	float SNHU_Acceptance_Value = acceptance(gpa_SNHU, prereqVal_SNHU, gradeprereq_SNHU);
	float SNHU_Car_Value = car(easelocation_SNHU, campusPark_SNHU, costPark_SNHU);

	//UNH
	float UNH_Cost_Value = cost(creditcost_UNH, livingCost_UNH);
	float UNH_Safety_Value = safety(crimes_UNH, students_UNH, crimeIndex_UNH);
	float UNH_pRank_Value = pRank(pRank_UNH, onlineS_UNH);
	float UNH_cGrowth_Value = cGrowth(milesFromCity_UNH, noncappenalty_UNH, prestigeValue_UNH);
	float UNH_Acceptance_Value = acceptance(gpa_UNH, prereqVal_UNH, gradeprereq_UNH);
	float UNH_Car_Value = car(easelocation_UNH, campusPark_UNH, costPark_UNH);

	//saintAnselm
	float saintAnselm_Cost_Value = cost(creditcost_saintAnselm, livingCost_saintAnselm);
	float saintAnselm_Safety_Value = safety(crimes_saintAnselm, students_saintAnselm, crimeIndex_saintAnselm);
	float saintAnselm_pRank_Value = pRank(pRank_saintAnselm, onlineS_saintAnselm);
	float saintAnselm_cGrowth_Value = cGrowth(milesFromCity_saintAnselm, noncappenalty_saintAnselm, prestigeValue_saintAnselm);
	float saintAnselm_Acceptance_Value = acceptance(gpa_saintAnselm, prereqVal_saintAnselm, gradeprereq_saintAnselm);
	float saintAnselm_Car_Value = car(easelocation_saintAnselm, campusPark_saintAnselm, costPark_saintAnselm);

	//umassAmherst
	float umassAmherst_Cost_Value = cost(creditcost_umassAmherst, livingCost_umassAmherst);
	float umassAmherst_Safety_Value = safety(crimes_umassAmherst, students_umassAmherst, crimeIndex_umassAmherst);
	float umassAmherst_pRank_Value = pRank(pRank_umassAmherst, onlineS_umassAmherst);
	float umassAmherst_cGrowth_Value = cGrowth(milesFromCity_umassAmherst, noncappenalty_umassAmherst, prestigeValue_umassAmherst);
	float umassAmherst_Acceptance_Value = acceptance(gpa_umassAmherst, prereqVal_umassAmherst, gradeprereq_umassAmherst);
	float umassAmherst_Car_Value = car(easelocation_umassAmherst, campusPark_umassAmherst, costPark_umassAmherst);

	//umassLowell
	float umassLowell_Cost_Value = cost(creditcost_umassLowell, livingCost_umassLowell);
	float umassLowell_Safety_Value = safety(crimes_umassLowell, students_umassLowell, crimeIndex_umassLowell);
	float umassLowell_pRank_Value = pRank(pRank_umassLowell, onlineS_umassLowell);
	float umassLowell_cGrowth_Value = cGrowth(milesFromCity_umassLowell, noncappenalty_umassLowell, prestigeValue_umassLowell);
	float umassLowell_Acceptance_Value = acceptance(gpa_umassLowell, prereqVal_umassLowell, gradeprereq_umassLowell);
	float umassLowell_Car_Value = car(easelocation_umassLowell, campusPark_umassLowell, costPark_umassLowell);

	//FGCU
	float FGCU_Cost_Value = cost(creditcost_FGCU, livingCost_FGCU);
	float FGCU_Safety_Value = safety(crimes_FGCU, students_FGCU, crimeIndex_FGCU);
	float FGCU_pRank_Value = pRank(pRank_FGCU, onlineS_FGCU);
	float FGCU_cGrowth_Value = cGrowth(milesFromCity_FGCU, noncappenalty_FGCU, prestigeValue_FGCU);
	float FGCU_Acceptance_Value = acceptance(gpa_FGCU, prereqVal_FGCU, gradeprereq_FGCU);
	float FGCU_Car_Value = car(easelocation_FGCU, campusPark_FGCU, costPark_FGCU);




	//main menu printing
	if (menuChoice == 1)			//View algorithm Mechanics
	{

		int documentationMenuChoice;
		std::cout << "What would you like to view?\n\n";
		std::cout << "1. Metric Algorithm Procedures and Documentation\n2. Project GitHub page\n3. I'm using Apple Device\n - ";
		std::cin >> documentationMenuChoice;
		if (documentationMenuChoice == 1)
		{
			ShellExecute(NULL, NULL, L"https://docs.google.com/presentation/d/1dj604sGHW6FK3jxD-3WMaiZy3XWaGLN6s-rI9-H0zl4/edit?usp=sharing", NULL, NULL, SW_SHOWNORMAL);
		}
		else if(documentationMenuChoice == 2)
		{
			ShellExecute(NULL, NULL, L"https://github.com/matttoppi/SCHOOLDECISION", NULL, NULL, SW_SHOWNORMAL);
		}
		else 
		{
			std::cout << "Copy below links into your web browser\n\nDocumentation and Procedures: https://docs.google.com/presentation/d/1dj604sGHW6FK3jxD-3WMaiZy3XWaGLN6s-rI9-H0zl4/edit?usp=sharing \n\nGitHub Page: https://github.com/matttoppi/SCHOOLDECISION ";
		}


		
		char anotherOption;
		std::cout << "\n\nWould you like to select another main menu option? (Y or N)";
		std::cin >> anotherOption;

		if (anotherOption == 'Y' || anotherOption == 'y')
		{
			main();
		}
		else
		{
			exit(0);
		}

	}
	else if (menuChoice == 2)	//Detailed view of category results/scores
	{

		bool exit_flag = false;

		while (!exit_flag) {

			int schoolViewSelect;
			std::cout << "\n\nPlease enter the number for the school you wish to view: \n\n";
			std::cout << " 1. Wentworth\n\n";
			std::cout << " 2. University Of Massahusetts - Boston\n\n";
			std::cout << " 3. Merrimack College\n\n";
			std::cout << " 4. Suffolk University\n\n";
			std::cout << " 5. Fitchburg State University\n\n";
			std::cout << " 6. University Of New Hampshire\n\n";
			std::cout << " 7. Southern New Hampshire University\n\n";
			std::cout << " 8. Saint Anselm University\n\n";
			std::cout << " 9. University of Massachusetts - Amherst\n\n";
			std::cout << "10. University of Massachusetts - Lowell\n\n";
			std::cout << "11. Florida Gulf Coast University\n\n";
			std::cout << "12. View all scores at once";
			std::cout << "\n\nEnter a number - ";
			std::cin >> schoolViewSelect;


			switch (schoolViewSelect) {
				std::cout << std::fixed;
				std::cout << std::setprecision(2);
			case 1: //wentworth
				printResults(schoolname_wentworth, happiness_wentworth, wentworth_Cost_Value, wentworth_Safety_Value, wentworth_pRank_Value,
					wentworth_cGrowth_Value, wentworth_Acceptance_Value, wentworth_Car_Value);
				break;
			case 2:
				printResults(schoolname_umassBoston, happiness_umassBoston, umassBoston_Cost_Value, umassBoston_Safety_Value, umassBoston_pRank_Value,
					umassBoston_cGrowth_Value, umassBoston_Acceptance_Value, umassBoston_Car_Value);
				break;
			case 3:
				printResults(schoolname_merrimack, happiness_merrimack, merrimack_Cost_Value, merrimack_Safety_Value, merrimack_pRank_Value,
					merrimack_cGrowth_Value, merrimack_Acceptance_Value, merrimack_Car_Value);
				break;
			case 4:
				printResults(schoolname_suffolk, happiness_suffolk, suffolk_Cost_Value, suffolk_Safety_Value, suffolk_pRank_Value,
					suffolk_cGrowth_Value, suffolk_Acceptance_Value, suffolk_Car_Value);
				break;
			case 5:
				printResults(schoolname_fitchburg, happiness_fitchburg, fitchburg_Cost_Value, fitchburg_Safety_Value, fitchburg_pRank_Value,
					fitchburg_cGrowth_Value, fitchburg_Acceptance_Value, fitchburg_Car_Value);
				break;
			case 6:
				printResults(schoolname_UNH, happiness_UNH, UNH_Cost_Value, UNH_Safety_Value, UNH_pRank_Value,
					UNH_cGrowth_Value, UNH_Acceptance_Value, UNH_Car_Value);
				break;
			case 7:
				printResults(schoolname_SNHU, happiness_SNHU, SNHU_Cost_Value, SNHU_Safety_Value, SNHU_pRank_Value,
					SNHU_cGrowth_Value, SNHU_Acceptance_Value, SNHU_Car_Value);
				break;
			case 8:
				printResults(schoolname_saintAnselm, happiness_saintAnselm, saintAnselm_Cost_Value, saintAnselm_Safety_Value, saintAnselm_pRank_Value,
					saintAnselm_cGrowth_Value, saintAnselm_Acceptance_Value, saintAnselm_Car_Value);
				break;
			case 9:
				printResults(schoolname_umassAmherst, happiness_umassAmherst, umassAmherst_Cost_Value, umassAmherst_Safety_Value, umassAmherst_pRank_Value,
					umassAmherst_cGrowth_Value, umassAmherst_Acceptance_Value, umassAmherst_Car_Value);
				break;
			case 10:
				printResults(schoolname_umassLowell, happiness_umassLowell, umassLowell_Cost_Value, umassLowell_Safety_Value, umassLowell_pRank_Value,
					umassLowell_cGrowth_Value, umassLowell_Acceptance_Value, umassLowell_Car_Value);
				break;
			case 11:
				printResults(schoolname_FGCU, happiness_FGCU, FGCU_Cost_Value, FGCU_Safety_Value, FGCU_pRank_Value,
					FGCU_cGrowth_Value, FGCU_Acceptance_Value, FGCU_Car_Value);
				break;
			case 12:
				printResults(schoolname_wentworth, happiness_wentworth, wentworth_Cost_Value, wentworth_Safety_Value, wentworth_pRank_Value,
					wentworth_cGrowth_Value, wentworth_Acceptance_Value, wentworth_Car_Value);

				printResults(schoolname_umassBoston, happiness_umassBoston, umassBoston_Cost_Value, umassBoston_Safety_Value, umassBoston_pRank_Value,
					umassBoston_cGrowth_Value, umassBoston_Acceptance_Value, umassBoston_Car_Value);

				printResults(schoolname_merrimack, happiness_merrimack, merrimack_Cost_Value, merrimack_Safety_Value, merrimack_pRank_Value,
					merrimack_cGrowth_Value, merrimack_Acceptance_Value, merrimack_Car_Value);

				printResults(schoolname_suffolk, happiness_suffolk, suffolk_Cost_Value, suffolk_Safety_Value, suffolk_pRank_Value,
					suffolk_cGrowth_Value, suffolk_Acceptance_Value, suffolk_Car_Value);

				printResults(schoolname_fitchburg, happiness_fitchburg, fitchburg_Cost_Value, fitchburg_Safety_Value, fitchburg_pRank_Value,
					fitchburg_cGrowth_Value, fitchburg_Acceptance_Value, fitchburg_Car_Value);

				printResults(schoolname_UNH, happiness_UNH, UNH_Cost_Value, UNH_Safety_Value, UNH_pRank_Value,
					UNH_cGrowth_Value, UNH_Acceptance_Value, UNH_Car_Value);

				printResults(schoolname_SNHU, happiness_SNHU, SNHU_Cost_Value, SNHU_Safety_Value, SNHU_pRank_Value,
					SNHU_cGrowth_Value, SNHU_Acceptance_Value, SNHU_Car_Value);

				printResults(schoolname_saintAnselm, happiness_saintAnselm, saintAnselm_Cost_Value, saintAnselm_Safety_Value, saintAnselm_pRank_Value,
					saintAnselm_cGrowth_Value, saintAnselm_Acceptance_Value, saintAnselm_Car_Value);

				printResults(schoolname_umassAmherst, happiness_umassAmherst, umassAmherst_Cost_Value, umassAmherst_Safety_Value, umassAmherst_pRank_Value,
					umassAmherst_cGrowth_Value, umassAmherst_Acceptance_Value, umassAmherst_Car_Value);

				printResults(schoolname_umassLowell, happiness_umassLowell, umassLowell_Cost_Value, umassLowell_Safety_Value, umassLowell_pRank_Value,
					umassLowell_cGrowth_Value, umassLowell_Acceptance_Value, umassLowell_Car_Value);

				printResults(schoolname_FGCU, happiness_FGCU, FGCU_Cost_Value, FGCU_Safety_Value, FGCU_pRank_Value,
					FGCU_cGrowth_Value, FGCU_Acceptance_Value, FGCU_Car_Value);
				break;
			}



			char moreScores;
			std::cout << "\n\nWould you like to view more school specific scores? (Y or N) - ";
			std::cin >> moreScores;

			if (moreScores == 'N' || moreScores == 'n') {
				exit_flag = true;
			}

		}
		

		 //allows user to return to main menu
		char anotherOption;
		std::cout << "\n\nWould you like to select another main menu option? (Y or N)";
		std::cin >> anotherOption;

		if (anotherOption == 'Y' || anotherOption == 'y')
		{
			main();
		}
		else
		{
			exit(0);
		}

	}
	else if (menuChoice == 3)	// View final scoring
	{
		//print final scoring

		float suffolk_FINAL = weightedCalculation(schoolname_suffolk, happiness_suffolk, suffolk_Cost_Value, suffolk_Safety_Value, suffolk_pRank_Value,
			suffolk_cGrowth_Value, suffolk_Acceptance_Value, suffolk_Car_Value);

		float umassBoston_FINAL = weightedCalculation(schoolname_umassBoston, happiness_umassBoston, umassBoston_Cost_Value, umassBoston_Safety_Value, umassBoston_pRank_Value,
			umassBoston_cGrowth_Value, umassBoston_Acceptance_Value, umassBoston_Car_Value);

		float fitchburg_FINAL = weightedCalculation(schoolname_fitchburg, happiness_fitchburg, fitchburg_Cost_Value, fitchburg_Safety_Value, fitchburg_pRank_Value,
			fitchburg_cGrowth_Value, fitchburg_Acceptance_Value, fitchburg_Car_Value);

		float merrimack_FINAL = weightedCalculation(schoolname_merrimack, happiness_merrimack, merrimack_Cost_Value, merrimack_Safety_Value, merrimack_pRank_Value,
			merrimack_cGrowth_Value, merrimack_Acceptance_Value, merrimack_Car_Value);

		float wentworth_FINAL = weightedCalculation(schoolname_wentworth, happiness_wentworth, wentworth_Cost_Value, wentworth_Safety_Value, wentworth_pRank_Value,
			wentworth_cGrowth_Value, wentworth_Acceptance_Value, wentworth_Car_Value);

		float UNH_FINAL = weightedCalculation(schoolname_UNH, happiness_UNH, UNH_Cost_Value, UNH_Safety_Value, UNH_pRank_Value,
			UNH_cGrowth_Value, UNH_Acceptance_Value, UNH_Car_Value);

		float umassAmherst_FINAL = weightedCalculation(schoolname_umassAmherst, happiness_umassAmherst, umassAmherst_Cost_Value, umassAmherst_Safety_Value, umassAmherst_pRank_Value,
			umassAmherst_cGrowth_Value, umassAmherst_Acceptance_Value, umassAmherst_Car_Value);

		float umassLowell_FINAL = weightedCalculation(schoolname_umassLowell, happiness_umassLowell, umassLowell_Cost_Value, umassLowell_Safety_Value, umassLowell_pRank_Value,
			umassLowell_cGrowth_Value, umassLowell_Acceptance_Value, umassLowell_Car_Value);

		float SNHU_FINAL = weightedCalculation(schoolname_SNHU, happiness_SNHU, SNHU_Cost_Value, SNHU_Safety_Value, SNHU_pRank_Value,
			SNHU_cGrowth_Value, SNHU_Acceptance_Value, SNHU_Car_Value);

		float saintAnselm_FINAL = weightedCalculation(schoolname_saintAnselm, happiness_saintAnselm, saintAnselm_Cost_Value, saintAnselm_Safety_Value, saintAnselm_pRank_Value,
			saintAnselm_cGrowth_Value, saintAnselm_Acceptance_Value, saintAnselm_Car_Value);

		float FGCU_FINAL = weightedCalculation(schoolname_FGCU, happiness_FGCU, FGCU_Cost_Value, FGCU_Safety_Value, FGCU_pRank_Value,
			FGCU_cGrowth_Value, FGCU_Acceptance_Value, FGCU_Car_Value);


		//creates a map for the scores to be sorted from worst to best
		std::multimap<float, std::string, std::greater<float>> sorted_map;

		sorted_map.insert(std::make_pair(suffolk_FINAL, schoolname_suffolk));
		sorted_map.insert(std::make_pair(umassBoston_FINAL, schoolname_umassBoston));
		sorted_map.insert(std::make_pair(fitchburg_FINAL, schoolname_fitchburg));
		sorted_map.insert(std::make_pair(merrimack_FINAL, schoolname_merrimack));
		sorted_map.insert(std::make_pair(wentworth_FINAL, schoolname_wentworth));
		sorted_map.insert(std::make_pair(UNH_FINAL, schoolname_UNH));
		sorted_map.insert(std::make_pair(umassAmherst_FINAL, schoolname_umassAmherst));
		sorted_map.insert(std::make_pair(umassLowell_FINAL, schoolname_umassLowell));
		sorted_map.insert(std::make_pair(SNHU_FINAL, schoolname_SNHU));
		sorted_map.insert(std::make_pair(saintAnselm_FINAL, schoolname_saintAnselm));
		sorted_map.insert(std::make_pair(FGCU_FINAL, schoolname_FGCU));


		std::cout << std::setw(76) << "---------------------------------------------------\n\n";
		std::cout << std::setw(59) << "Final Results:\n";
		std::cout << std::setw(60) << "Bound: (0 - 10)\n\n";
		std::cout << std::setw(60) << "|Rank||Score|            |School|   \n";
		std::cout << std::setw(75) << "---------------------------------------------------\n";
		

			  
		//printing of the scores in order
		int i = 0;
		for (auto const& entry :sorted_map)
		{
			i++;
			std::cout << std::fixed;
			std::cout << std::setprecision(2);
			std::cout << std::setw(25) << i << ".    " << entry.first << " - " << entry.second << "\n";
		}

		char anotherOption;
		std::cout << std::setw(25)<< "\n\nWould you like to select another main menu option? (Y or N)";
		std::cin >> anotherOption;

		if (anotherOption == 'Y' || anotherOption == 'y')
		{
			main();
		}
		else
		{
			exit(0);
		}

	}
	else							//invalid number try again
	{
	//wrong input 
		std::cout << "\n\nYou entered an invalid number please try again\n\n\n\n\n\n\n\n";
			main();
	}



}


