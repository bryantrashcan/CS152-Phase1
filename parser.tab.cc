// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.
#line 1 "mini_l.yy" // lalr1.cc:404


#line 39 "parser.tab.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "parser.tab.hh"

// User implementation prologue.

#line 53 "parser.tab.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 104 "mini_l.yy" // lalr1.cc:413

    #include "parser.tab.hh"

    	/* you may need these deader files 
    	 * add more header file if you need more
    	 */
    #include <iostream>
    #include <sstream>
    #include <string>
    #include <map>
    #include <regex>
    #include <set>
    #include <algorithm>
    #include <climits>
    #include <unordered_set>
    #include <stack>

    //extern yy::location loc;

    yy::parser::symbol_type yylex();

    	/* define your symbol table, global variables,
    	 * list of keywords or any function you may need here */
    	
    enum IdentType;

    std::map< std::string, IdentType > symbol_table;
    std::unordered_set < std::string > keywords;            // reserved keywords
    std::stack <std::string> loop_scope;

    bool errorOccurred = false;
    int paramCount = 0;

    
	/* end of your code */

#line 92 "parser.tab.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 178 "parser.tab.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {}

  parser::~parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  parser::symbol_number_type
  parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 54: // program
      case 59: // declaration
      case 65: // bool_expr
      case 66: // relation_and_expr
      case 67: // relation_expr
      case 69: // expression
      case 70: // mult_expr
      case 72: // term
      case 74: // var
        value.move< ExprStruct > (that.value);
        break;

      case 55: // function
      case 61: // statement
        value.move< StatementStruct > (that.value);
        break;

      case 50: // NUMBER
        value.move< int > (that.value);
        break;

      case 49: // IDENTIFIER
      case 68: // comp
      case 71: // mulop
        value.move< std::string > (that.value);
        break;

      case 57: // declaration_loop
      case 64: // var_loop
      case 73: // expression_loop
        value.move< std::vector<ExprStruct> > (that.value);
        break;

      case 58: // statement_loop
        value.move< std::vector<StatementStruct> > (that.value);
        break;

      case 60: // id_loop
        value.move< std::vector<std::string> > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 54: // program
      case 59: // declaration
      case 65: // bool_expr
      case 66: // relation_and_expr
      case 67: // relation_expr
      case 69: // expression
      case 70: // mult_expr
      case 72: // term
      case 74: // var
        value.copy< ExprStruct > (that.value);
        break;

      case 55: // function
      case 61: // statement
        value.copy< StatementStruct > (that.value);
        break;

      case 50: // NUMBER
        value.copy< int > (that.value);
        break;

      case 49: // IDENTIFIER
      case 68: // comp
      case 71: // mulop
        value.copy< std::string > (that.value);
        break;

      case 57: // declaration_loop
      case 64: // var_loop
      case 73: // expression_loop
        value.copy< std::vector<ExprStruct> > (that.value);
        break;

      case 58: // statement_loop
        value.copy< std::vector<StatementStruct> > (that.value);
        break;

      case 60: // id_loop
        value.copy< std::vector<std::string> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 54: // program
      case 59: // declaration
      case 65: // bool_expr
      case 66: // relation_and_expr
      case 67: // relation_expr
      case 69: // expression
      case 70: // mult_expr
      case 72: // term
      case 74: // var
        yylhs.value.build< ExprStruct > ();
        break;

      case 55: // function
      case 61: // statement
        yylhs.value.build< StatementStruct > ();
        break;

      case 50: // NUMBER
        yylhs.value.build< int > ();
        break;

      case 49: // IDENTIFIER
      case 68: // comp
      case 71: // mulop
        yylhs.value.build< std::string > ();
        break;

      case 57: // declaration_loop
      case 64: // var_loop
      case 73: // expression_loop
        yylhs.value.build< std::vector<ExprStruct> > ();
        break;

      case 58: // statement_loop
        yylhs.value.build< std::vector<StatementStruct> > ();
        break;

      case 60: // id_loop
        yylhs.value.build< std::vector<std::string> > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 186 "mini_l.yy" // lalr1.cc:859
    { populateKeywords(); }
#line 674 "parser.tab.cc" // lalr1.cc:859
    break;

  case 3:
#line 186 "mini_l.yy" // lalr1.cc:859
    {

        if (!errorOccurred)
            std::cout << yystack_[0].value.as< ExprStruct > ();

        // Print error if there isn't a main function
        if (!checkIdType("main", IdentType::FUNCTION)) {

            yy::parser::error(yystack_[0].location, "No main function defined");
        }            
    }
#line 690 "parser.tab.cc" // lalr1.cc:859
    break;

  case 4:
#line 201 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("program -> epsilon\n");
    }
#line 699 "parser.tab.cc" // lalr1.cc:859
    break;

  case 5:
#line 206 "mini_l.yy" // lalr1.cc:859
    {
        debug_print("program -> program function\n");

        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[1].value.as< ExprStruct > ().code.begin(), yystack_[1].value.as< ExprStruct > ().code.end());
        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[0].value.as< StatementStruct > ().code.begin(), yystack_[0].value.as< StatementStruct > ().code.end());
    }
#line 710 "parser.tab.cc" // lalr1.cc:859
    break;

  case 6:
#line 215 "mini_l.yy" // lalr1.cc:859
    { 

        std::string function_name = yystack_[0].value.as< std::string > ();
        symbol_table.insert( std::pair<std::string, IdentType>(function_name, IdentType::FUNCTION) );

        if (isKeyword(function_name)) { 

            yy::parser::error(yystack_[0].location, "Function name \"" + function_name + "\" cannot be named the same as a keyword.");
        }

    }
#line 726 "parser.tab.cc" // lalr1.cc:859
    break;

  case 7:
#line 228 "mini_l.yy" // lalr1.cc:859
    {

        debug_print_char("function -> FUNCTION IDENTIFIER %s SEMICOLON ", yystack_[11].value.as< std::string > ());
        debug_print("BEGINPARAMS declaration_loop ENDPARAMS ");
        debug_print("BEGINLOCALS declaration_loop ENDLOCALS ");
        debug_print("BEGINBODY statement_loop ENDBODY\n");

        std::string function_name = yystack_[11].value.as< std::string > ();
        std::vector< ExprStruct > params = yystack_[7].value.as< std::vector<ExprStruct> > ();
        std::vector< ExprStruct > locals = yystack_[4].value.as< std::vector<ExprStruct> > ();
        std::vector< StatementStruct > body   = yystack_[1].value.as< std::vector<StatementStruct> > ();

        //$$ = "func " + function_name + "\n";
        yylhs.value.as< StatementStruct > ().code.push_back("func " + function_name);

        // params declaration loop
        // $$.code.insert($$.code.end(), params.begin(), params.end());
        for (ExprStruct this_expr_struct : params) {

            yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), this_expr_struct.code.begin(), this_expr_struct.code.end());
        }

        // locals declaration loop
        // $$.code.insert($$.code.end(), locals.begin(), locals.end());
        for (ExprStruct this_expr_struct : locals) {

            yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), this_expr_struct.code.begin(), this_expr_struct.code.end());
        }

        // body statement loop
        // $$.code.insert($$.code.end(), body.begin(), body.end());
        for (StatementStruct this_expr_struct : body) {

            yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), this_expr_struct.code.begin(), this_expr_struct.code.end());
        }

        yylhs.value.as< StatementStruct > ().code.push_back("endfunc");
    }
