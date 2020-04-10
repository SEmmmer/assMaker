#include<iostream>

class Danmaku {
public:
    static void setStartTime(double &time) {
        _time = time;
    }

    static bool uidcmp(std::string &uid) {
        bool equal = true;
        for (int i = 0; i < uid.length(); ++i) {
            if (uid[i] != _uid[i]) {
                equal = false;
                break;
            }
        }
        return equal;
    }

private:
    static double _startTime;
    static double _time;
    static std::string _uid;
    static std::string _content;
};

int main() {
    return 0;
}