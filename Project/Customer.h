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
 
    Customer();

  
    Customer(std::string name, int id, int maxFoods);

    
    std::string getName() const;
    int getId() const;
    int getMaxFoods() const;
    std::vector<Food*> getFoods() const;

    
    void setName(std::string name);
    void setId(int id);
    void setMaxFoods(int maxFoods);

    
    bool operator==(const Customer& other) const;

   
    friend std::ostream& operator<<(std::ostream& os, const Customer& customer);
 
    void display() const;  
    int getNumFoods() const;  
    bool isFull() const;  
    void overbook();  
    void clear();  
    void orderFood(Food* food);  
    void returnFood(Food* food);  

};

#endif