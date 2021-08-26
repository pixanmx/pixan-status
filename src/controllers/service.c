#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <cerver/http/response.h>

#include <cerver/utils/utils.h>

#include "version.h"

#define VERSION_BUFFER_SIZE		64

HttpResponse *pixan_works = NULL;
HttpResponse *current_version = NULL;

HttpResponse *catch_all = NULL;

unsigned int pixan_service_init (void) {

	unsigned int retval = 1;

	pixan_works = http_response_json_key_value (
		HTTP_STATUS_OK, "msg", "Pixan status works!"
	);

	char version[VERSION_BUFFER_SIZE] = { 0 };
	(void) snprintf (
		version, VERSION_BUFFER_SIZE - 1,
		"%s - %s",
		PIXAN_VERSION_NAME, PIXAN_VERSION_DATE
	);

	current_version = http_response_json_key_value (
		HTTP_STATUS_OK, "version", version
	);

	catch_all = http_response_json_key_value (
		HTTP_STATUS_OK, "msg", "Pixan status service!"
	);

	if (
		pixan_works && current_version
		&& catch_all
	) retval = 0;

	return retval;

}

void pixan_service_end (void) {

	http_response_delete (pixan_works);
	http_response_delete (current_version);

	http_response_delete (catch_all);

}
