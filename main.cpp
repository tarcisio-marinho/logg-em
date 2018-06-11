#include <iostream>
#include <string>
#include <cstring>
#include "error.h"
#include "system.h"

void create_log_file(){
    FILE * f = fopen(log_path, "w");
    if(f != NULL){
        Error::print_msg("[+] Log file created!");
    }else{
        Error::error_and_exit("[-] Error creating log file, exiting...");
    }
}

void logg(const char *msg){
    FILE * f = fopen(log_path, "a");

    if (f == NULL){
        Error::error_and_exit("Couldnt open file");
    }
}


int main(int argc, char *argv[]){
    create_log_file();
}