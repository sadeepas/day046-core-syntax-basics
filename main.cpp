// C++: Modern C++20 Core Fundamentals (Day 46)
// Day 46 ? Modern C++20 ? High-Performance Systems & DSA (Beginner)

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <algorithm>

class ComputationalEngine {
private:
    std::string name;
    std::vector<int> buffer;

public:
    ComputationalEngine(const std::string& n) : name(n) {
        std::cout << "[Engine Initialized] " << name << std::endl;
    }

    void addData(int val) {
        buffer.push_back(val);
    }

    void execute() const {
        std::cout << "=== " << name << " Execution ===" << std::endl;
        std::cout << "Buffer Elements: ";
        for (const auto& item : buffer) {
            std::cout << item << " ";
        }
        std::cout << "
Processed " << buffer.size() << " computational units." << std::endl;
    }
};

int main() {
    auto engine = std::make_unique<ComputationalEngine>("core-syntax-basics");
    for (int i = 1; i <= 6; ++i) {
        engine->addData(i * 15);
    }
    engine->execute();
    return 0;
}
