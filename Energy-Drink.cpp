#include <iostream>

int main()
{
	/*A soft drink company recently surveyed 16,500 of its customers and found that
approximately 15 percent of those surveyed purchase one or more energy drinks per week.
Of those customers who purchase energy drinks, approximately 58 percent of them prefer
citrus-flavored energy drinks.*/
	int customers = 16500;
	float customersWeek = .15;
	float customersCitrus = .58;
	// find how many customers purchase one or more energy drink a week and how many prefer citrus-flavored drinks
	float totalWeek, totalCitrus;
	totalWeek = customersWeek * customers;
	totalCitrus = customersCitrus * customers;
	//display both totals
	std::cout << "Out of a given 16500 customers surveyed from an energy drink company, 15 percent purchase one or more drink a week, \n";
	std::cout << "and 58 percent of the customers prefer a citrus flavored drink. \n";
	std::cout << "\n";
	std::cout << "approximately " << totalWeek << " customers out of the survey buy at least one drink a week. \n";
	std::cout << "approximately " << totalCitrus << " customers out of the survey prefer the citrus flavored drink. \n";
}