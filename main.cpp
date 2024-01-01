#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <iostream>

int main(int argc, char* argv[])
{
  DIR *dp;
  int i = 0;
  struct dirent *ep;
  std::cout << (argv[1]);
  dp = opendir (argv[1]);

  if (dp != NULL)
  {
    while (ep = readdir (dp))
      i++;

    (void) closedir (dp);
  }
  else
    perror ("Couldn't open the directory");
  i = i-2;
  std::cout << (i);

  return 0;
}