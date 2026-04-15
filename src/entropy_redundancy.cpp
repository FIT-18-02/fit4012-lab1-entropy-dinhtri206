#include <cmath>
#include <map>
#include <string>
using namespace std;

double calculate_entropy(const string &text) {
    if (text.empty()) return 0.0;

    map<char, int> freq;
    for (char c : text) {
        freq[c]++;
    }

    double entropy = 0.0;
    int n = text.size();

    for (auto &p : freq) {
        double prob = (double)p.second / n;
        entropy -= prob * log2(prob);
    }

    return entropy;
}

double calculate_redundancy(const string &text, int alphabet_size = 256) {
    if (text.empty()) return 0.0;

    double H = calculate_entropy(text);
    double Hmax = log2(alphabet_size);

    return Hmax - H;
}
