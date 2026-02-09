#include <iostream>

int main()
{
    //The ocean’s level is currently rising at about 1.5 millimeters per year
    float oceanLevel = 1.5;
    /*The number of millimeters higher than the current level that the ocean’s level will be in
       5 years.*/
    float oceanFive;
    oceanFive = 5 * oceanLevel;
    /*The number of millimeters higher than the current level that the ocean’s level will be in
       7 years.*/
    float oceanSeven;
    oceanSeven = 7 * oceanLevel;
    /*The number of millimeters higher than the current level that the ocean’s level will be in
       10 years.*/
    float oceanTen;
    oceanTen = 10 * oceanLevel;
    // display the values of 5,7,10 and display a message with the three values
    std::cout << "The ocean's water level rises 1.5 millimeters per year. \n";
    std::cout << "In five years the ocean's water will rise by: " << oceanFive << " millimeters \n";
    std::cout << "In seven years the ocean's water will rise by: " << oceanSeven << " millimeters \n";
    std::cout << "In ten years the ocean's water will rise by: " << oceanTen << " millimeters \n";
}