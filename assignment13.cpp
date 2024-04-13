#include <iostream>
#include <string>

using namespace std;

// Base class for all items on the menu
class Item {
protected:
    string name;
    double price;
public:
    Item(string n, double p) : name(n), price(p) {}
    virtual ~Item() {}
    virtual double getPrice() const { return price; }
    virtual void display() const {
        cout << name << " - Rs." << price << endl;
    }
};

// Derived class representing food items
class FoodItem : public Item {
public:
    FoodItem(string n, double p) : Item(n, p) {}
};

// Derived class representing drinks
class DrinkItem : public Item {
public:
    DrinkItem(string n, double p) : Item(n, p) {}
};

// Derived class representing desserts
class DessertItem : public Item {
public:
    DessertItem(string n, double p) : Item(n, p) {}
};

// Class to manage the customer's order
class Order {
private:
    double total;
public:
    Order() : total(0) {}
    void addItem(const Item& item) {
        total += item.getPrice();
    }
    double getTotal() const {
        return total;
    }
};

int main() {
    // Sample usage
    FoodItem burger("Cheeseburger", 50);
    DrinkItem cola("Cola", 40);
    DessertItem cake("Chocolate Cake", 100);

    Order order;
    order.addItem(burger);
    order.addItem(cola);
    order.addItem(cake);

    cout << "Total bill: Rs. " << order.getTotal() << endl;

    return 0;
}
