#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

// Tính entropy Shannon
double calculate_entropy(const string &text) {
    if (text.empty()) return 0.0;

    map<char, int> freq;

    for (char c : text) {
        freq[c]++;
    }

    double entropy = 0.0;
    int n = text.length();

    for (auto pair : freq) {
        double p = (double)pair.second / n;
        entropy -= p * log2(p);
    }

    return entropy;
}

// Tính redundancy
double calculate_redundancy(const string &text, int alphabet_size = 256) {
    if (text.empty()) return 0.0;

    double hmax = log2(alphabet_size);
    double h = calculate_entropy(text);

    return 1.0 - (h / hmax);
}

int main() {
    string text;
    getline(cin, text);

    cout << "Entropy: " << calculate_entropy(text) << endl;
    cout << "Redundancy: " << calculate_redundancy(text) << endl;

    return 0;
}
