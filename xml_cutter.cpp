#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include "xml_cutter.h"


using namespace std;

void xml_cutter(string name)
{

    ifstream infile;
    ofstream outfile;
    string input;
    string line, temp;
    string d_q = " ";
    int start, end;
    infile.open(name);
    outfile.open("output.txt");
    while (getline(infile, input)) {
        for (int i = 0; i < input.length(); i++) {
            if (input[i] == '<') {
                start = i;
                for (i; i < input.length(); i++) {
                    if (input[i] == '>') {
                        end = i;
                        break;
                    }

                }
            }
            else {
                start = i;
                for (i; i < input.length(); i++) {
                    if (input[i] == '<') {
                        end = i - 1;
                        i--;
                        break;
                    }
                    else
                    {
                        end = i;
                    }

                }
            }
            line = input.substr(start, (end - start + 1));
            if (line[0] != '<')
                for (int i = 0; i < line.length(); i++) {
                    if (line[i] == '"')
                        line.replace(i, 1, d_q);
                }
            if (line[0] != ' ' || line[1] != ' ' || line[2] != ' ')
                outfile << line << endl;




        }
    }
    infile.close();
    outfile.close();
}
