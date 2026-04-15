#include <cmath>
#include <string>

using namespace std;

double calculate_entropy(const string &text) {
    if (text.empty()) return 0.0;

    int freq[256] = {0};
    for (char c : text) {
        freq[(unsigned char)c]++;
    }

    double H = 0.0;
    int n = text.size();

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            double p = (double)freq[i] / n;
            H -= p * log2(p);
        }
    }

    return H;
}

double calculate_redundancy(const string &text, int alphabet_size = 256) {
    if (text.empty()) return 0.0;

    double H = calculate_entropy(text);
    double Hmax = log2(alphabet_size);

    if (Hmax == 0) return 0.0; 

    return 1.0 - (H / Hmax);
}
