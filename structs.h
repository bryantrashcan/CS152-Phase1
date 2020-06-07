#ifndef __structs_h__
#define __structs_h__

#define YY_NO_UNPUT

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <stack>
#include <map>

using namespace std;

enum Type {INT,INT_ARR,FUNC};

struct Var{
	string *var_place;
        string *var_value;
        string *var_offset;
        //vector
        Type var_type;
        int var_length;
        string *var_index;
};

struct Loop{
	string *begin_loop;
        string *loop_parent;
        string *end_loop;
};


struct Terminal{
	stringstream *term_code;        
        string *term_place;
        string *term_value;
        string *term_offset;
        string *op;
        string *begin_term;
        string *term_parent;
        string *end_term;
        Type term_type;
        int term_length;
        string *term_index;
        vector<string> *ids;
        vector<Var> *vars; 
};




#endif
