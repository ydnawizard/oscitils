#include <stdio.h>
#include <time.h>

int timeSince[2]={0,0};

void getSoberTime(int* timeSince){
	int days;
	time_t now=time(0);
	time_t sober_date=1749686400;
	time_t sober_time=difftime(now,sober_date);
	struct tm * sober_days;
	sober_days = localtime(&sober_time);
	timeSince[0]=sober_days->tm_year-70;
	timeSince[1]=sober_days->tm_yday;
}


int main(){
	getSoberTime(timeSince);
	printf("%d %s %d %s", timeSince[0],"years and",timeSince[1],"days \n");
	return 0;
}
