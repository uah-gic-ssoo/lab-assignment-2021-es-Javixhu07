#include <stdio.h>
#include <stdlib.h>

#include "compute.h"

int main(int argc, char * argv[]) {

    int points, threads;
    char * endptr = NULL;

    /* First, we have to check the number of arguments */

    if (argc != 3) {

        printf("error: invalid number of arguments\n"
               "usage: %s points threads\n"
               "\tpoints: number of points to use [1-500000000]\n"
               "\tthreads: number of threads to use [1-8]\n", argv[0]);
        return 1;

    }

    /* Now we have to convert and check argument 1, the number of points */

    /* strtol converts a string to an integer value */
    points = strtol(argv[1], &endptr, 10);

    if (*endptr != '\0') {

        printf("error: %s cannot be casted to a decimal integer\n", argv[1]);
        return 1;

    } else if (points <= 0 || points > 500000000) {

        printf("error: points %s is out of range\n", argv[1]);
        return 1;

    }

    /* And finally argument 2, the number of threads */

    threads = strtol(argv[2], &endptr, 10);

    if (*endptr != '\0') {

        printf("error: %s cannot be casted to a decimal integer\n", argv[2]);
        return 1;

    } else if (threads <= 0 || threads > 8) {

        printf("error: threads %s is out of range\n", argv[2]);
        return 1;

    }

    compute(points, threads);

    return 0;

}
