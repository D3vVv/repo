#include <includes/stddef.h>
#include <includes/string.h>
#include <includes/stdio.h>
#include <includes/tty.h>
 
void kernel_early(void)
{
	terminal_initialize();
}
 
void kernel_main(void)
{
	printf("Hello");
}