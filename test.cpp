#include "test.h"
#include <iostream>
using namespace std;


Test::Test()
{
  cout<<"=========>>RUNNING TEST SUITE<<=========\n";
}

void Test::testContructor()
{
  cout<<"TESTING CONSTRUCTOR\n";
  Queue testQ;
  cout<<"Newly created queue is empty: ";
  if(testQ.isEmpty())
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
}

void Test::testIsEmpty()
{
  cout<<"TESTING ISEMPTY\n";
  Queue Q;
  cout<<"IsEmpty funtionality test:\n";
  cout<<"Testing that isEmpty returns true on empty list: ";
  if(Q.isEmpty())
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
    try
    {
      Q.peekFront();
      cout<<"Value found in queue: "<<Q.peekFront();
    }
    catch( runtime_error& rte)
    {
      cout<<"FAILED\n";
      cout<<rte.what();
    }
  }

  Q.enqueue(15);

  cout<<"Testing that isEmpty returns false on list with value:";
  if(Q.isEmpty())
  {
    cout<<"FAILED\n";
  }
  else
  {
    cout<<"PASSED\n";
    cout<<"Front value returns "<<Q.peekFront()<<endl;
  }

  cout<<"Testing that isEmpty returns false after dequeueing an item from a list of 2:";
  Q.enqueue(87);
  Q.dequeue();

  if(Q.isEmpty())
  {
    cout<<"FAILED\n";

  }
  else
  {
    cout<<"PASSED\n";
  }
  
  
}

void Test::testEnqueue()
{
  cout<<"TESTING ENQUEUE\n";
  Queue Q;
  Q.enqueue(123);
  cout<<"Testing enqueue actually adds:\n";
  cout<<"Inserting 123 and ensuring the front value is the same: ";
  if(Q.peekFront()==123)
  {
    cout<<"PASSED\n";
    
  }
  else
  {
    cout<<"FAILED\n";
    // cout<<"Front value: "<<Q.peekFront()<<endl;
  }
  cout<<"Peek front returns "<<Q.peekFront()<<endl;

  cout<<"Testing enqueue adds to back: ";
  Q.enqueue(23);
  if(Q.peekFront()!=123)
  {
    cout<<"FAILED\n";
  }
  else
  {
    cout<<"PASSED\n";
  }
  cout<<"Value at front: "<<Q.peekFront()<<endl;
}

void Test::testDequeue()
{
  cout<<"TESTING DEQUEUE:\n";
  Queue Q;
  Q.enqueue(7);
  Q.dequeue();
  cout<<"Testing dequeue works on a single item in a list: ";
  if(Q.isEmpty())
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
  cout<<"Testing dequeue removes from front:\n";
  // Queue Q;
  Q.enqueue(7);
  Q.enqueue(8);
  Q.enqueue(9);
  Q.dequeue();
  if(Q.peekFront()==7)
  {
    cout<<"FAILED\n";
  }
  else
  {
    cout<<"PASSED\n";
  }
}

void Test::testPeekFront()
{
  Queue q;
  cout<<"TESTING PEEKFRONT\n";
  cout<<"Testing that peek front throws error one empty list:";

  try
  {
    q.peekFront();
    cout<<"FAILED\n";
  }
  catch(...)
  {
    cout<<"PASSED\n";
  }

  cout<<"Testing that peekFront returns the only item in one item list:";
  q.enqueue(15);

  if(q.peekFront()==15)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
    cout<<"peekFront returns "<<q.peekFront()<<endl;
  }

  cout<<"Testing that peekFront returns the front value in a list:";

  q.enqueue(16);
  q.enqueue(89);

  if(q.peekFront()==15)
  {
    cout<<"PASSED\n";
    

  }
  else
  {
    cout<<"FAILED\n";
    cout<<"PeekFront returns: "<<q.peekFront()<<endl;
  }
  
}

void Test::run()
{
  testContructor();

  testIsEmpty();

  testEnqueue();

  testDequeue();

  testPeekFront();


}