#line 769 "parser.tab.cc" // lalr1.cc:859
    break;

  case 8:
#line 270 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("declaration_loop -> epsilon\n");
        // don't add anything to vector
    }
#line 779 "parser.tab.cc" // lalr1.cc:859
    break;

  case 9:
#line 276 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("declaration_loop -> declaration_loop declaration SEMICOLON\n");

        yylhs.value.as< std::vector<ExprStruct> > ().insert(yylhs.value.as< std::vector<ExprStruct> > ().end(), yystack_[2].value.as< std::vector<ExprStruct> > ().begin(), yystack_[2].value.as< std::vector<ExprStruct> > ().end());
        yylhs.value.as< std::vector<ExprStruct> > ().push_back(yystack_[1].value.as< ExprStruct > ());
    }
#line 791 "parser.tab.cc" // lalr1.cc:859
    break;

  case 10:
#line 287 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("statement_loop -> statement SEMICOLON\n");
        yylhs.value.as< std::vector<StatementStruct> > ().push_back(yystack_[1].value.as< StatementStruct > ());
    }
#line 801 "parser.tab.cc" // lalr1.cc:859
    break;

  case 11:
#line 293 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("statement_loop -> statement_loop statement SEMICOLON\n");

        yylhs.value.as< std::vector<StatementStruct> > () = yystack_[2].value.as< std::vector<StatementStruct> > ();
        yylhs.value.as< std::vector<StatementStruct> > ().push_back(yystack_[1].value.as< StatementStruct > ());
    }
#line 813 "parser.tab.cc" // lalr1.cc:859
    break;

  case 12:
#line 304 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("declaration -> id_loop COLON INTEGER\n");

        for (std::string thisId : yystack_[2].value.as< std::vector<std::string> > ()) {

            // Ident id(thisName, INT_MAX, false);


            // Check if is repeat identifier
            if (isInSymbolTable(thisId)) {
                yy::parser::error(yystack_[2].location, "Multiple definitions of variable \"" + thisId + "\"");
            }
            else {
                symbol_table.insert( std::pair<std::string, IdentType>(thisId, IdentType::INTEGER));

                ExprStruct expr_struct;
                expr_struct.code.push_back(". " + thisId);
                expr_struct.reg_name = thisId;
             
                // $$.code.push_back(expr_struct);
                yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), expr_struct.code.begin(), expr_struct.code.end());
            }
        }


    }
#line 845 "parser.tab.cc" // lalr1.cc:859
    break;

  case 13:
#line 332 "mini_l.yy" // lalr1.cc:859
    {

        debug_print_int("declaration -> id_loop COLON ARRAY L_SQUARE_BRACKET NUMBER %d R_SQUARE_BRACKET OF INTEGER\n", yystack_[3].value.as< int > ());

        // NEW
        for (std::string thisId : yystack_[7].value.as< std::vector<std::string> > ()) {

            // Check if is repeat identifier
            if (isInSymbolTable(thisId)) {
                yy::parser::error(yystack_[7].location, "Multiple definitions of variable \"" + thisId + "\"");
            }
            else {
                symbol_table.insert( std::pair<std::string, IdentType>(thisId, IdentType::INTEGER));

                // Generate code for declaring id's in a loop
                ExprStruct expr_struct;
                expr_struct.code.push_back(".[] " + thisId + ", " + std::to_string(yystack_[3].value.as< int > ()));
                expr_struct.reg_name = thisId;

                // $$.code.push_back(expr_struct);
                yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), expr_struct.code.begin(), expr_struct.code.end());
            }

            if (yystack_[3].value.as< int > () <= 0) {

                yy::parser::error(yystack_[3].location, "Array \"" + thisId + "\" must be declared with size greater than zero");
            }
        }
    }
#line 879 "parser.tab.cc" // lalr1.cc:859
    break;

  case 14:
#line 365 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("id_loop -> IDENTIFIER");
        yylhs.value.as< std::vector<std::string> > ().push_back(yystack_[0].value.as< std::string > ());
    }
#line 889 "parser.tab.cc" // lalr1.cc:859
    break;

  case 15:
#line 371 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("id_loop -> id_loop COMMA IDENTIFIER");
               
        // Maintain id_loop's vector         
        for (std::string s : yystack_[2].value.as< std::vector<std::string> > ()) {
            yylhs.value.as< std::vector<std::string> > ().push_back(s);
        }
                        
        yylhs.value.as< std::vector<std::string> > ().push_back(yystack_[0].value.as< std::string > ());
    }
#line 905 "parser.tab.cc" // lalr1.cc:859
    break;

  case 16:
#line 386 "mini_l.yy" // lalr1.cc:859
    {
        debug_print("statement -> var ASSIGN expression\n"); 
        // ExprStruct es;
        // es.reg_name = generateTempReg();
        yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), yystack_[0].value.as< ExprStruct > ().code.begin(), yystack_[0].value.as< ExprStruct > ().code.end());
        // $$.code.push_back(". " + $1.reg_name);
        yylhs.value.as< StatementStruct > ().code.push_back("= " + yystack_[2].value.as< ExprStruct > ().reg_name + ", " + yystack_[0].value.as< ExprStruct > ().reg_name);
        // $$ = es;
    }
#line 919 "parser.tab.cc" // lalr1.cc:859
    break;

  case 17:
