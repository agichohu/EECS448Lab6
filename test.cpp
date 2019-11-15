#include "test.h"
#include <iostream>
using namespace std;


Test::Test(Queue tq)
{
  q=tq;
}

void Test::testContructor()
{
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
  Queue Q;
  cout<<"IsEmpty funtionality test:";

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
}

void Test::testEnqueue()
{
  Queue Q;
  Q.enqueue(123);
  cout<<"Testing enqueue:\n";
  cout<<"Inserting 123 and ensuring the front value is the same: ";
  if(Q.peekFront()==123)
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
    cout<<"Front value: "<<Q.peekFront()<<endl;
  }
  cout<<"Testing enqueue adds to back: ";
  Q.enqueue(23);
  if(Q.peekFront()!=123)
  {
    cout<<"FAILED\n";
    cout<<"Value at front: "<<Q.peekFront()<<endl;
  }
  else
  {
    cout<<"PASSED\n";
  }
}

void Test::testDequeue()
{
  cout<<"TESTING DEQUEUE:\n";
  Queue Q;
  Q.enqueue(7);
  Q.dequeue();
  if(q.isEmpty())
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }
  cout<<"Testing dequeue with multiple values:\n";
  // Queue Q;
  Q.enqueue(7);
  Q.enqueue(8);
  Q.enqueue(9);
  Q.dequeue();
  if(q.isEmpty())
  {
    cout<<"PASSED\n";
  }
  else
  {
    cout<<"FAILED\n";
  }

}
