/*
 * ICT1002 Assignment 2, 2016-17 Trimester 1.
 *
 * This file implements all of the Logo commands using the functions provided
 * in other files.
 *
 * All of the functions in this file (except do_commnad) accept a single
 * argument, being a string containing the argument passed to the interpreter. 
 * This string may be NULL or empty if the command does not use an argument.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "blogo.h"


/*
 * Execute a command.
 *
 * Input:
 *   command - a string containing the command (may be an empty string)
 *   arg - a string containing the argument (may be an empty string)
 *
 * Returns:
 *   0, if the interpreter should continue
 *   1, if the command indicates that the interpreter should exit
 */
int do_command(const char *command, const char *arg) {

	int done = 0;	/* return value */

	if (command == NULL || strlen(command) == 0) {
		/* blank line; do nothing and return */
		return 0;
	}
	
	/* determine which command was given and execute the appropriate function */
	if (compare_token(command, "backward") == 0)
		do_backward(arg);
	else if (compare_token(command, "forward") == 0)
		do_forward(arg);
	else if (compare_token(command, "left") == 0)
		do_left(arg);
	else if (compare_token(command, "list") == 0)
		do_list(arg);
	else if (compare_token(command, "load") == 0)
		do_load(arg);
	else if (compare_token(command, "output") == 0)
		do_output(arg);
	else if (compare_token(command, "pen") == 0)
		do_pen(arg);
	else if (compare_token(command, "print") == 0)
		do_print(arg);
	else if (compare_token(command, "right") == 0)
		do_right(arg);
	else if (compare_token(command, "run") == 0)
		do_run(arg);
	else if (compare_token(command, "save") == 0)
		do_save(arg);
	else if (compare_token(command, "exit") == 0)
		done = 1;
	else
		printf("Unrecognised command: %s.\n", command);
	
	return done;
	
}


/*
 * BACKWARD command.
 */
void do_backward(const char *arg) {
	
	/* to be implemented */
		
}


/*
 * FORWARD command.
 */
void do_forward(const char *arg) {

	/* to be implemented */
		
}


/*
 * LEFT command.
 */
void do_left(const char *arg) {

	/* to be implemented */
	
}


/*
 * LOAD command.
 */
void do_load(const char *arg) {
	
	/* to be implemented */

}


/*
 * LIST command.
 */
void do_list(const char *arg) {
	
	/* to be implemented */
	
}
	

/*
 * OUTPUT command.
 */
void do_output(const char *arg) {

	/* to be implemented */
	
}


/*
 * PEN command.
 */
void do_pen(const char *arg) {
	
	/* to be implemented */
	
}


/*
 * PRINT command.
 */
void do_print(const char *arg) {
	
	/* to be implemented */
	
}


/*
 * RIGHT command.
 */
void do_right(const char *arg) {
	
	/* to be implemented */
	
}

/*
 * RUN command.
 */
void do_run(const char *arg) {
	
	/* to be implemented */
	
}


/*
 * SAVE command.
 */
void do_save(const char *arg) {
	
	/* to be implemented */
	
}