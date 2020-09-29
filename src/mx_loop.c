//
// Created by Soso Janashvili on 9/25/20.
//

#include "../inc/ush.h"

void mx_loop() {
    char *line = mx_strnew(1);
    size_t bufsize = 0;
    //t_line ln;

    while (true) {
        mx_printstr("u$h> ");
        getline(&line, &bufsize, stdin);
        mx_parse_line(line);

        if (line)
            mx_strdel(&line);
    }
}
