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

int LinkedList::getFront()
{
    return this->head->getPayload();
}

int LinkedList::removeFront()
{
    Node* nodeToReturn = this->head;
    this->head = this->head->getNextNode();
    int val = nodeToReturn->getPayload();
    delete nodeToReturn;
    this->count--;
    return val;
}

void LinkedList::addEnd(int payload)
{
    Node* newNode = new Node(payload);
    Node* temp = this->head;
    for(int i = 1; i<=this->count-1; i++)
    {
        temp = temp->getNextNode();
    }
    temp->setNextNode(newNode);
    this->count++;
}

int LinkedList::getEnd()
{
    Node* traverse = this->head;
    for(int i = 1; i<=this->count-1; i++)
    {
        traverse = traverse->getNextNode();
    }
    return traverse->getPayload();
}

int LinkedList::removeEnd()
{
    Node* traverse = this->head;
    for(int i = 1; i<=this->count-1; i++)
    {
        traverse = traverse->getNextNode();
    }
    int deletedNodeValue = traverse->getPayload();
    delete traverse;
    this->count--;
    return deletedNodeValue;
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