#line 396 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("statement -> IF bool_expr THEN statement_loop ENDIF\n");

        // Before anything else, copy code from bool_expr,
        // and define your own reg_name
        yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), yystack_[3].value.as< ExprStruct > ().code.begin(), yystack_[3].value.as< ExprStruct > ().code.end());
        yylhs.value.as< StatementStruct > ().begin_label = generateTempReg();
        yylhs.value.as< StatementStruct > ().code.push_back(". " + yylhs.value.as< StatementStruct > ().begin_label);

        // Prepare the endif label
        std::string endif_label = generateTempLabel();

        // Compute the negation of the result of bool_expr,
        // which is in $2.reg_name
        std::string negation_reg = generateTempReg();
        yylhs.value.as< StatementStruct > ().code.push_back(". " + negation_reg);
        yylhs.value.as< StatementStruct > ().code.push_back("! " + negation_reg + ", " + yystack_[3].value.as< ExprStruct > ().reg_name);

        // If negation_neg is true,
        // then bool_expr was false,
        // so jump to endif label
        yylhs.value.as< StatementStruct > ().code.push_back("?:= " + endif_label + ", " + negation_reg);

        // Else if !negation_reg, then bool_expr was true,
        // and you should fall through to the body code
        for (StatementStruct thisStatement : yystack_[1].value.as< std::vector<StatementStruct> > ()) {

            yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), thisStatement.code.begin(), thisStatement.code.end());
        }

        // After we're done with body code, append the endif label
        yylhs.value.as< StatementStruct > ().code.push_back(": " + endif_label);
        
    
    }
#line 960 "parser.tab.cc" // lalr1.cc:859
    break;

  case 18:
#line 433 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("statement -> IF bool_expr THEN statement_loop ELSE statement_loop ENDIF\n");

        // Copy code for evaluating bool_expr
        yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), yystack_[5].value.as< ExprStruct > ().code.begin(), yystack_[5].value.as< ExprStruct > ().code.end());

        // Need 2 labels, else and end
        yylhs.value.as< StatementStruct > ().begin_label = generateTempLabel();   // else
        yylhs.value.as< StatementStruct > ().end_label = generateTempLabel();     // end

        std::string negation_reg = generateTempReg();
        yylhs.value.as< StatementStruct > ().code.push_back(". " + negation_reg);
        yylhs.value.as< StatementStruct > ().code.push_back("! " + negation_reg + ", " + yystack_[5].value.as< ExprStruct > ().reg_name);

        // If !bool_expr, jump to else
        yylhs.value.as< StatementStruct > ().code.push_back("?:= " + yylhs.value.as< StatementStruct > ().begin_label + ", " + negation_reg);

        // Fall through to code from statement loop
        for (StatementStruct thisStatement : yystack_[3].value.as< std::vector<StatementStruct> > ()) {

            yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), thisStatement.code.begin(), thisStatement.code.end());
        }

        // Jump to end to avoid else statement
        yylhs.value.as< StatementStruct > ().code.push_back(":= " + yylhs.value.as< StatementStruct > ().end_label /*+ " ; end of if, jump to end"*/);

        yylhs.value.as< StatementStruct > ().code.push_back(": " + yylhs.value.as< StatementStruct > ().begin_label /*+ " ; else label"*/);

        for (StatementStruct thisStatement : yystack_[1].value.as< std::vector<StatementStruct> > ()) {

            yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), thisStatement.code.begin(), thisStatement.code.end());
        }

        yylhs.value.as< StatementStruct > ().code.push_back(": " + yylhs.value.as< StatementStruct > ().end_label /*+ " ; endif label"*/);

    }
#line 1002 "parser.tab.cc" // lalr1.cc:859
    break;

  case 19:
#line 471 "mini_l.yy" // lalr1.cc:859
    {loop_scope.push(generateTempLabel());}
#line 1008 "parser.tab.cc" // lalr1.cc:859
    break;

  case 20:
#line 471 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("statement -> WHILE bool_expr BEGINLOOP statement_loop ENDLOOP\n");

        StatementStruct css;
        assert(!loop_scope.empty());
        css.begin_label = loop_scope.top();
        std::string middle_label = generateTempLabel();
        css.end_label = generateTempLabel();


        yylhs.value.as< StatementStruct > ().code.push_back(": " + css.begin_label);

        yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), yystack_[4].value.as< ExprStruct > ().code.begin(), yystack_[4].value.as< ExprStruct > ().code.end()); // bool_expr code

        yylhs.value.as< StatementStruct > ().code.push_back("?:= " + middle_label + ", " + yystack_[4].value.as< ExprStruct > ().reg_name);
        yylhs.value.as< StatementStruct > ().code.push_back(":= " + css.end_label);
        yylhs.value.as< StatementStruct > ().code.push_back(": " + middle_label);



        for (StatementStruct thisStatement : yystack_[1].value.as< std::vector<StatementStruct> > ()) {

            yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), thisStatement.code.begin(), thisStatement.code.end());
        }

        yylhs.value.as< StatementStruct > ().code.push_back(":= " + css.begin_label);
        yylhs.value.as< StatementStruct > ().code.push_back(": " + css.end_label);


        yylhs.value.as< StatementStruct > ().begin_label = css.begin_label;
        yylhs.value.as< StatementStruct > ().end_label = css.end_label;

        loop_scope.pop();

    }
#line 1049 "parser.tab.cc" // lalr1.cc:859
    break;

  case 21:
#line 508 "mini_l.yy" // lalr1.cc:859
    { loop_scope.push(generateTempLabel()); }
#line 1055 "parser.tab.cc" // lalr1.cc:859
    break;

  case 22:
#line 508 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("statement -> DO BEGINLOOP statement_loop ENDLOOP WHILE bool_expr\n");

        StatementStruct ss;
        // ss.begin_label = generateTempLabel();
        assert(!loop_scope.empty());
        ss.end_label = loop_scope.top();
        ss.begin_label = generateTempLabel();

        yylhs.value.as< StatementStruct > ().code.push_back(": " + ss.begin_label);

        // code from statement_loop
        for (StatementStruct thisStatement : yystack_[3].value.as< std::vector<StatementStruct> > ()) {

            yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), thisStatement.code.begin(), thisStatement.code.end());
        }

        // set end_label to be between end of body code and before bool_expr
        yylhs.value.as< StatementStruct > ().code.push_back(": " + ss.end_label);

        // code from bool_expr
        yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), yystack_[0].value.as< ExprStruct > ().code.begin(), yystack_[0].value.as< ExprStruct > ().code.end());

        // if bool_expr, jump to ss.begin_label
        yylhs.value.as< StatementStruct > ().code.push_back("?:= " + ss.begin_label + ", " + yystack_[0].value.as< ExprStruct > ().reg_name);

        loop_scope.pop();

    }
#line 1090 "parser.tab.cc" // lalr1.cc:859
    break;

  case 23:
#line 539 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("statement -> READ var_loop\n");


        for (ExprStruct this_expr_struct : yystack_[0].value.as< std::vector<ExprStruct> > ()) {
            // thisCode.push_back(".< " + this_expr_struct.reg_name);


            //this_expr_struct.reg_name = 

            //$$.code.insert($$.code.end(), this_expr_struct.code.begin(), this_expr_struct.code.end());
            // $$.code.push_back(".< " + this_expr_struct.original_name);
            yylhs.value.as< StatementStruct > ().code.push_back(".< " + this_expr_struct.reg_name);
        }
    }
