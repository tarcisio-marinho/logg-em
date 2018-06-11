#include "error.h"

void Error::error_and_exit(const char * msg){
    std::cerr << msg << std::endl;
    exit(-1);
}


void Error::warning(const char * msg){
    std::cout << msg << std::endl;
}

void Error::print_msg(const char *msg){
    std::cout << msg << std::endl;
}