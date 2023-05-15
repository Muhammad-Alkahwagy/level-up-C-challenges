#include <stdio.h>
#include <string.h>

char *ordinal(int v)
{
	int remainder = v%10;
	char* suffix;
	char* st = "st";
	char* nd = "nd";
	char* rd = "rd";
	char* th = "th";

	switch (remainder)
	{
		case 1:	  suffix = st;
							if(v == 11){suffix = th;} //exception
							break;
		case 2:	  suffix = nd;
							if(v == 12){suffix = th;} //exception
							break;
		case 3:	  suffix = rd;
							if(v == 13){suffix = th;}	//exception
							break;
		default:	suffix = th; 
							break;
	}
	return suffix;
}

int main()
{
	int c;

	/* output a table of 100 numbers */
	for( c=1; c<=20; c++ )
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
				c, ordinal(c),
				c+20, ordinal(c+20),
				c+40, ordinal(c+40),
				c+60, ordinal(c+60),
				c+80, ordinal(c+80)
			  );
	}

	return(0);
}
