#include <iostream>
#include <string>
#include <cstring>
#include "error.h"

void logg(const char * path, const char *open_type){
    FILE * f = fopen(path, open_type);

    if (f == NULL){
        Error::error_and_exit("Couldnt open file");
    }
}


int main(int argc, char *argv[]){
    
}