#line 1111 "parser.tab.cc" // lalr1.cc:859
    break;

  case 24:
#line 556 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("statement -> WRITE var_loop\n");
        // $$ = concat($2, ".> ", "\n");

        for (ExprStruct this_expr_struct : yystack_[0].value.as< std::vector<ExprStruct> > ()) {
            //$$.code.insert($$.code.end(), this_expr_struct.code.begin(), this_expr_struct.code.end());
            // $$.code.push_back(".> " + this_expr_struct.original_name);
            yylhs.value.as< StatementStruct > ().code.push_back(".> " + this_expr_struct.reg_name);
        }
    }
#line 1127 "parser.tab.cc" // lalr1.cc:859
    break;

  case 25:
#line 568 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("statement -> CONTINUE\n");

        // std::cout << "loop_scope size: " << loop_scope.size() << std::endl;

        if (loop_scope.empty()) {

            yy::parser::error(yystack_[0].location, "\'continue\' keyword forbidden outside loops");
        }

        else {

            std::string jump_here = loop_scope.top();
            yylhs.value.as< StatementStruct > ().code.push_back(":= " + jump_here);
        }
    }
#line 1149 "parser.tab.cc" // lalr1.cc:859
    break;

  case 26:
#line 586 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("statement -> RETURN expression\n");

        yylhs.value.as< StatementStruct > ().code.insert(yylhs.value.as< StatementStruct > ().code.end(), yystack_[0].value.as< ExprStruct > ().code.begin(), yystack_[0].value.as< ExprStruct > ().code.end());
        // $$.reg_name = $2.reg_name;
        yylhs.value.as< StatementStruct > ().begin_label = yystack_[0].value.as< ExprStruct > ().reg_name;
        yylhs.value.as< StatementStruct > ().code.push_back("ret " + yystack_[0].value.as< ExprStruct > ().reg_name);

    }
#line 1164 "parser.tab.cc" // lalr1.cc:859
    break;

  case 27:
#line 600 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("var_loop -> var\n");
        yylhs.value.as< std::vector<ExprStruct> > ().push_back(yystack_[0].value.as< ExprStruct > ());

    }
#line 1175 "parser.tab.cc" // lalr1.cc:859
    break;

  case 28:
#line 607 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("var_loop -> var_loop COMMA var\n");
        yylhs.value.as< std::vector<ExprStruct> > ().insert(yylhs.value.as< std::vector<ExprStruct> > ().end(), yystack_[2].value.as< std::vector<ExprStruct> > ().begin(), yystack_[2].value.as< std::vector<ExprStruct> > ().end());
        yylhs.value.as< std::vector<ExprStruct> > ().push_back(yystack_[0].value.as< ExprStruct > ());
    }
#line 1186 "parser.tab.cc" // lalr1.cc:859
    break;

  case 29:
#line 616 "mini_l.yy" // lalr1.cc:859
    { 
        debug_print("bool_expr -> relation_and_expr\n");
        yylhs.value.as< ExprStruct > () = yystack_[0].value.as< ExprStruct > ();

    }
#line 1196 "parser.tab.cc" // lalr1.cc:859
    break;

  case 30:
#line 621 "mini_l.yy" // lalr1.cc:859
    {
        debug_print("bool_expr -> bool_expr OR relation_and_expr\n"); 

    }
#line 1205 "parser.tab.cc" // lalr1.cc:859
    break;

  case 31:
#line 628 "mini_l.yy" // lalr1.cc:859
    { 
        debug_print("relation_and_expr -> relation_expr\n"); 
        yylhs.value.as< ExprStruct > () = yystack_[0].value.as< ExprStruct > ();

    }
#line 1215 "parser.tab.cc" // lalr1.cc:859
    break;

  case 32:
#line 633 "mini_l.yy" // lalr1.cc:859
    { 
        debug_print("relation_and_expr -> relation_and_expr AND relation_expr\n"); 

    }
#line 1224 "parser.tab.cc" // lalr1.cc:859
    break;

  case 33:
#line 641 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("relation_expr -> expression comp expression\n");

        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[2].value.as< ExprStruct > ().code.begin(), yystack_[2].value.as< ExprStruct > ().code.end());
        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[0].value.as< ExprStruct > ().code.begin(), yystack_[0].value.as< ExprStruct > ().code.end());

        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);

        yylhs.value.as< ExprStruct > ().code.push_back(yystack_[1].value.as< std::string > () + " " + yylhs.value.as< ExprStruct > ().reg_name + ", " + yystack_[2].value.as< ExprStruct > ().reg_name + ", " + yystack_[0].value.as< ExprStruct > ().reg_name);

    }
#line 1242 "parser.tab.cc" // lalr1.cc:859
    break;

  case 34:
#line 655 "mini_l.yy" // lalr1.cc:859
    {

        std::cout << "In relation_expr -> NOT expression comp expression" << std::endl;

        debug_print("relation_expr -> NOT expression comp expression\n");

        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[2].value.as< ExprStruct > ().code.begin(), yystack_[2].value.as< ExprStruct > ().code.end());
        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[0].value.as< ExprStruct > ().code.begin(), yystack_[0].value.as< ExprStruct > ().code.end());

        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);

        yylhs.value.as< ExprStruct > ().code.push_back(yystack_[1].value.as< std::string > () + " " + yylhs.value.as< ExprStruct > ().reg_name + ", " + yystack_[2].value.as< ExprStruct > ().reg_name + ", " + yystack_[0].value.as< ExprStruct > ().reg_name);

        yylhs.value.as< ExprStruct > ().code.push_back("! " + yylhs.value.as< ExprStruct > ().reg_name + ", " + yylhs.value.as< ExprStruct > ().reg_name);
    }
#line 1263 "parser.tab.cc" // lalr1.cc:859
    break;

  case 35:
#line 672 "mini_l.yy" // lalr1.cc:859
    { 

        debug_print("relation_expr -> TRUE\n");

        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);

        yylhs.value.as< ExprStruct > ().code.push_back("= " + yylhs.value.as< ExprStruct > ().reg_name + ", 1");
    }
#line 1277 "parser.tab.cc" // lalr1.cc:859
    break;

  case 36:
#line 681 "mini_l.yy" // lalr1.cc:859
    { debug_print("relation_expr -> NOT TRUE\n"); 

        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);

        yylhs.value.as< ExprStruct > ().code.push_back("= " + yylhs.value.as< ExprStruct > ().reg_name + ", 0");
    }
#line 1289 "parser.tab.cc" // lalr1.cc:859
    break;

  case 37:
#line 688 "mini_l.yy" // lalr1.cc:859
    { 
        debug_print("relation_expr -> FALSE\n"); 

        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);

        yylhs.value.as< ExprStruct > ().code.push_back("= " + yylhs.value.as< ExprStruct > ().reg_name + ", 0");
    }
