#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include "drawing.h"
#include "move.h"
#include "scale.h"
#include "turn.h"
#include "load_file.h"

enum task
{
    INIT,
    LOAD_FILE,
    DRAW,
    MOVE,
    SCALE,
    TURN,
    QUIT
};



struct request
{
    task t;
    union
    {
        struct load_file load_f;
        struct draw dr;
        struct move mo;
        struct scale sc;
        struct turn tu;
    };
};

int task_manager(request args);

#endif // TASK_MANAGER_H
