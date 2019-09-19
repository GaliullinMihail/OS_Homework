#include <stdio.h>
#include <pthread.h>
#define MAX_INT 9223372036854775807 
void *consumer(void *argp){
long long *temp;
temp = (long long*) argp;

while (1){
if (temp = MAX_INT){
sleep(5);
}
temp++;
}

return 0;
}
void *producer(void *argp){
long long *temp;
temp = (long long*) argp;
while (1){
if (temp = 0){
sleep(5);
}
temp--;
}
return 0;
}

int main(){
long long i;
pthread_t thread_cons, thread_prod;
pthread_create(&thread, NULL, thread_cons, &i);
pthread_create(&thread, NULL, thread_prod, &i);
pthread_join(thread_prod, NULL);
pthread_join(thread_cons, NULL)



return 0;
}
