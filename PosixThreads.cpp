/*---------------------------------------------------------------------------
Copyright (C), 2022-2023, Sara Echeverria (bl33h)
@author Sara Echeverria
FileName: PosixThreads
@version: I
Creation: 11/08/2022
Last modification: 13/08/2022
------------------------------------------------------------------------------*/

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <errno.h>
#include <unistd.h>

// Main method for both threads
int main{
    pthread_t tid, tid1;
    t = pthread_create(&tid, NULL, sub, (void *)message);
    t1 = pthread_create(&tid1, NULL, sub1, (void *)message1);
    pthread_join( tid, NULL);
    pthread_join( tid1, NULL);
    exit(0);
    }
