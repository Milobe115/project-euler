#include <iostream>

#define PARAM 1

void process(int value){
    using namespace std;

    for (int i = 1; i < value; i++){
        for (int j = 1; i+j < value; j++){
            int k = value - j - i;

            if (i * i + j * j == k * k) cout << i << " " << j << " " << k << endl;
        }
    }
}


void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process(atoi(argv[1]));
}
