#include <stdio.h>

/**
 * myStartupFun - Function to be executed
 * before the main function.
 * Prints "You're beat! and yet, you must allow,
 *		\nI bore my house upon my back!\n".
 */
void myStartupFun(void) __attribute__((constructor));

/**
 * myStartupFun - Function to be executed before the main function.
 */
void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
