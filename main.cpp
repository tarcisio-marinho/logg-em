#include <iostream>
#include <string>
#include <cstring>
#include "error.h"
#include "system.h"


const char *log_file_path_linux = "/tmp/";
const char *log_file_path_windows = "C:\\Users\\<username>\\AppData\\Local\\Temp";

void create_log_file(){
    const char *log_path;

    if(PLATFORM_NAME == "windows"){
        log_path = log_file_path_windows;
    }else{
        log_path = log_file_path_linux;
    }


    FILE * f = fopen(log_path, "w");
    if(f != NULL){
        Error::print_msg("[+] Log file created!");
    }else{
        Error::error_and_exit("[-] Error creating log file, exiting...");
    }
}

void logg(const char * path, const char *open_type){
    FILE * f = fopen(path, open_type);

    if (f == NULL){
        Error::error_and_exit("Couldnt open file");
    }
}


int main(int argc, char *argv[]){
    create_log_file();
}