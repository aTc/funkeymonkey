#ifndef FUNKEYMONKEY_MODULE_H
#define FUNKEYMONKEY_MODULE_H

#include <linux/input.h>

#ifdef __cplusplus
extern "C" {
#endif

void init(char const** argv, unsigned int argc);
void handle(input_event const& e);
void destroy();

#ifdef __cplusplus
}
#endif

#endif

