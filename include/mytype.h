#ifndef _MYTYPE_H_
#define _MYTYPE_H_

typedef struct MyData {
  char name[15];
  enum {
    MALE, FEMALE
  } gender;
  int turn;
} MyData_t;

#endif
