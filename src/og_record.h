#ifndef _OG_RECORD_H_
#define _OG_RECORD_H_

#include "og_defs.h"

#define OG_TREE_FILE	"/ibig/ibig_monitor/tree.st"

#define _TMP_MOVE_CNT	10

int og_record_init(int bd, int fd);
int og_init_start(void);

/**
 * init ok, destory the stack
 */
int og_init_over(void);
int og_server_init(char *path);
void *og_server_work(void *p);

void *og_record_work(void *);

#endif
