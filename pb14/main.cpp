#include <iostream>

#define PARAM 1


long collatz_aux(long n){
    if (n%2){
        return 3*n + 1;
    } else {
        return n/2;
    }
}

int length_collatz(long start){
    int length = 1;
    while (start > 1){
        length ++;
        //std::cout << start << " > ";
        start = collatz_aux(start);
    }

    //std::cout << std::endl;

    return length;
}

void process(int limit){
    using namespace std;

    long longest_number = 1;
    int longest_length = 1;

    for (long i = 2; i < limit; i++){
        int length = length_collatz(i);

        if (length > longest_length){
            longest_length = length;
            longest_number = i;

            cout << "Le nouveau nombre le plus long est " << i << " avec une longueur de " << longest_length << endl;
        }
    }

    cout << longest_number << " " << longest_length << endl;
}


void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process(atoi(argv[1]));
}
