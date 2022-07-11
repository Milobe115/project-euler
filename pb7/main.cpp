#include <iostream>
#include <list>

#define PARAM 1

bool test_prime(long val, std::list<long> &primes){

    bool is_prime = true;

    for (auto it = primes.begin(); it != primes.end(); it++){
        is_prime = is_prime && (val % *it);
    }

    return is_prime;
}

void process(int limit){
    using namespace std;
    
    list<long> primes;
    primes.push_front(2);

    long val = 3;

    while (primes.size() < limit){
        if (test_prime(val, primes)) {
            primes.push_front(val);
        }
        val++;
    }

    cout << endl << primes.front() << endl;
}


void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process(atoi(argv[1]));
}
