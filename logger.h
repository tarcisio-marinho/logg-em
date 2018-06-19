#ifndef _LOGGER_
#define _LOGGER_

#include <iostream>
#include <string>
#include <cstring>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "error.h"
#include "system.h"
#include "utils.h"
#include "logger.h"

class Logger{
public:

    Logger();
    void start();
    void stop();
    void keyboard();
    void mouse();
    
private:
    void create_log_folder();
    void create_log_file();
    void check_existing_log_file();
    void logg();
};

#endif