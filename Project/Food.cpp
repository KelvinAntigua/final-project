// Food.cpp
#include "Food.h"
#include "Customer.h" 


Food::Food() : type(""), id(0) {}


Food::Food(std::string type, int id) : type(type), id(id) {}


std::string Food::getType() const { return type; }

int Food::getId() const { return id; }

std::vector<Customer*> Food::getCustomers() const { return customers; }


void Food::setType(std::string type) { this->type = type; }

void Food::setId(int id) { this->id = id; }


bool Food::operator==(const Food& other) const {
    return (type == other.type) && (id == other.id);
}


std::ostream& operator<<(std::ostream& os, const Food& food) {
    os << "Type: " << food.getType() << "\n";
    os << "ID: " << food.getId() << "\n";
    os << "Customers:\n";
    for (const Customer* customer : food.getCustomers()) {
        os << "  - " << customer->getName() << " (ID: " << customer->getId() << ")\n";
    }
    return os;
}



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
    return type; 
}

/*double Food::getPrice() const {
    return price; // Replace 'price' with the actual member variable storing the price
}*/
