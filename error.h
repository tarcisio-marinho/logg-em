#ifndef Error
#define Error
#include <iostream>

class Error{
public:
    static void error_and_exit(const char *);
    static void warning(const char *);

};

#endif