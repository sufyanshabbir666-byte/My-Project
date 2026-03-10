#include <iostream>
using namespace std;

class ParkingMeter {
private:
    int timeRemaining;
    const int maxTime = 120;

public:
    // Constructor: initializes timeRemaining to 0
    ParkingMeter() {
        timeRemaining = 0;
    }

    // Getter
    int getTimeRemaining() const {
        return timeRemaining;
    }

    // Updater with capacity capping
    void addTime(int minutes) {
        if (timeRemaining + minutes > maxTime) {
            timeRemaining = maxTime;
            cout << "Max time reached. Excess coins refunded." << endl;
        } else {
            timeRemaining += minutes;
        }
    }
};

int main() {
    ParkingMeter meter;
    meter.addTime(60);
    meter.addTime(90);
    cout << "Time on meter: " << meter.getTimeRemaining() << " mins" << endl;

    return 0;
}
