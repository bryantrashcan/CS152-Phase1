#ifndef _heading_h_
#define _heading_h_

#define YY_NO_UNPUT

#include <iostream>

/*data structures*/
#include <vector>
#include <stack>
#include <map>


#include <sstream>
#include <fstream>
#include <stdio.h>
#include <string>

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
    } ;

    struct Loop{
        string *begin_loop;
        string *loop_parent;
        string *end_loop;
    };


    struct Terminal{
       stringstream *term_code;
        
       //location
       string *term_place;
       string *term_value;
       string *term_offset;
        
       // branches
       string *op;
       string *begin_term;
       string *term_parent;
       string *end_term;
        
       // type
       Type term_type;
       int term_length;
       string *term_index;
        
       // idents and vars
       vector<string> *ids;
       vector<Var> *vars; 
    };


#endif
