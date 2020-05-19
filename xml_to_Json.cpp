/*#include <iostream>
#include <string>
#include <fstream>
#include "xml_cutter.h"
#include "xml_tree.h"
#include "xml_to_Json.h"

using namespace std;
    ofstream json;
vector <string> att_cutter(string input){
    string att;
    int start,end,temp;
    vector<string> output;
    start=0;
    string c="\"";
    string c1=":";
    int counter=0;
    int size=input.size();
    for(int i=0;i<size;i++){
        if((input[i]=='\"') || (i==input.size()-1)){
            counter++;
            if(counter==2)
                {
                end=i+1;
                att=input.substr(start,end-start+1);
                for(int j=0;j<att.size();j++){
                    if(att[j]=='=')
                    temp=j+1;
                }
                att.insert(0,c);
                att.insert(temp,c);
                att.replace(temp+1,1,c1);
                if(att[att.length()-1]=='/')
                    att.erase(att.length()-1);
                output.push_back(att);
                start= i+1;
                counter=0;
            }
        }


    }

    return output;

}

vector<int> sort_children(vector<Node *> &children){
    vector<int> repeat;
    string temp;
    Node * temp_ptr;
    for(int i=0;i< children.size();i++)
        for(int j=i+1;j<children.size();j++){
            if((children[j]->tag_name)<(children[i]->tag_name))
            {
                temp_ptr=children[j];
                children[j]=children[i];
                children[i]=temp_ptr;
            }
        }

        if(children.size()>0){
        temp=children[0]->tag_name;
        repeat.push_back(1);
        int j=0;
        for(int i=1;i<children.size();i++){
            if((children[i]->tag_name)==temp){
                repeat[j]++;
            }else
            {
                repeat.push_back(1);
                j++;
                temp=children[i]->tag_name;
            }
        }

        }
        return repeat;

}

void print_node( Node* node_ptr,int &tab,int repeat,int repeat_max){
    if(node_ptr->children.size()){
        for (int i = 0; i < tab; i++) {
            json << "\t";
        }
        if(repeat>0){

            json<<",{"<<endl;

        }else if(repeat ==0){

            json<<"\""<<node_ptr->tag_name<<"\":["<<endl;
            tab++;
            for (int i = 0; i < tab; i++) {
                json << "\t";
            }
            json<<"{"<<endl;
            tab++;

        }else if (repeat==-1){

            json<<"\""<<node_ptr->tag_name<<"\":{"<<endl;
            tab++;
        }

        vector<int> repeat=sort_children(node_ptr->children);
        int j=0;
        for(int k=0;k<repeat.size();k++){
            if(repeat[k]>1)
            {

                for(int i=0;i<repeat[k];i++){
                    print_node(node_ptr->children[j],tab,i,repeat[k]);
                    tab--;
                    j++;
                }
                for (int i = 0; i < tab; i++) {
                        json << "\t";
                    }
                json<<"]";

            }else{
                print_node(node_ptr->children[j],tab,-1,1);
                tab--;
                j++;
            }
            if(k!=repeat.size()-1 || node_ptr->att.size())
                json<<","<<endl;
            else
                json<<endl;
        }
        if(!node_ptr->att.size())
            json<<"}"<<endl;
        /*else
            json<<*/

   // }if(node_ptr->att.size() || node_ptr->data.size()){
      /*  if(!node_ptr->children.size()){
                for (int i = 0; i < tab; i++) {
                json << "\t";
            }

            if(repeat ==0){

                json<<"\""<<node_ptr->tag_name<<"\":["<<endl;
                tab++;

            }else if (repeat==-1){

                json<<"\""<<node_ptr->tag_name<<"\":";
            }
        }
        if(node_ptr->att.size()){
            vector<string> attributes= att_cutter(node_ptr->att);
            for(int i=0;i<attributes.size();i++){
                if(i!=0)
                for (int i = 0; i < tab; i++) {
                    json << "\t";
                }
                else{
                    if(!node_ptr->children.size())
                        json<<"{"<<endl;
                }
                json<<attributes[i];
                if(i!=attributes.size()-1)
                    json<<","<<endl;
            }
            if( node_ptr->data.size())
                json<<","<<endl;
            else
                json<<endl;
            if(!node_ptr->data.size())
                json<<"}"<<endl;
        }if(node_ptr->data.size()){
            if(repeat==0 || node_ptr->att.size() )
                for (int i = 0; i < tab; i++) {
                    json << "\t";
                }
                if(node_ptr->att.size()){

                        json<<"\"text\":"<<"\""<<node_ptr->data<<"\"";
                        json<<"}"<<endl;
                }else{
                    json<<"\""<<node_ptr->data<<"\"";
                }
                if(repeat>=0 && repeat!=repeat_max-1 )
                    json<<","<<endl;
                else if(repeat==repeat_max-1)
                    json<<endl;
        }


    }

}

void xml_to_json(xml_tree tree){

    json.open("json.txt");
    int tab=1;
    json<<"{"<<endl;
    print_node(tree.get_root(),tab,-1,1);
    json<<"}"<<endl;

    json.close();


}

*/
