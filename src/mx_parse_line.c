//
// Created by ss on 9/25/20.
//

#include "../inc/ush.h"

void mx_parse_line(char *line) {

    char **arr = mx_strsplit(line, ' ');

    mx_del_strarr(&arr);
}
