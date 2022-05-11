#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	
	int x, y, z, t, result1, result2, a, b, c, d, b1, c1;
	
	while(x == y || x == z || x == t || y == z || y == t || z == t)
	{
	srand ( time(NULL));
	x = rand()%9+1;	
	y = rand()%10;	
	z = rand()%10;
	t = rand()%10;	
	}
	
	result1 = x*1000 + y*100 + z*10 + t;
	printf("%d\n", result1);
	while (d != x || c != y || b != z || a != t)
	{	
	
    char guesses[10][100] = {
                             "Please enter your first guess",
                             "Please enter your second guess",
                             "Please enter your third guess",
                             "Please enter your fourth guess",
                             "Please enter your fifth guess",
                             "Please enter your sixth guess",
                             "Please enter your seventh guess",
                             "Please enter your eighth guess",
                             "Please enter your ninth guess",
                             "Please enter your tenth guess",
                         };
                         
    for(int i = 0; i < 10; i++)
    {
    	printf("%s\n", guesses + i, guesses + i);
		scanf("%d", &result2);
	
	if(result2 < 1000 || result2 > 10000)
	{
		printf("please enter a number which consist of only FOUR digits\n");
		continue;
	}
	
	//else if(d == x && c == y && b == z && a == t)
	//	break;
	a = result2 % 10 ;
		
	b = ((result2 % 100) - a) / 10 ;
	b1 = b;
		
	c = ((result2 % 1000) - b1) / 100 ;
	c1 = c;

	d = ((result2 % 10000) - c1) / 1000 ;

	if (d == x)
	{
		printf("+");
	}
	else
		printf("-");
	
	if (c == y)
	{
		printf("+");
	}
	else
		printf("-");
	
	if (b == z)
	{
		printf("+");
	}
	else
		printf("-");
	
	if (a == t)
	{
		printf("+\n");
	}
	else
		printf("-\n");
	
	if(a == t && b == z && c == y && d == x)
	break;
	}
	break;
	}
	printf("racon bitmistir");
	
	return 0;

}