#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

bool math (int j);

int main (void)
{
	clock_t start, end = 0;
    double total;
	int i;
	long a, j = 579001599;
	
	while (1)
	{
		if (math (j))
		{printf (".\n");
			if (end == 0)
			{
				start = clock();
			}
			else
			{
				end = clock();
			    //start = clock();
			    total= (double)(end - start) / CLOCKS_PER_SEC;			
			
			    if (total > 2)
			    {
			    	printf ("���A���G%d\n", a);
				    printf ("�ϥήɶ��G%f ��\n", total);
			    	printf ("���B���G%d\n", j);
				
				    return 0;
		    	}
		    	else
		    	    start = end;
			}	
			a = j;
			//start = end;
			end = clock();
		}
		j++;
	}
	
	return 0;
}

bool math (int j)
{
	int i;
	
	for (i=2; i<j; ++i)
	{
		if (j%i == 0)
		    break;
	}
	if (i == j)
	    return true;
	else
	    return false;
}
