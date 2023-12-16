#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Food;
class Customer {
private:
std::string name;
    int id;
    int maxFoods;
    std::vector<Food*> foods;
public:
 // Default Constructor
    Customer();

    // Parameter Constructor
    Customer(std::string name, int id, int maxFoods);

    // Accessor functions
    std::string getName() const;
    int getId() const;
    int getMaxFoods() const;
    std::vector<Food*> getFoods() const;

    // Mutator functions
    void setName(std::string name);
    void setId(int id);
    void setMaxFoods(int maxFoods);

    // Overload ==
    bool operator==(const Customer& other) const;

    // Overload <<
    friend std::ostream& operator<<(std::ostream& os, const Customer& customer);
     // Container Member Functions
    void display() const;  // Print foods data (formatted for easy reading).
    int getNumFoods() const;  // Return count of food objects in foods.
    bool isFull() const;  // Return true if the customer cannot order more food.
    void overbook();  // Increment maxFoods by one.
    void clear();  // Empty foods. Remove customer from all food objects.
    void orderFood(Food* food);  // Parameter: food object
    void returnFood(Food* food);  // Parameter: food object

};

#endif