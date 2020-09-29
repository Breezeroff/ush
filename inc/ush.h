//
// Created by Soso Janashvili on 9/25/20.
//

#ifndef USH_USH_H
#define USH_USH_H

#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include "../libmx/inc/libmx.h"

typedef struct s_line {
    char *command;

}              t_line;

void mx_loop();
void mx_parse_line(char *line);

#endif //USH_USH_H
