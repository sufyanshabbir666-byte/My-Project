#include <iostream>
#include <string>
using namespace std;

class SnackSlot {
private:
    string snackName;
    double price;
    int stockQuantity;

public:
    // Constructor
    SnackSlot(string snackName, double price, int stockQuantity) {
        this->snackName = snackName;
        this->price = price;
        this->stockQuantity = stockQuantity;
    }

    // Getters
    string getSnackName() const {
        return snackName;
    }

    double getPrice() const {
        return price;
    }

    int getStockQuantity() const {
        return stockQuantity;
    }

    // Setter with stock validation
    void buySnack(int quantity) {
        if (stockQuantity >= quantity) {
            stockQuantity -= quantity;
            cout << "Dispensing..." << endl;
        } else {
            cout << "Transaction failed: Insufficient stock!" << endl;
        }
    }
};

int main() {
    SnackSlot slot("Chips", 1.50, 5);
    slot.buySnack(3);
    slot.buySnack(4);
    cout << "Remaining Stock: " << slot.getStockQuantity() << endl;

    return 0;
}
