//
//  Node.h
//  DataStructureProject
//
//  Created by Miller, Wyatt on 2/6/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

template <class Type>
class Node {
protected:
    type data:
    
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

template <class Type>
Node<Type> :: Node()
{
    
};

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
};

template <classType>
void Node<Type> :: setData(Type data)
{
    this->data = data;
};

template <class Type>
void Node<Type> :: getData()
{
    return data;
};

#endif /* Node_h */