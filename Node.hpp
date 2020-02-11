#ifndef Node_hpp
#define Node_hpp

class Node
{
    private: 
        //declare fields for Node.cpp file. Value
        //and pointer to the following node.
        int payload;
        Node* nextNode;

    public:
        //declares methods to me utilized by Node.cpp
        Node(int payload);
        int getPayload();
        Node* getNextNode();
        void setNextNode(Node* n);
};
#endif /* Node_hpp */