#ifndef Error_H
#define Error_H
#include <iostream>

class Error{
public:
    static void error_and_exit(const char *);
    static void warning(const char *);

};

#endif