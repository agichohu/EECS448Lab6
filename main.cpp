/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "test.h"

int main()
{
	Queue q;

	Test test(q);

	test.testIsEmpty();

	test.testEnqueue();

	test.testDequeue();

	return(0);
}
