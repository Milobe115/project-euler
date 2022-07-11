#include <iostream>

#define PARAM 1

int reverse(int n){
    int rem, rev = 0;
    while (n)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}

    return rev;
}

void process(int bound){
    using namespace std;

    int biggest = 0;

    for (int i = 1; i < bound; i++){
        for (int j = i; j < bound; j++){
            int val = i * j;

            if ((val == reverse(val)) && val > biggest) biggest = val;
        }
    }

    cout << biggest << endl;

}


void usage(char *cmd){
    std::cerr << "Usage : " << cmd << " n" << std::endl;
}

int main(int argc, char **argv){
    if (argc != PARAM + 1) usage(argv[0]);
    else process(atoi(argv[1]));
}
