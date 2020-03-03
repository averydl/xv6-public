#include "types.h"
#include "stat.h"
#include "user.h"
 
int
main(int argc, char* argv[])
{
  if(argc < 2) {
    printf(1, "Usage: ps [UNUSED | EMBRYO | SLEEPING | RUNNABLE | RUNNING | ZOMBIE]\n");
    exit();
}

  int num = getprocs(argv[1]);
  if(num < 0) {
    printf(1, "Failed to execute getprocs");
    exit();

  }

  printf(1, "Number of processes: %d\n", num);
  exit();
}