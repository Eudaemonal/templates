#include <iostream>

int main(int argc, char *argv[]){
    try{

        return EXIT_SUCCESS;
    }catch(std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }
}
