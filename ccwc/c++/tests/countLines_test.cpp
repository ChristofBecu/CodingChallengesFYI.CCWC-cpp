#include "file.hpp"
#include <iostream>
#include <string>
#include <cassert>
#include <vector>

void test_countLines(std::string filename, int expected) {
    file::openFile(filename);
    auto result = file::countLines();
    file::closeFile();
    assert(result == expected && "Test failed: countLines did not return the expected result");
    std::cout << "Test passed for file: " << filename << std::endl;
}

int main() {
    try {
        std::vector<std::pair<std::string, int>> testData = {
                {"./test_data/capital.txt", 5},
                {"./test_data/state.txt", 5},
                {"./test_data/empty.txt", 0}
            };

        for (auto& [filename, expected] : testData) {
            test_countLines(filename, expected);
        }
        
    } catch (const std::exception& e) {
        std::cerr << "Test failed with exception: " << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "Test failed with unknown exception" << std::endl;
        return 1;
    }
    return 0;
}
