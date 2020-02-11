#include "LinkedList.hpp"

int main()
{
    LinkedList* mylist = new LinkedList();
    mylist->addFront(1);
    mylist->addFront(2);
    mylist->display();
    delete mylist;
}