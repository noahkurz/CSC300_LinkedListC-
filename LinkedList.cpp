#include "LinkedList.hpp"
#include <iostream>

LinkedList::LinkedList()
{ 
    this->count = 0;
}

void LinkedList::addFront(int payload)
{
    //creates node to be added to front
    Node* newNode = new Node(payload);
    
    if(!this->head)
    {
        //if the head does not point anywhere, 
        //set the head to the new node
        this->head = newNode;
    }
    else
    {
        //otherwise adjust affected pointers and
        //lastly set the head
        newNode->setNextNode(this->head);
        this->head = newNode;
    }    

    //increase count once node is added
    this->count++;
}

void LinkedList::display()
{
    Node* currNode = this->head;
    for(int i = 0; i<this->count; i++)
    {
        std::cout<<currNode->getPayload()<<"\n";
        currNode = currNode->getNextNode();
    }
}