#line 1302 "parser.tab.cc" // lalr1.cc:859
    break;

  case 38:
#line 696 "mini_l.yy" // lalr1.cc:859
    { 
        debug_print("relation_expr -> NOT FALSE\n"); 

        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);

        yylhs.value.as< ExprStruct > ().code.push_back("= " + yylhs.value.as< ExprStruct > ().reg_name + ", 1");
    }
#line 1315 "parser.tab.cc" // lalr1.cc:859
    break;

  case 39:
#line 704 "mini_l.yy" // lalr1.cc:859
    { 
        debug_print("relation_expr -> L_PAREN bool_expr R_PAREN\n"); 

        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[1].value.as< ExprStruct > ().code.begin(), yystack_[1].value.as< ExprStruct > ().code.end());

        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("= " + yylhs.value.as< ExprStruct > ().reg_name + ", " + yystack_[1].value.as< ExprStruct > ().reg_name);
    }
#line 1329 "parser.tab.cc" // lalr1.cc:859
    break;

  case 40:
#line 716 "mini_l.yy" // lalr1.cc:859
    { yylhs.value.as< std::string > ()  = "=="; }
#line 1335 "parser.tab.cc" // lalr1.cc:859
    break;

  case 41:
#line 717 "mini_l.yy" // lalr1.cc:859
    { yylhs.value.as< std::string > ()  = "!="; }
#line 1341 "parser.tab.cc" // lalr1.cc:859
    break;

  case 42:
#line 718 "mini_l.yy" // lalr1.cc:859
    { yylhs.value.as< std::string > ()  = "<"; }
#line 1347 "parser.tab.cc" // lalr1.cc:859
    break;

  case 43:
#line 719 "mini_l.yy" // lalr1.cc:859
    { yylhs.value.as< std::string > ()  = ">"; }
#line 1353 "parser.tab.cc" // lalr1.cc:859
    break;

  case 44:
#line 720 "mini_l.yy" // lalr1.cc:859
    { yylhs.value.as< std::string > ()  = "<="; }
#line 1359 "parser.tab.cc" // lalr1.cc:859
    break;

  case 45:
#line 721 "mini_l.yy" // lalr1.cc:859
    { yylhs.value.as< std::string > ()  = ">="; }
#line 1365 "parser.tab.cc" // lalr1.cc:859
    break;

  case 46:
#line 725 "mini_l.yy" // lalr1.cc:859
    { debug_print("expression -> mult_expr\n"); 
        yylhs.value.as< ExprStruct > () = yystack_[0].value.as< ExprStruct > ();
        //$$.code.push_back("= " + $$.reg_name + ", " + $1.reg_name);
    }
#line 1374 "parser.tab.cc" // lalr1.cc:859
    break;

  case 47:
#line 729 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("expression -> expression ADD mult_expr\n"); 

        yylhs.value.as< ExprStruct > () = yystack_[2].value.as< ExprStruct > ();
        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        // $$.code.insert($$.code.end(), $1.code.begin(), $1.code.end());
        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[0].value.as< ExprStruct > ().code.begin(), yystack_[0].value.as< ExprStruct > ().code.end());
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("+ " + yylhs.value.as< ExprStruct > ().reg_name + ", " + yystack_[2].value.as< ExprStruct > ().reg_name + ", " + yystack_[0].value.as< ExprStruct > ().reg_name);


    }
#line 1392 "parser.tab.cc" // lalr1.cc:859
    break;

  case 48:
#line 742 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("expression -> expression SUB mult_expr\n");

        yylhs.value.as< ExprStruct > () = yystack_[2].value.as< ExprStruct > ();
        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        // $$.code.insert($$.code.end(), $1.code.begin(), $1.code.end());
        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[0].value.as< ExprStruct > ().code.begin(), yystack_[0].value.as< ExprStruct > ().code.end());
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("- " + yylhs.value.as< ExprStruct > ().reg_name + ", " + yystack_[2].value.as< ExprStruct > ().reg_name + ", " + yystack_[0].value.as< ExprStruct > ().reg_name);
    }
#line 1408 "parser.tab.cc" // lalr1.cc:859
    break;

  case 49:
#line 757 "mini_l.yy" // lalr1.cc:859
    {
        debug_print("mult_expr -> term\n"); 
        yylhs.value.as< ExprStruct > () = yystack_[0].value.as< ExprStruct > ();
    }
#line 1417 "parser.tab.cc" // lalr1.cc:859
    break;

  case 50:
#line 762 "mini_l.yy" // lalr1.cc:859
    {
        debug_print_char("mult_expr -> mult_expr %s term\n", yystack_[1].value.as< std::string > ()); 
        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[2].value.as< ExprStruct > ().code.begin(), yystack_[2].value.as< ExprStruct > ().code.end());
        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[0].value.as< ExprStruct > ().code.begin(), yystack_[0].value.as< ExprStruct > ().code.end());
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back(yystack_[1].value.as< std::string > () + " " + yylhs.value.as< ExprStruct > ().reg_name + ", " + yystack_[2].value.as< ExprStruct > ().reg_name + ", " + yystack_[0].value.as< ExprStruct > ().reg_name);

        // std::cout << "In mult_expr -> mult_expr mulop term:" << std::endl
        //     << "term.code.size(): " << $3.code.size() << std::endl
        //     << "term.code[0]: " << $3.code[0] << ", term.code[1]" << $3.code[1] << std::endl
        //     << std::endl;
    }
#line 1435 "parser.tab.cc" // lalr1.cc:859
    break;

  case 51:
#line 778 "mini_l.yy" // lalr1.cc:859
    { yylhs.value.as< std::string > () = "*"; }
#line 1441 "parser.tab.cc" // lalr1.cc:859
    break;

  case 52:
#line 779 "mini_l.yy" // lalr1.cc:859
    { yylhs.value.as< std::string > () = "/"; }
#line 1447 "parser.tab.cc" // lalr1.cc:859
    break;

  case 53:
#line 780 "mini_l.yy" // lalr1.cc:859
    { yylhs.value.as< std::string > () = "%"; }
#line 1453 "parser.tab.cc" // lalr1.cc:859
    break;

  case 54:
#line 785 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("term -> var\n"); 
        yylhs.value.as< ExprStruct > () = yystack_[0].value.as< ExprStruct > ();
        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("= " + yylhs.value.as< ExprStruct > ().reg_name + ", " + yystack_[0].value.as< ExprStruct > ().reg_name);

    }
#line 1467 "parser.tab.cc" // lalr1.cc:859
    break;

  case 55:
