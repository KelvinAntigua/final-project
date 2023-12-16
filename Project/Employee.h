#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <vector>
#include "Food.h"  // Include the necessary headers for Food and Customer classes
#include "Customer.h"

class Employee {
public:
    // Find food in the foods container
    static std::vector<Food>::iterator findFood(std::vector<Food>& foods, int foodId);

    // Create a new food and add it to the foods container
    static void createFood(std::vector<Food>& foods, const std::string& foodType, int foodId);

    // Remove food from the foods container
    static void removeFood(std::vector<Food>& foods, const Food& food);
};

#endif // EMPLOYEE_H
