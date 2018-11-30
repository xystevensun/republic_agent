/*
 * thread_data.h
 *
 *  Created on: Aug 29, 2016
 *      Author: xs6
 */

#ifndef SRC_THREAD_DATA_H_
#define SRC_THREAD_DATA_H_

#include <sys/poll.h>
#include <assert.h>
#include <zlog.h>
#ifndef NETMAP_WITH_LIBS
#define NETMAP_WITH_LIBS
#endif
#include "net/netmap_user.h"

#include "global.h"
#include "hero.h"
#include "checksum.h"

#define NM_H2N	0
#define NM_N2H	1

void *thread_netmap(void *arg);

#endif /* SRC_THREAD_DATA_H_ */