#line 794 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("term -> SUB var\n");

        yylhs.value.as< ExprStruct > () = yystack_[0].value.as< ExprStruct > ();

        std::string twoTemp = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + twoTemp);
        yylhs.value.as< ExprStruct > ().code.push_back("= " + twoTemp + ", " + "2");

        std::string doubleTemp = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + doubleTemp);
        yylhs.value.as< ExprStruct > ().code.push_back("= " + doubleTemp + ", " + yystack_[0].value.as< ExprStruct > ().reg_name);

        // Right now the var is in doubleTemp,
        // and 2 is in twoTemp

        // doubleTemp *= 2
        yylhs.value.as< ExprStruct > ().code.push_back("* " + doubleTemp + ", " + doubleTemp + ", " + twoTemp);

        // Give $$ its own copy of the original var
        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("= " + yylhs.value.as< ExprStruct > ().reg_name + ", " + yystack_[0].value.as< ExprStruct > ().reg_name);

        // Now, do $$ -= doubleTemp
        yylhs.value.as< ExprStruct > ().code.push_back("- " + yylhs.value.as< ExprStruct > ().reg_name + ", " + yylhs.value.as< ExprStruct > ().reg_name + ", " + doubleTemp);
    }
#line 1500 "parser.tab.cc" // lalr1.cc:859
    break;

  case 56:
#line 822 "mini_l.yy" // lalr1.cc:859
    {

        debug_print_int("term -> NUMBER %d\n", yystack_[0].value.as< int > ());

        //ExprStruct es;
        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("= " + yylhs.value.as< ExprStruct > ().reg_name + ", " + std::to_string(yystack_[0].value.as< int > ()));
    }
#line 1514 "parser.tab.cc" // lalr1.cc:859
    break;

  case 57:
#line 832 "mini_l.yy" // lalr1.cc:859
    { 
        debug_print_int("term -> SUB NUMBER %d\n", yystack_[0].value.as< int > ()); 

        ExprStruct number_es;

        // Give number_es.reg_name a register and declare it
        number_es.reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + number_es.reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("= " + number_es.reg_name + ", " + std::to_string(yystack_[0].value.as< int > ()));

        // Put the result for 0 - number_es.reg_name into $$
        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("- " + yylhs.value.as< ExprStruct > ().reg_name + ", 0, " + number_es.reg_name);

    }
#line 1535 "parser.tab.cc" // lalr1.cc:859
    break;

  case 58:
#line 848 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("term -> L_PAREN expression R_PAREN\n");

        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[1].value.as< ExprStruct > ().code.begin(), yystack_[1].value.as< ExprStruct > ().code.end());

        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("= " + yylhs.value.as< ExprStruct > ().reg_name + ", " + yystack_[1].value.as< ExprStruct > ().reg_name);

    }
#line 1551 "parser.tab.cc" // lalr1.cc:859
    break;

  case 59:
#line 860 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("term -> SUB L_PAREN expression R_PAREN\n");

        yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), yystack_[1].value.as< ExprStruct > ().code.begin(), yystack_[1].value.as< ExprStruct > ().code.end());

        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("= " + yylhs.value.as< ExprStruct > ().reg_name + ", " + yystack_[1].value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("- " + yylhs.value.as< ExprStruct > ().reg_name + ", 0, " + yylhs.value.as< ExprStruct > ().reg_name);

    }
#line 1568 "parser.tab.cc" // lalr1.cc:859
    break;

  case 60:
#line 872 "mini_l.yy" // lalr1.cc:859
    {

        debug_print_char("term -> IDENTIFIER %s L_PAREN R_PAREN\n", yystack_[2].value.as< std::string > ());

        if (!isInSymbolTable(yystack_[2].value.as< std::string > ())) {

            yy::parser::error(yystack_[2].location, "Function \"" + yystack_[2].value.as< std::string > () + "\" has not been declared in the current context");
        }

        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("call " + yystack_[2].value.as< std::string > () + ", " + yylhs.value.as< ExprStruct > ().reg_name);
    }
#line 1586 "parser.tab.cc" // lalr1.cc:859
    break;

  case 61:
#line 886 "mini_l.yy" // lalr1.cc:859
    {

        debug_print_char("term -> IDENTIFIER %s L_PAREN expression_loop R_PAREN\n", yystack_[3].value.as< std::string > ());

        if (!isInSymbolTable(yystack_[3].value.as< std::string > ())) {

            yy::parser::error(yystack_[3].location, "Function \"" + yystack_[3].value.as< std::string > () + "\" has not been declared in the current context");
        }
        if (!checkIdType(yystack_[3].value.as< std::string > (), IdentType::FUNCTION)) {

            yy::parser::error(yystack_[3].location, "Attempted to call non-function \"" + yystack_[3].value.as< std::string > () + "\"");
        }

        for (ExprStruct this_expr_struct : yystack_[1].value.as< std::vector<ExprStruct> > ()) {

            yylhs.value.as< ExprStruct > ().code.insert(yylhs.value.as< ExprStruct > ().code.end(), this_expr_struct.code.begin(), this_expr_struct.code.end());
            yylhs.value.as< ExprStruct > ().code.push_back("param " + this_expr_struct.reg_name);
        }

        yylhs.value.as< ExprStruct > ().reg_name = generateTempReg();
        yylhs.value.as< ExprStruct > ().code.push_back(". " + yylhs.value.as< ExprStruct > ().reg_name);
        yylhs.value.as< ExprStruct > ().code.push_back("call " + yystack_[3].value.as< std::string > () + ", " + yylhs.value.as< ExprStruct > ().reg_name);

        paramCount = 0;

    }
#line 1617 "parser.tab.cc" // lalr1.cc:859
    break;

  case 62:
#line 916 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("expression_loop -> expression");

        yystack_[0].value.as< ExprStruct > ().reg_name = generateTempReg();
        yystack_[0].value.as< ExprStruct > ().code.push_back(". " + yystack_[0].value.as< ExprStruct > ().reg_name);
        // $1.code.push_back("= " + $1.reg_name + ", $" + paramCount);

        yylhs.value.as< std::vector<ExprStruct> > ().push_back(yystack_[0].value.as< ExprStruct > ());

        paramCount++;
    }
#line 1634 "parser.tab.cc" // lalr1.cc:859
    break;

  case 63:
#line 929 "mini_l.yy" // lalr1.cc:859
    {

        debug_print("expression_loop -> expression_loop COMMA expression");

        yylhs.value.as< std::vector<ExprStruct> > () = yystack_[2].value.as< std::vector<ExprStruct> > ();

        yylhs.value.as< std::vector<ExprStruct> > ().push_back(yystack_[0].value.as< ExprStruct > ());
    }
#line 1647 "parser.tab.cc" // lalr1.cc:859
    break;

  case 64:
