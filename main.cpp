#include "LinkedList.hpp"
#include <iostream>

int main()
{
    LinkedList* mylist = new LinkedList();
    std::cout<<"Initial List: "<<"\n";
    mylist->addFront(1);
    mylist->addFront(2);
    mylist->addFront(3);
    mylist->addFront(4);
    mylist->display();
    mylist->addAtIndex(4,2);
    std::cout<<"After removal: "<<"\n";
    mylist->display();
    //std::cout<<"Retrieved: "<< mylist->getIndex(3)<<"\n";

    /*
    std::cout<<"Add value to end: "<<"\n";
    mylist->addEnd(100);
    mylist->display();
    std::cout<<"Last Value: "<<mylist->getEnd()<<"\n";
    std::cout<<"Remove last value: ("<<mylist->removeEnd()<<")\n";
    mylist->display();
    */
    delete mylist;
}