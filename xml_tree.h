#ifndef XML_TREE_H
#define XML_TREE_H
#pragma once
#include<string>
#include<vector>

using namespace std;
struct Node
{
    string data;
    string att;
    string tag_name;
    vector<Node*>children;
    Node* Parent;


    //Constructor
    Node(string Name, string Attr, string DataIn = "")
    {
        data = DataIn;
        att = Attr;
        tag_name = Name;
        children = {};
        Parent = NULL;
    }
};
class xml_tree
{
    Node * root;
public:
    xml_tree();
    Node * add_node(string name, string at);//function to declare new tag
    void add_child(Node * parent, Node * chil);//function to add a child to a tag
    void add_data(Node * n, string txt);//function to add data to a tag
    Node * get_root();//function to get the root of the xml tree
    void add_root(Node * r);//function to declare the root of the xml tree
    vector<Node *> get_children(Node * n); //function to get the children of a tag
    string get_attributes(Node * n); // function to get the attributes of a tag
    string get_data(Node * n);//function to get the data of a tag
    void print(Node *n);
    string get_tag(Node* n);
};


#endif // XML_TREE_H
