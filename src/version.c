#include <cerver/utils/log.h>

#include "version.h"

// print full test version information
void pixan_version_print_full (void) {

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"\nPixan Status Service Version: %s", PIXAN_VERSION_NAME
	);

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"Release Date & time: %s - %s", PIXAN_VERSION_DATE, PIXAN_VERSION_TIME
	);

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"Author: %s\n", PIXAN_VERSION_AUTHOR
	);

}

// print the version id
void pixan_version_print_version_id (void) {

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"\nPixan Status Service Version ID: %s\n", PIXAN_VERSION
	);

}

// print the version name
void pixan_version_print_version_name (void) {

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"\nPixan Status Service Version: %s\n", PIXAN_VERSION_NAME
	);

}
