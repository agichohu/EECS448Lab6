#ifndef TEST_H
#define TEST_H

#include "Queue.h"
#include <fstream>

class Test
{
  public:

    Test(Queue q);

    void testContructor();

    void testIsEmpty();

    void testEnqueue();

    void testDequeue();

    void testPeekFront();

  private:
    Queue q;
};
#endif
