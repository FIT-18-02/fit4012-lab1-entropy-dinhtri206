#include <vector>
#include <cmath>
using namespace std;

double calculate_entropy(const vector<double>& probs) {
    double H = 0.0;
    for (double p : probs) {
        if (p > 0) {
            H -= p * log2(p);
        }
    }
    return H;
}

double calculate_redundancy(const vector<double>& probs) {
    double H = calculate_entropy(probs);
    double Hmax = log2(probs.size());
    return 1 - (H / Hmax);
}
