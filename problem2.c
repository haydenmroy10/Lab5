

#include <stdio.h>

int main()
{
  int score;
  while (1)
    {
      printf ("Enter 0 or 1 to STOP\nEnter the NFL Score: ");
      scanf ("%d", &score);
      if ((score == 1) || (score == 0))
	{
	  break;
	}
        for (int i = 0; i < (score / 8) + 1; i = i + 1)
	    {
	        for (int j = 0; j < (score / 7) + 1; j = j + 1)
	        {
	            for (int k = 0; k < (score / 6) + 1; k = k + 1)
		        {
		            for (int l = 0; l < (score / 3) + 1; l = l + 1)
		            {
		                for (int m = 0; m < (score / 2) + 1; m = m + 1)
			            {
		                    if (8 * i + 7 * j + 6 * k + 3 * l + 2 * m == score)
			                {
			                    printf("%d TD + 2pt %d TD + 1pt %d TD %d FG %d Safety\n",i, j, k, l, m);
			                }
			            }
		            }
		        }
	        }
	    }
    }
}
