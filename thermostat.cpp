#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Thermostat {
private:
    string roomName;
    double temperature;

public:
    Thermostat(string roomName, double temperature) {
        this->roomName = roomName;
        this->temperature = 22.0;
        setTemperature(temperature);
    }

    double getTemperature() const {
        return temperature;
    }

    string getRoomName() const {
        return roomName;
    }

    void setTemperature(double temp) {
        if (temp < 16.0 || temp > 30.0) {
            cout << fixed << setprecision(1);
            cout << "Error: " << temp << "C is outside the hardware limits (16.0C - 30.0C)." << endl;
            cout << "Current Temp: " << temperature << "C" << endl;
        } else {
            temperature = temp;
        }
    }
};

int main() {
    Thermostat t("Living Room", 22.5);
    t.setTemperature(35.0);
    t.setTemperature(18.0);
    cout << fixed << setprecision(1);
    cout << "Current Temp: " << t.getTemperature() << "C" << endl;

    return 0;
}
