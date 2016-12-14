#ifndef _UTIL_H
#define _UTIL_H
#define handle_error(msg) \
           do { perror(msg); exit(EXIT_FAILURE); } while (0)
void print();

#endif
