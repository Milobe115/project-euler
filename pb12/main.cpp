#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <iterator>

#define PARAM 0

std::vector<int> generateFactors(int n) {
    std::vector<int> factors = { 1, n };
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i * i != n)
                factors.push_back(n / i);
        }
    }
 
    std::sort(factors.begin(), factors.end());
    return factors;
}

void process(){
    using namespace std;

    int n = 1;
    
    while (generateFactors((n*(n+1))/2).size() < 501){
      n++;
    }

    cout << "La réponse est : " << (n*(n+1))/2 << endl;
}


void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process();
}
