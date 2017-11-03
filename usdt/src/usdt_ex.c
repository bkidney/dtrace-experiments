#include <unistd.h>

#include "usdt_provider_impl.h"
#include <usdt_provider.h>

int
main()
{
	clockinfo_t ci = {0, 0};
    for (;;) 
	{
		sleep(1);
		ci.second++;
		if (ci.second == 60)
		{
			ci.minute++;
			ci.second = 0;
		}
		USDT_CLOCK_TICK(&ci);
	}			
}
