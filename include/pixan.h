#ifndef _PIXAN_H_
#define _PIXAN_H_

#include "runtime.h"

struct _HttpResponse;

extern RuntimeType RUNTIME;

extern unsigned int PORT;

extern unsigned int CERVER_RECEIVE_BUFFER_SIZE;
extern unsigned int CERVER_TH_THREADS;
extern unsigned int CERVER_CONNECTION_QUEUE;

// inits pixan main values
extern unsigned int pixan_init (void);

// ends pixan main values
extern unsigned int pixan_end (void);

#endif