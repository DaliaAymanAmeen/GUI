
#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include"xml_cutter.h"


using namespace std;

void xml_cutter(string fi)
{

    ifstream infile;
    ofstream outfile;
    string input;
    string line,temp;
    int start,end;
    infile.open(fi);
    outfile.open("output.txt");
    while(getline(infile,input)){
        for(int i=0;i<input.length();i++){
            if(input[i]=='<'){
                start=i;
                for(i;i<input.length();i++){
                    if(input[i]=='>'){
                        end=i;
                        break;
                    }

                }
            }
            else{
                start=i;
                for(i;i<input.length();i++){
                    if (input[i] == '<') {
                        end = i - 1;
                        i--;
                        break;
                    }
                    else
                        end = i;

                    }
            }
            line= input.substr(start,(end-start+1));
            if(line[0]!=' ' || line[1] !=' ')
                outfile << line<<endl;




        }
    }
    infile.close();
    outfile.close();
}


