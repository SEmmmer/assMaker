#include <map>
#include <iostream>

class Danmaku {
private:
    std::string _uid = "";
    std::string _time = "";
    std::string _content = "";
    std::string _startTime = "";

public:
    void setStartTime(std::string &startTime) {
        _startTime = startTime;
        std::cout << "start time = " << _startTime << std::endl;
    }

    bool uidcmp(std::string &uid) {
        bool equal = true;
        for (int i = 0; i < uid.length(); ++i) {
            if (uid[i] != _uid[i]) {
                equal = false;
                break;
            }
        }
        return equal;
    }
};

int main() {
    Danmaku i_danmaku;
    std::string startTime = "1586262306621";

    i_danmaku.setStartTime(startTime);

    return 0;
}