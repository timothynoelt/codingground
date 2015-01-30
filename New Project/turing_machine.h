// MAX_SYMBOLS is the number of allowed ASCII values                   
#define MAX_SYMBOLS   255                                              
                                                                       
// MAX_STATES is the maximum number of states the program allows       
#define MAX_STATES    255                                              
                                                                       
// MAX_TAPE_LEN is the tape length that this turing machine            
// can handle.                                                         
#define MAX_TAPE_LEN  255                                              
                                                                       
// MAX_ACTIONS are the total number of action rules allowed            
// by this machine                                                     
#define MAX_ACTIONS   1024                                             
                                                                       
// The three different special symbols are defined here                
#define SPACE ' '                                                      
#define DASH '-'                                                       
#define WILDCARD '*'                                                   
                                                                       
// Directions for transition are defined here                          
#define RIGHT 1                                                        
#define LEFT -1                                                        
#define STAY 0 

// Errors are defined here
#define ERR_BAD_TAPE        1
#define ERR_TAPELENGTH      2
#define ERR_BADSTART        3
#define ERR_CANT_START      4
#define ERR_BADSTATES       5
#define ERR_BAD_RULES	    6

#define ERR_NO_MATCH        7
#define ERR_FILEOPEN        8
#define ERR_NOARGS          9
#define ERR_NO_HALT         10

// Macros
// This one checks if the reading is within min and max
#define IS_WITHIN(a, min, max) \
if (((a) < (min)) || ((a) > (max))) 

// Our simple debug for future extension
#define print_debug(format, args...) \
printf(format, ##args);

// The data structure to hold an action rule goes here.
typedef struct action {
      unsigned int new_state;
      unsigned char exists;
      unsigned char write;
      char dir;
} action_rules;
