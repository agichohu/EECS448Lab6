#ifndef TEST_H
#define TEST_H

#include "Queue.h"
#include <fstream>

class Test
{
  public:

    Test(Queue tq);

    void testContructor();

    void testIsEmpty();

    void testEnqueue();

    void testDequeue();

    void testPeekFront();

    void run();

  private:
    Queue q;
};
#endif
