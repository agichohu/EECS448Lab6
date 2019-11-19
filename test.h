#ifndef TEST_H
#define TEST_H

#include "Queue.h"
#include <fstream>

class Test
{
  public:

    Test();

    void testContructor();

    void testIsEmpty();

    void testEnqueue();

    void testDequeue();

    void testPeekFront();

    void run();
};
#endif
