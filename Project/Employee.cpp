#include "Employee.h"

std::vector<Food>::iterator Employee::findFood(std::vector<Food>& foods, int foodId) {
    
    return std::find_if(foods.begin(), foods.end(),
                        [foodId](const Food& food) { return food.getId() == foodId; });
}

void Employee::createFood(std::vector<Food>& foods, const std::string& foodType, int foodId) {
   
    foods.emplace_back(foodType, foodId);
}

void Employee::removeFood(std::vector<Food>& foods, const Food& food) {
   
    foods.erase(std::remove_if(foods.begin(), foods.end(),
                               [&food](const Food& f) { return f == food; }),
                foods.end());

    
    /*for (Customer& customer : Customer::getAllCustomers()) {
        customer.returnFood(food);
    }*/
}
