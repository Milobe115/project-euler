#include <iostream>

#define PARAM 0

void process(){
    using namespace std;

    long one_to_twenty[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    long val = 1;

    for (long i = 0; i < 20; i++) {
        for (long j = i + 1; j < 20; j++) {
            if (one_to_twenty[j] % one_to_twenty[i] == 0) one_to_twenty[j] /= one_to_twenty[i]; 
        }

        val *= one_to_twenty[i];
    }

    for (int i = 0; i < 20; i++){
        cout << one_to_twenty[i] << ",";
    }

    cout << endl << val << endl;
}


void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process();
}
