#include "logger.h"

Logger::Logger(){
    create_log_folder();
    check_existing_log_file();
}

void Logger::start(){
    
}


void Logger::stop(){
    
}


void Logger::keyboard(){
    
}


void Logger::mouse(){
    
}

void Logger::create_log_folder(){
    struct stat st = {0};
    // create directory
    if (stat(log_folder, &st) == -1) {
        mkdir(log_folder, 0700);
        Error::print_msg("[+] Log folder created!");
    }else{
        Error::print_msg("[*] Log folder already exist");
    }
}

void Logger::create_log_file(){
    FILE * f = fopen(log_path, "w");
    if(f != NULL){
        Error::print_msg("[+] Log file created!");
    }else{
        Error::error_and_exit("[-] Error creating log file, exiting...");
    }
    fclose(f);
}

void Logger::check_existing_log_file(){
    FILE * f = fopen(log_path, "r");
    if(f == NULL){
        create_log_file();
    }else{
        Error::print_msg("[*] Log file already exist");
    }
    fclose(f);
}

void Logger::logg(const char *msg){
    FILE * f = fopen(log_path, "a");

    if (f == NULL){
        Error::error_and_exit("Couldnt open file");
        fclose(f);
    }

    fprintf(f, msg);
    fclose(f);
}
