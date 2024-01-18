#include <iostream>
#include <cstdint>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> split(const std::string& s, char delimiter) {
    std::vector<std::string> tokens;
    std::istringstream token_stream(s);
    std::string token;

    while (std::getline(token_stream, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
}

std::string solution(std::string& binary_text) {
    std::string b;

    for (std::string bits: split(binary_text, ' ')) {
        uint8_t c {static_cast<uint8_t>(std::stoi(bits, nullptr, 2))};
        c = c ^ 0b00000011;
        c = c << 4 | c >> 4;
        b.push_back(c);
    }

    return b;
}

int main() {
    std::string bytes{"10010110 11110111 01010110 00000001 00010111 00100110 01010111 00000001 00010111 01110110 01010111 00110110 11110111 11010111 01010111 00000011"};
    std::cout << solution(bytes);
}