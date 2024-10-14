#include "../kernel/types.h"
#include "../kernel/stat.h"
#include "../user/user.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    exit(1);
  }

  int tick = atoi(argv[1]);
  if(tick <= 0)
  {
    fprintf(2, "sleep: invalid time\n");
    exit(1);
  }

  sleep(tick);
  exit(0);
}