// Food.h
#ifndef FOOD_H
#define FOOD_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


class Customer; // Forward declaration of the Customer class

class Food {
    private:
    std::string type;
    int id;
    std::vector<Customer*> customers; // STL container of pointers to Customer objects

public:
    // Default Constructor
    Food();

    // Parameter Constructor
    Food(std::string type, int id);

    // Accessor functions
    std::string getType() const;
    int getId() const;
    std::vector<Customer*> getCustomers() const;

    // Mutator functions
    void setType(std::string type);
    void setId(int id);

    // Overload ==
    bool operator==(const Food& other) const;

    // Overload <<
    friend std::ostream& operator<<(std::ostream& os, const Food& food);

    // Container Member Functions
    void display() const;  // Print formatted customers data.
    int getNumCustomers() const;  // Return count of customers objects in customers.
    void cancelFood();  // Empty customers. Remove this food from every customer object.
    void addCustomer(Customer* customer);  // Parameter: customer object
    void removeCustomer(Customer* customer);  // Parameter: customer object
    std::string getName() const;
    //double getPrice() const;

}; 


#endif // FOOD_H
