#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
  if (argc > 1)
    {
      printf("You ran the %s.\n", argv[1]);
      if (!system(argv[1]))
	{
	  printf("The %s has been run.\n", argv[1]);
	}
      else
	{
	  printf("The %s has not been run.\n", argv[1]);
	}
    }
  else
    {
      printf("The...\n");
    }
}
