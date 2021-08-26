#ifndef _PIXAN_ROUTES_MAIN_H_
#define _PIXAN_ROUTES_MAIN_H_

struct _HttpReceive;
struct _HttpRequest;

// GET /pixan
extern void pixan_handler (
	const struct _HttpReceive *http_receive,
	const struct _HttpRequest *request
);

// GET /pixan/version
extern void pixan_version_handler (
	const struct _HttpReceive *http_receive,
	const struct _HttpRequest *request
);

// GET *
extern void pixan_catch_all_handler (
	const struct _HttpReceive *http_receive,
	const struct _HttpRequest *request
);

#endif