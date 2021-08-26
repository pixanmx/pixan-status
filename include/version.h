#ifndef _PIXAN_VERSION_H_
#define _PIXAN_VERSION_H_

#define PIXAN_VERSION			"0.1"
#define PIXAN_VERSION_NAME		"Version 0.1"
#define PIXAN_VERSION_DATE		"25/08/2021"
#define PIXAN_VERSION_TIME		"23:02 CST"
#define PIXAN_VERSION_AUTHOR	"Erick Salas"

// print full pixan version information
extern void pixan_version_print_full (void);

// print the version id
extern void pixan_version_print_version_id (void);

// print the version name
extern void pixan_version_print_version_name (void);

#endif