#include<pthread.h>
#include <sys/time.h>
#include <unistd.h>
#include <inttypes.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#define TEST_BLKSIZE (200<<10)

int *readfd;
int num_files;
pthread_key_t kkey;

void read_test_init(){

        readfd = malloc((10<<10)*sizeof(int));

}
void func1(){
        while(1){
        char *p=pthread_getspecific(kkey);
        printf("thread 1's key=%s\n",p);}
}
void func2(){
        while(1){
int num_files;
pthread_key_t kkey;

void read_test_init(){

        readfd = malloc((10<<10)*sizeof(int));

}
void func1(){
        while(1){
        char *p=pthread_getspecific(kkey);
        printf("thread 1's key=%s\n",p);}
}
void func2(){
        while(1){
        char *p=pthread_getspecific(kkey);
        printf("thread 2's key=%s\n",p);
}
}
void *lfs_test_read(void *arg){
        int i;
        int nums,size=200<<10;
        if((int)arg==1){
        pthread_setspecific(kkey,"hello ,this is thread 1");
                func1();
        }else {
        pthread_setspecific(kkey,"hello ,this is thread 2");
         func2();
        }return NULL;
}
#define THREAD_NUMS 2ull
int main(){
        int i=0,randfd[THREAD_NUMS];
        uint64_t bw;
        char fname[6]={NULL};
        pthread_t tids[THREAD_NUMS];
        uint64_t stime,ctime;
        for(i=0;i<THREAD_NUMS;i++){
                randfd[i] = i;
        }
        pthread_key_create(&kkey,NULL);
        for(i=0;i<THREAD_NUMS;i++){
        pthread_create(&tids[i],NULL,lfs_test_read,(void *)randfd[i]);
        }
        for(i=0;i<THREAD_NUMS;i++){
    pthread_join(tids[i],NULL);
        }
  }
