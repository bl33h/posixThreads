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
#include <iostream>
using namespace std;

// Variables
int arr[] = {1,2,3,4,5,6,7,7};
int halfArr = completeArr/2;
int completeArr = sizeof arr/sizeof arr[0];
void *sub(void *ptr);
void *sub1(void *ptr);


// Main method for both threads
int main(){
    pthread_t tid, tid1;
    pthread_create(&tid, NULL, sub, (void *)message);
    pthread_create(&tid1, NULL, sub1, (void *)message1);
    pthread_join( tid, NULL);
    pthread_join( tid1, NULL);
    exit(0);
    }

// First thread method with output
    void *sub(void *ptr){
    char *message;
    message = (char *) ptr;
    printf("%s \n",message);
    int arr[halfArr];
    int firstOutput;
    for (int i = 0; i < halfArr; i++){
        arr[i] = arr[i];
        printf("Numbers placed in the first thread: %d\n", arr[i]);
        total = total + arr[i];
    }
    printf("Value of the first thread: %d\n\n", total);
    return 0;
}
// Second thread method with output
    void *sub1(void *ptr){
    char *message;
    message = (char *) ptr;
    printf("%s \n",message);
    int arr2[halfArr];
    int secondOutput;
    for (int i = 0; i < halfArr; i++){
        arr[i] = arr[i];
        printf("Numbers placed in the second thread: %d\n", arr[i]);
        total = total + arr[i];
    }
    printf("Value of the second thread: %d\n\n", total);
    return 0;


