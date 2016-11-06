#include <stdio.h>
#include <pthread.h>

void create_multile_thread(void *thread_id)
{
	
	int t;
	
	for (t = 0;t < ;t++)
	{
		print ("This is pthread %d-%d\n",*((int*)thread_id),t);
	}
}
int main()
{
	int ret,i;
	int thread_num = 5;
	int thread_id = 5;
	pthread_t thread[thread_num];
	for (i = 0;i < thread_num;i++)
	{
		ret = pthread_create(&thread[i],NULL,(void*)create_multile_thread,&thread_id);
		if (ret != 0)
		{
			printf("Create pthread %d failed!Return code is %d\n",i,ret);
			exit(0);
		}
	}
	
	for (i = 0;i < thread_num;i++)
	{
		printf("This is the main PROCESS(THREAD)!\n");
	}
	
	for (i = 0;i < 10;i++)
	{
		pthread_join(thread[i],NULL);
	}
	return 0;
}