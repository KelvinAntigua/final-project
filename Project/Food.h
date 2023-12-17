// Food.h
#ifndef FOOD_H
#define FOOD_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


class Customer; 

class Food {
    private:
    std::string type;
    int id;
    std::vector<Customer*> customers; 

public:
    
    Food();

    
    Food(std::string type, int id);

    
    std::string getType() const;
    int getId() const;
    std::vector<Customer*> getCustomers() const;

    
    void setType(std::string type);
    void setId(int id);

    
    bool operator==(const Food& other) const;

  
    friend std::ostream& operator<<(std::ostream& os, const Food& food);

   
    void display() const;  
    int getNumCustomers() const;  
    void cancelFood();  
    void addCustomer(Customer* customer);  
    void removeCustomer(Customer* customer);  
    std::string getName() const;
    //double getPrice() const;

}; 


#endif // FOOD_H
