#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <term.h>


int	main()
{
	int seconds;
	int minutes;
	int hours;
	int d;

	d = 1;
	printf("Set time: HH MM SS\n");
	scanf("%d %d %d", &hours, &minutes, &seconds);
	if(hours > 23 || minutes > 59 || seconds > 59)
	{
		printf("Error code: Too much time on your hands!");
		exit(0);
	}
	while(1)
	{
		seconds++;
		if(seconds > 59)
		{
			minutes++;
			seconds = 0;

		}
		if(minutes > 59)
		{
			hours++;
			minutes = 0;
		}
		if(hours > 23)
		{
			hours = 0;
		}
		printf("%02d:%02d:%02d\n", hours, minutes, seconds);
		sleep(d);
		system("clear");
	}
	return (0);
}