#line 941 "mini_l.yy" // lalr1.cc:859
    {

        debug_print_char("var -> IDENTIFIER %s\n", yystack_[0].value.as< std::string > ());

        if (!isInSymbolTable(yystack_[0].value.as< std::string > ())) {

            yy::parser::error(yystack_[0].location, "Attempted to use undeclared variable \"" + yystack_[0].value.as< std::string > () + "\".");
        }

        else if (checkIdType(yystack_[0].value.as< std::string > (), IdentType::ARRAY)) {

            yy::parser::error(yystack_[0].location, "Attempted to use array variable \"" + yystack_[0].value.as< std::string > () + "\" as a non-array variable.");
        }

        ExprStruct es;
        es.reg_name = yystack_[0].value.as< std::string > ();
        // es.code.push_back(". " + $1);

        yylhs.value.as< ExprStruct > () = es;
    }
#line 1672 "parser.tab.cc" // lalr1.cc:859
    break;

  case 65:
#line 962 "mini_l.yy" // lalr1.cc:859
    {

        debug_print_char("var -> IDENTIFIER %s L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n", yystack_[3].value.as< std::string > ());

        // $$ = ".[] " + $1 + ", " + $3;
        ExprStruct es;
        // es.original_name = $1;
        es.code.push_back(".[] " + yystack_[3].value.as< std::string > () + ", " + yystack_[1].value.as< ExprStruct > ().reg_name);
        es.reg_name = generateTempReg();

        yylhs.value.as< ExprStruct > () = es;
    }
#line 1689 "parser.tab.cc" // lalr1.cc:859
    break;


