#include <stdio.h>
#include <pthread.h>
void *MyThread(void *argp){
int* temp;
temp = (int *) argp;
printf("%d something	\n", *temp);
return 0;
}

int main(){
pthread_t thread;
for (int i = 1; i < 50; i++){
pthread_create(&thread, NULL, MyThread, &i);
printf("thread created\n");
pthread_join(thread, NULL);
}



return 0;
}
