#include <functional>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class RangeSwitch {
public:
    void method(std::string key, int &result) {
        static const std::unordered_map<std::string,std::function<void(int&)>> m{
            {"one",   [](int& result){ result = 1; }},
            {"two",   [](int& result){ result = 2; }},
            {"three", [](int& result){ result = 3; }},
        };
        static const auto end = m.end();
        auto it = m.find(key);
        if (it != end) {
            it->second(result);
        } else {
            result = -1;
        }
    }
};

int main() {
    RangeSwitch rangeSwitch;
    int result;
    std::vector<std::string> strings{"one", "two", "three", "foobar"};
    for (const auto& s : strings) {
        rangeSwitch.method(s, result);
        std::cout << s << " " << result << std::endl;
    }
}