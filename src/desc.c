#include <desc.h>


gdt_entry_t gdt[5];
sellect_t gdtpr;


void init_desc_tables()
{
	init_gdt();
}





