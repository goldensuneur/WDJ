#ifndef legacy_h
#define legacy_h

#include "julia.h"
#include "task.h"

void legacy(
    char* pixels,
    int w,
    int h,
    tasks_t * t,
    int taskIdx,
    double cR,
    double cI,
    int iter,
    int colorized
);

#endif
