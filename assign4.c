#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

pthread_t tid;
int id;
void* thread1(void *arg){
in thread=(int)arg;
printf("newly created thread is executing\n");
printf("\n Thread id : %lu\n",thread);

id=getppid();
printf("\n Parent process id : %lu\n",id);
while(1);

}

int main(){
pthread_t thread;
int rc,t=0;
printf("creating thread\n");
rc=pthread_create(&thread,NULL,thread1,thread);

sleep(6);


return 0;
}

