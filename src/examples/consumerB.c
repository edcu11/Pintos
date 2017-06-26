#include <stdio.h>
#include <syscall.h>

int
main (int argc, char *argv[])
{
    printf("soy %s, con id: %s y argc= %d \n", argv[0], argv[1], argc);

    int mutex = 0;
    int full = 1;
    int empty = 2;



    int x = 0;
    while(x<200)
  {
    esys_semWait(full);
  //  esys_semWait(mutex);
    printf("Im %s consumer & I'm consuming! \n", argv[1] );
  //  esys_semPost(mutex);
    esys_semPost(empty);
    //x++;
    int x = 0;
    while(x < ( (atoi(argv[1]) + 1) * 500000) )
    {
        x++;
    }
    x = 0;

  }


    return 0;

}
