#include "gzstream.h"

using namespace std;

int main(int argc, char* argv[]) {
    if(argc > 1) {
        igzstream in(argv[1]);
        std::string line;
        while(std::getline(in, line)){
            std::cout << line << std::endl;
        }
    }
}
