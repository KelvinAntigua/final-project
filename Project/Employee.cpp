#include "Employee.h"

std::vector<Food>::iterator Employee::findFood(std::vector<Food>& foods, int foodId) {
    // Use std::find_if to search for the food with the specified id
    return std::find_if(foods.begin(), foods.end(),
                        [foodId](const Food& food) { return food.getId() == foodId; });
}

void Employee::createFood(std::vector<Food>& foods, const std::string& foodType, int foodId) {
    // Instantiate a new food and add it to the foods container
    foods.emplace_back(foodType, foodId);
}

void Employee::removeFood(std::vector<Food>& foods, const Food& food) {
    // Use std::remove_if to remove the specified food from the foods container
    foods.erase(std::remove_if(foods.begin(), foods.end(),
                               [&food](const Food& f) { return f == food; }),
                foods.end());

    // Remove the food from all ordered customer objects
    /*for (Customer& customer : Customer::getAllCustomers()) {
        customer.returnFood(food);
    }
}*/
