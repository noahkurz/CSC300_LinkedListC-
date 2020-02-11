#include "Node.hpp"

//constructs a node with value "payload"
Node::Node(int payload)
{
    this->payload = payload;
}

//returns the value of a Node
int Node::getPayload()
{
    return this->payload;
}

//returns the memory address of the nextNode
Node* Node::getNextNode()
{
    return this->nextNode;
}

//sets the pointer to the nextnode
void Node::setNextNode(Node*n)
{
    this->nextNode = n;
}