#ifndef ARGUMENTS_H
#define ARGUMENTS_H

#include <string>

namespace arguments {
    extern const char* ARG_COUNT_BYTES;
    extern const char* ARG_COUNT_LINES;

    extern bool count_bytes;
    extern bool count_lines;

    extern const char *usage;
    extern std::string filename;

    void parse(int argc, char* argv[]);

    void showUsage();
}


#endif