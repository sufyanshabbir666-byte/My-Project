#include <iostream>
#include <string>
using namespace std;

class LoyaltyCard {
private:
    string customerName;
    int stamps;

public:
    // Constructor
    LoyaltyCard(string customerName) {
        this->customerName = customerName;
        this->stamps = 0;
    }

    // Getter
    int getStamps() const {
        return stamps;
    }

    // Setter: adds 1 stamp, triggers reward at 10
    void addStamp() {
        stamps++;
        if (stamps == 10) {
            cout << "Congratulations " << customerName << "! You earned a free coffee!" << endl;
            stamps = 0;
        }
    }
};

int main() {
    LoyaltyCard card("Sara");
    for (int i = 0; i < 10; i++) {
        card.addStamp();
    }
    cout << "Current Stamps: " << card.getStamps() << endl;

    return 0;
}
