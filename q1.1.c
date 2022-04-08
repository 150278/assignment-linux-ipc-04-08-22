/*
1.write a program that creates a shared memory region and displays shared memory id and also
print address at which shared area in this process starts from.
Abhishek sahu
shm_writer


*/




#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/shm.h>

int main()
{
char *p;

int id;

id=shmget(48,250,IPC_CREAT|0644);

if(id<0)
{
perror("shmget");
return 0;
}


printf("id=%d\n",id);

p=shmat(id,0,0);

printf("Enter the data");
scanf("%s",p);
return 0;
}