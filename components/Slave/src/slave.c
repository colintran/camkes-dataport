#include <camkes.h>
#include <mytype.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define TRUE 1
#define M_TICK 1100000

int run(void) {
  uint32_t time=0; 
  int turn=0;
  while(TRUE){
    ++time;
    if (time == M_TICK){
      time %= M_TICK;
      ++turn;
      //Display
      printf("Buffer read at moment %d:\nname:\t%s\ngender:\t%d\nturn:\t%d\n",\
             turn,s1->name,s1->gender,s1->turn);
    }
    if(turn == 10) break;
  }

  printf("Exit...\n");
  return 0;
}
