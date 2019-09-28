// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>
#include <sstream>
int main()
{
  double num_of_days, cost_of_hotel, cost_of_meal, total_cost;
  std::string place;

  std::cout << "Welcome to the Business Trip Tracker!";

  std::cout << "What is the business trip location?";
  getline(std::cin, place);
  std::cout << "How many days will the trip take?";
  std::cin >> num_of_days;
  std::cout << "What is the total hotel expense?";
  std::cin >> cost_of_hotel;
  std::cout << "What is the total meal expense?";
  std::cin >> cost_of_meal;

total_cost = cost_of_hotel + cost_of_meal;

std::stringstream sshotel, ssmeal, sstotal;
sshotel << std::setprecision(2) << std::fixed << '$' << cost_of_hotel;
ssmeal << std::setprecision(2) << std::fixed << '$' << cost_of_meal;
sstotal << std::setprecision(2) << std::fixed << '$' << total_cost;

  std::cout << "Location" << std::setw(15) << "Days" << std::setw(15) << "Hotel" << std::setw(14) << "Meal" << std::setw(15) << "Total" << std::endl;
  std::cout << place << std::setw(10) << num_of_days << std::setw(15) << sshotel.str() << std::setw(14) << ssmeal.str() << std::setw(15) << sstotal.str() << std::endl;

  return 0;
}
