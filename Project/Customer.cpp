
#include "Customer.h"
#include "Food.h"
void Customer::display() const {
    std::cout << "Customer " << name << "'s Foods:\n";
    for (const Food* food : foods) {
        //std::cout << "  - " << food->getName() << " ($" << food->getPrice() << ")\n";
    }
}

std::vector<Food*> Customer::getFoods() const {
    return foods;
}

int Customer::getNumFoods() const {
    return foods.size();
}

bool Customer::isFull() const {
    return (getNumFoods() >= maxFoods);
}

void Customer::overbook() {
    maxFoods++;
}

void Customer::clear() {
    for (Food* food : foods) {
        food->removeCustomer(this);
    }
    foods.clear();
}

void Customer::orderFood(Food* food) {
    if (!isFull()) {
        for (const Food* orderedFood : foods) {
            if (orderedFood == food) {
                // Food already ordered, do nothing
                return;
            }
        }
        foods.push_back(food);
        food->addCustomer(this);
    }
}

void Customer::returnFood(Food* food) {
    auto it = std::find(foods.begin(), foods.end(), food);
    if (it != foods.end()) {
        foods.erase(it);
        food->removeCustomer(this);
    }
}
std::string Customer::getName() const {
    return name;
}

int Customer::getId() const {
    return id;
}