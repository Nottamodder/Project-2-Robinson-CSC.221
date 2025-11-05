#include <iostream>

int main()
{
	/*A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town, and
	28.9 miles per gallon when driven on the highway. Write a program that calculates and
	displays the distance the car can travel on one tank of gas when driven in town and when
	driven on the highway.*/
	int tankVolume = 20;
	float mpgTown = 23.5;
	float mpgHighway = 28.9;
	//Distance = Number of Gallons x Average Miles per Gallon
	float distanceHighway, distanceTown;
	distanceHighway = tankVolume * mpgHighway;
	distanceTown = tankVolume * mpgTown;
	//Display the distance of both values with text
	std::cout << "A car can travel with a 20 gallon tank of gas in a city and town. The car gets 28.9 mpg in the city and 23.5 mpg in the town. \n";
	std::cout << "In the city the car will go: " << distanceHighway << " miles \n";
	std::cout << "In the town the car will go: " << distanceTown << " miles \n";
}