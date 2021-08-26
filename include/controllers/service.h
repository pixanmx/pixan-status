#ifndef _PIXAN_MAIN_H_
#define _PIXAN_MAIN_H_

struct _HttpResponse;

extern struct _HttpResponse *pixan_works;
extern struct _HttpResponse *current_version;

extern struct _HttpResponse *catch_all;

extern unsigned int pixan_service_init (void);

extern void pixan_service_end (void);

#endif