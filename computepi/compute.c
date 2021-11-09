#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#include "compute.h"

/* Number of hits */
unsigned int hits;

/* Mutex Semaphore */
pthread_mutex_t mutex;

/* Thread function */
void * thread_function(void * data) {

    /* The input variable contains the number of points that the thread must
     * calculate */
    int points = *((int *)data);    

    /* TODO: Implement the loop that obtains the random points and counts how
     * many of those lay within the circumference of radius 1 */

    /* TODO: Add the count to the global variable hits in mutual exclusion */
    hits = hits + points;

    return NULL;

}


void compute(int npoints, int nthreads) {

    /* TODO: Erase the following line: */
    printf("compute(%d, %d)\n", npoints, nthreads);

    /* TODO: Launch the threads that will count the points */

    /* TODO: Wait for all threads to finish */

    /* TODO: print the ratio of points that meet the criteria */

    /* The following print string can be used to print the calculated value:
     * printf("%.8f\n", VALUE_OF_PI);
     * where VALUE_OF_PI is the floating-point value to be printed.
     */

}
