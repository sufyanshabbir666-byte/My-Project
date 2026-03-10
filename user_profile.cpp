#include <iostream>
#include <string>
using namespace std;

class UserProfile {
private:
    string username;
    string password;

public:
    // Constructor
    UserProfile(string username, string password) {
        this->username = username;
        this->password = password;
    }

    // Getter (no getter for password - security risk)
    string getUsername() const {
        return username;
    }

    // Setter with credential verification
    void updatePassword(string oldPassword, string newPassword) {
        if (oldPassword == password) {
            password = newPassword;
            cout << "Password updated." << endl;
        } else {
            cout << "Access Denied: Incorrect current password." << endl;
        }
    }
};

int main() {
    UserProfile user("ali_dev", "qwerty123");
    user.updatePassword("wrongpass", "newSecurePass!");
    user.updatePassword("qwerty123", "newSecurePass!");

    return 0;
}
