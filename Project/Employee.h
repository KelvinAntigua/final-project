#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <vector>
#include "Food.h"  
#include "Customer.h"

class Employee {
public:
   
    static std::vector<Food>::iterator findFood(std::vector<Food>& foods, int foodId);

    
    static void createFood(std::vector<Food>& foods, const std::string& foodType, int foodId);

    
    static void removeFood(std::vector<Food>& foods, const Food& food);
};

#endif // EMPLOYEE_H