#line 1693 "parser.tab.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char parser::yypact_ninf_ = -76;

  const signed char parser::yytable_ninf_ = -1;

  const short int
  parser::yypact_[] =
  {
     -76,     9,   -76,   -76,    41,   -37,   -76,   -76,    11,    12,
     -76,    -3,    43,   -76,    25,    37,   -76,   -76,    82,    23,
       4,   -76,    29,   -76,    77,    40,   152,    52,   159,   159,
      68,   -76,    51,    51,    34,    70,    14,    78,    76,   108,
      27,   -76,   -76,    20,   159,    13,   -76,    -1,   106,   -76,
     158,     8,   -76,   -76,   -11,   -76,    86,   -76,    86,    34,
      65,    34,   -76,    95,   -76,    34,   123,   -76,   -76,   158,
      34,   -76,   -76,   -20,   175,   -16,   152,   159,   159,    34,
      34,   -76,   -76,   -76,   -76,   -76,   -76,    34,   -76,   -76,
     -76,    34,   -76,   152,    51,    72,    -9,   -76,    65,   -76,
      34,   101,   -76,   -76,   -76,    65,    17,    92,   106,   -76,
       8,     8,    65,   -76,   152,   105,   -76,   -76,    65,   -76,
      34,   -76,   -76,   152,   122,   120,    65,   135,   -76,   159,
     -76,   113
  };

  const unsigned char
  parser::yydefact_[] =
  {
       2,     0,     4,     1,     3,     0,     5,     6,     0,     0,
       8,     0,     0,    14,     0,     0,     8,     9,     0,     0,
       0,    12,     0,    15,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,     0,    64,     0,     0,     0,     0,
       0,    35,    37,     0,     0,    64,    56,     0,    29,    31,
       0,    46,    49,    54,     0,    21,    23,    27,    24,     0,
      26,     0,     7,     0,    10,     0,     0,    36,    38,     0,
       0,    57,    55,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,    45,     0,    51,    52,
      53,     0,    19,     0,     0,     0,     0,    11,    16,    13,
       0,     0,    39,    58,    60,    62,     0,     0,    30,    32,
      47,    48,    33,    50,     0,     0,    28,    65,    34,    59,
       0,    61,    17,     0,     0,     0,    63,     0,    20,     0,
      18,    22
  };

  const short int
  parser::yypgoto_[] =
  {
     -76,   -76,   -76,   -76,   -76,   -76,   131,   -75,   -76,   -76,
     -33,   -76,   -76,   116,   -25,    83,    81,    93,   -14,    32,
     -76,    64,   -76,   -26
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     1,     2,     4,     6,     8,    11,    36,    14,    15,
      37,   114,    93,    56,    47,    48,    49,    87,    50,    51,
      91,    52,   106,    53
  };

  const unsigned char
  parser::yytable_[] =
  {
      38,   107,    12,    63,    54,    77,    57,    57,    92,     3,
      38,    24,     7,    76,    77,    43,    10,    72,   115,    73,
      60,    79,    80,    62,    77,   102,    69,    28,    59,   104,
      74,    29,    30,    45,    46,    31,    32,    33,   117,   124,
      88,    89,    90,    34,     5,    95,    13,    96,   127,    16,
      38,    98,     9,    13,    67,    68,   101,    75,    43,    61,
     120,   105,   121,    35,    70,    43,    17,    38,   116,    35,
      71,    59,    23,   112,    63,    25,    45,    46,    59,    18,
      19,    38,    63,    45,    46,    26,   118,    55,    38,    38,
      27,    63,    21,    22,    63,    79,    80,    38,    38,    39,
      35,    38,    79,    80,   131,    28,   126,   122,   123,    29,
      30,   110,   111,    31,    32,    33,    61,   103,    28,    64,
      66,    34,    29,    30,    65,   125,    31,    32,    33,    94,
      78,    79,    80,    99,    34,    28,    97,   129,    77,    29,
      30,    35,   128,    31,    32,    33,   119,    20,    28,    58,
     130,    34,    29,    30,    35,   113,    31,    32,    33,   109,
     108,     0,   100,     0,    34,    28,     0,     0,     0,    29,
      30,    35,     0,    31,    32,    33,     0,     0,     0,     0,
       0,    34,     0,     0,    35,    40,    41,    42,    79,    80,
      43,     0,     0,    81,    82,    83,    84,    85,    86,     0,
       0,    35,     0,    44,     0,    79,    80,     0,    45,    46,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
     103
  };

  const short int
  parser::yycheck_[] =
  {
      26,    76,     5,    36,    29,    25,    32,    33,    19,     0,
      36,     7,    49,    14,    25,    31,     4,    43,    93,    44,
      34,    30,    31,     9,    25,    45,    40,    13,    44,    45,
      44,    17,    18,    49,    50,    21,    22,    23,    47,   114,
      32,    33,    34,    29,     3,    59,    49,    61,   123,     6,
      76,    65,    41,    49,    27,    28,    70,    44,    31,    46,
      43,    75,    45,    49,    44,    31,    41,    93,    94,    49,
      50,    44,    49,    87,   107,    46,    49,    50,    44,    42,
      43,   107,   115,    49,    50,     8,   100,    19,   114,   115,
      50,   124,    10,    11,   127,    30,    31,   123,   124,    47,
      49,   127,    30,    31,   129,    13,   120,    15,    16,    17,
      18,    79,    80,    21,    22,    23,    46,    45,    13,    41,
      12,    29,    17,    18,    48,    20,    21,    22,    23,    43,
      24,    30,    31,    10,    29,    13,    41,    17,    25,    17,
      18,    49,    20,    21,    22,    23,    45,    16,    13,    33,
      15,    29,    17,    18,    49,    91,    21,    22,    23,    78,
      77,    -1,    69,    -1,    29,    13,    -1,    -1,    -1,    17,
      18,    49,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    49,    26,    27,    28,    30,    31,
      31,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      -1,    49,    -1,    44,    -1,    30,    31,    -1,    49,    50,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      45
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    52,    53,     0,    54,     3,    55,    49,    56,    41,
       4,    57,     5,    49,    59,    60,     6,    41,    42,    43,
      57,    10,    11,    49,     7,    46,     8,    50,    13,    17,
      18,    21,    22,    23,    29,    49,    58,    61,    74,    47,
      26,    27,    28,    31,    44,    49,    50,    65,    66,    67,
      69,    70,    72,    74,    65,    19,    64,    74,    64,    44,
      69,    46,     9,    61,    41,    48,    12,    27,    28,    69,
      44,    50,    74,    65,    69,    44,    14,    25,    24,    30,
      31,    35,    36,    37,    38,    39,    40,    68,    32,    33,
      34,    71,    19,    63,    43,    69,    69,    41,    69,    10,
      68,    69,    45,    45,    45,    69,    73,    58,    66,    67,
      70,    70,    69,    72,    62,    58,    74,    47,    69,    45,
      43,    45,    15,    16,    58,    20,    69,    58,    20,    17,
      15,    65
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    51,    53,    52,    54,    54,    56,    55,    57,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    61,    62,
      61,    63,    61,    61,    61,    61,    61,    64,    64,    65,
      65,    66,    66,    67,    67,    67,    67,    67,    67,    67,
      68,    68,    68,    68,    68,    68,    69,    69,    69,    70,
      70,    71,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    72,    73,    73,    74,    74
  };

  const unsigned char
  parser::yyr2_[] =
  {
       0,     2,     0,     2,     0,     2,     0,    13,     0,     3,
       2,     3,     3,     8,     1,     3,     3,     5,     7,     0,
       6,     0,     7,     2,     2,     1,     2,     1,     3,     1,
       3,     1,     3,     3,     4,     1,     2,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     1,     1,     1,     1,     2,     1,     2,     3,     4,
       3,     4,     1,     3,     1,     4
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "FUNCTION", "BEGINPARAMS",
  "ENDPARAMS", "BEGINLOCALS", "ENDLOCALS", "BEGINBODY", "ENDBODY",
  "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO",
  "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT",
  "TRUE", "FALSE", "RETURN", "ADD", "SUB", "MULT", "DIV", "MOD", "EQ",
  "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA",
  "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN",
  "IDENTIFIER", "NUMBER", "$accept", "prog_start", "$@1", "program",
  "function", "$@2", "declaration_loop", "statement_loop", "declaration",
  "id_loop", "statement", "$@3", "$@4", "var_loop", "bool_expr",
  "relation_and_expr", "relation_expr", "comp", "expression", "mult_expr",
  "mulop", "term", "expression_loop", "var", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  parser::yyrline_[] =
  {
       0,   186,   186,   186,   201,   206,   215,   215,   270,   276,
     287,   293,   304,   332,   365,   371,   386,   396,   433,   471,
     471,   508,   508,   539,   556,   568,   586,   600,   607,   616,
     621,   628,   633,   641,   655,   672,   681,   688,   696,   704,
     716,   717,   718,   719,   720,   721,   725,   729,   742,   757,
     762,   778,   779,   780,   785,   794,   822,   832,   848,   860,
     872,   886,   916,   929,   941,   962
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 2171 "parser.tab.cc" // lalr1.cc:1167
#line 980 "mini_l.yy" // lalr1.cc:1168


int main(int argc, char *argv[])
{
	yy::parser p;
	return p.parse();
}

void yy::parser::error(const yy::location& l, const std::string& m)
{
	std::cerr << "Error at location " << l << ": " << m << std::endl;
    errorOccurred = true;
}

void debug_print(std::string msg) {

    if (debug) printf("%s", msg.c_str());
}

void debug_print_char(std::string msg, std::string c) {

    if (debug) printf(msg.c_str(), c.c_str());
}

void debug_print_int(std::string msg, int i) {

    if (debug) printf(msg.c_str(), i);
}

std::string concat(std::vector<std::string> strings, std::string prefix, std::string delim) {

    std::string str = "";

    for (std::string this_str : strings)
        str += prefix + this_str + delim;

    return str;

}

// int Ident::static_id = 0;

bool isKeyword(std::string name) {
    return keywords.find(name) != keywords.end();
}

bool isInSymbolTable(std::string name) {

    return symbol_table.find(name) != symbol_table.end();
}

bool checkIdType(std::string id, IdentType type) {

    if (!isInSymbolTable(id)) return false;

    // If you're here, then id is in the symbol table
    return type == symbol_table.at(id);
}

std::ostream& operator <<(std::ostream& out, const std::vector< ExprStruct > & printMe) {

    for (ExprStruct thisExpr : printMe) {

        out << thisExpr << std::endl;
    }

    return out;
}


std::ostream& operator <<(std::ostream& out, const std::vector< std::string> & printMe) {

    for (std::string thisStr : printMe) {

        out << thisStr << std::endl;
    } 

    return out;
}

std::string generateTempReg() {

    static int i = 0;

    return "__temp__" + std::to_string(i++);
}

std::string generateTempLabel() {

    static int i = 0;

    return "__label__" + std::to_string(i++);
}

void populateKeywords() {

    keywords.insert("function");
    keywords.insert("beginparams");
    keywords.insert("endparams");
    keywords.insert("beginlocals");
    keywords.insert("endlocals");
    keywords.insert("beginbody");
    keywords.insert("endbody");
    keywords.insert("integer");
    keywords.insert("array");
    keywords.insert("of");
    keywords.insert("if");
    keywords.insert("then");
    keywords.insert("endif");
    keywords.insert("else");
    keywords.insert("while");
    keywords.insert("do");
    keywords.insert("beginloop");
    keywords.insert("endloop");
    keywords.insert("continue");
    keywords.insert("read");
    keywords.insert("write");
    keywords.insert("and");
    keywords.insert("or");
    keywords.insert("not");
    keywords.insert("true");
    keywords.insert("false");
    keywords.insert("return");
}
