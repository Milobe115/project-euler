#include <iostream>
#include <list>

#define PARAM 1

void process(long int n){

    using namespace std;

    cout << n << endl;

    list<long int> factors;

    for (long int i = 2; i < n; i++){
        if (n%i == 0){
            cerr << "~ " << i << endl;
            bool is_prime = true;
            for (auto it = factors.begin(); it != factors.end(); it++){
                is_prime = is_prime && (i % *it);
                cerr << "is_prime : " << is_prime << endl;
            }

            if (is_prime) factors.push_front(i);
        }
    }

    cout << factors.front() << endl;
}


void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process(atol(argv[1]));
}
