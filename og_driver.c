#include <stdio.h>

#define OG_NAME_MAX		255

#include "og_tree.h"

int main(void)
{
	char *p = "/ibig/tree.st";
	int tree_h;
	tree_h = og_init(p, 256);
printf("get handler %d\n", tree_h);
	sleep(500);
	og_destory(tree_h);
	

	return 0;
}
