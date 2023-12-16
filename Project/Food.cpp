// Food.cpp
#include "Food.h"
#include "Customer.h" // Include the actual Customer class header file

// Default Constructor
Food::Food() : type(""), id(0) {}

// Parameter Constructor
Food::Food(std::string type, int id) : type(type), id(id) {}

// Accessor functions
std::string Food::getType() const { return type; }

int Food::getId() const { return id; }

std::vector<Customer*> Food::getCustomers() const { return customers; }

// Mutator functions
void Food::setType(std::string type) { this->type = type; }

void Food::setId(int id) { this->id = id; }

// Overload ==
bool Food::operator==(const Food& other) const {
    return (type == other.type) && (id == other.id);
}

// Overload <<
std::ostream& operator<<(std::ostream& os, const Food& food) {
    os << "Type: " << food.getType() << "\n";
    os << "ID: " << food.getId() << "\n";
    os << "Customers:\n";
    for (const Customer* customer : food.getCustomers()) {
        os << "  - " << customer->getName() << " (ID: " << customer->getId() << ")\n";
    }
    return os;
}

// Container Member Functions

void Food::display() const {
    std::cout << "Food Type: " << type << "\n";
    std::cout << "Food ID: " << id << "\n";
    std::cout << "Customers:\n";
    for (const Customer* customer : customers) {
        std::cout << "  - " << customer->getName() << " (ID: " << customer->getId() << ")\n";
    }
}



int Food::getNumCustomers() const {
    return customers.size();
}

void Food::cancelFood() {
    for (Customer* customer : customers) {
        customer->returnFood(this);
    }
    customers.clear();
}

void Food::addCustomer(Customer* customer) {
    for (const Customer* orderedCustomer : customers) {
        if (orderedCustomer == customer) {
            // Customer already ordered this food, do nothing
            return;
        }
    }
    customers.push_back(customer);
}

void Food::removeCustomer(Customer* customer) {
    auto it = std::find(customers.begin(), customers.end(), customer);
    if (it != customers.end()) {
        customers.erase(it);
    }
}
std::string Food::getName() const {
    return type; // Replace 'type' with the actual member variable storing the name
}

/*double Food::getPrice() const {
    return price; // Replace 'price' with the actual member variable storing the price
}*/
