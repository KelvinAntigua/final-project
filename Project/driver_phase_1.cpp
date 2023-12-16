#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>  
#include "Food.h"
#include "Customer.h"

/*std::vector<std::string> splitString(const std::string& input, char delimiter) {
    std::vector<std::string> tokens;
    std::istringstream stream(input);
    std::string token;
    while (std::getline(stream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}


void readFoods(const std::string& filename, std::vector<Food*>& foodContainer) {
    std::ifstream myFile(filename);

    std::string line;
    while (getline(myFile, line)) {
        std::vector<std::string> tokens = splitString(line, ',');

       
        if (tokens.size() == 2) {
            std::string foodType = tokens[0];
            int foodId = std::stoi(tokens[1]);

            // Create a Food object using dynamic memory
            Food* food = new Food(foodType, foodId);

            // Store a pointer to the Food object in the container
            foodContainer.push_back(food);
        }
    }

    myFile.close();
}
void readCustomers(const std::string& filename, std::vector<Customer*>& customerContainer) {
    std::ifstream myFile(filename);

    std::string line;
    while (getline(myFile, line)) {
        std::vector<std::string> tokens = splitString(line, ',');

      
        if (tokens.size() == 3) {
            std::string customerName = tokens[0];
            int customerId = std::stoi(tokens[1]);
            int maxFoods = std::stoi(tokens[2]);

         
            Customer* customer = new Customer(customerName, customerId, maxFoods);

           
            customerContainer.push_back(customer);
        }
    }

    myFile.close();
} */
int main() 
{   
    std::cout << std::endl;

    std::vector<Food> foodContainer;

    std::vector<Customer> customerContainer;

    std::vector<Food>::iterator foodIterator;

    std::vector<Customer>::iterator customerIterator;
    //readCustomers("B.csv",customerContainer);
    //readFoods("A.csv", foodContainer);
    

   
    std::cout << std::endl;
    return 0;
}