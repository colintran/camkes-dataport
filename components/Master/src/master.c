#include <camkes.h>
#include <mytype.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define TRUE 1
#define M_TICK 2000000

int run(void){
  uint32_t time=0; 
  int turn=0;
  char *name1 = "Master_1", 
       *name2 = "Master_2";
  while(TRUE){
    ++time;
    if(time == M_TICK){
      time %= M_TICK;
      ++turn;
      //	
      if(turn%2 == 0) 
        strcpy((void*) m1->name,name1);
      else
        strcpy((void*) m1->name,name2);
      m1->gender = (turn%2 == 0)?MALE:FEMALE;
      m1->turn = turn;
    }
    if (turn == 10) break;
  }

  return 0;
}
