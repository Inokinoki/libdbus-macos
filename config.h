//
//  config.h
//  libibus-test
//
//  Created by Inoki on 21/11/2020.
//  Copyright © 2020 inoki. All rights reserved.
//

#ifndef CONFIG_H_SEEN
#define CONFIG_H_SEEN


/* Define to 1 if you have the `sqlite3' library. */
#define HAVE_LIBSQLITE3 1

/* Define to 1 if you have the `iconv' library. */
#define HAVE_LIBICONV 1
#define ENABLE_NLS 1
#define GETTEXT_PACKAGE "sunpinyin2"

/* Define to 1 if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* Define to 1 if the system has the function `bind_textdomain_codeset'. */
/* #undef HAVE_BIND_TEXTDOMAIN_CODESET */

/* Define to 1 if the system has the function `dcgettext'. */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if the system has the function `exp2'. */
#define HAVE_EXP2 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if the system has the function `getopt_long'. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if the system has the function `getpagesize'. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if the system has the function `get_opt'. */
/* #undef HAVE_GET_OPT */

/* Define to 1 if you have the <iconv.h> header file. */
#define HAVE_ICONV_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <libintl.h> header file. */
/* #undef HAVE_LIBINTL_H */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if the system has the function `log2'. */
#define HAVE_LOG2 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if the system has the function `memset'. */
#define HAVE_MEMSET 1

/* Define to 1 if the system has the function `mmap'. */
#define HAVE_MMAP 1

/* Define to 1 if the system has the function `munmap'. */
#define HAVE_MUNMAP 1

/* Define to 1 if the system has the function `setlocale'. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1
#define PACKAGE "libibus"
#define PACKAGE_NAME "libibus"
#define PACKAGE_STRING "libibus-1"
#define PACKAGE_TARNAME "libibus"
#define PACKAGE_VERSION "1.0"
#define VRESION "1.12"


#if defined(_BIG_ENDIAN) && !defined(_LITTLE_ENDIAN)
# define WORDS_BIGENDIAN 1

#elif defined(_LITTLE_ENDIAN) && !defined(_BIG_ENDIAN)
# undef WORDS_BIGENDIAN

#elif defined(__sparc) || defined(__sparc__) \
  || defined(_POWER)   || defined(__powerpc__) \
  || defined(__ppc__)  || defined(__hpux) || defined(__hppa) \
  || defined(_MIPSEB)  || defined(_POWER) \
  || defined(__s390__) || (defined(__sh__) && defined(__BIG_ENDIAN__)) \
  || defined(__AARCH64EB__) \
  || defined(__m68k__)
# define WORDS_BIGENDIAN 1

#elif defined(__i386__) || defined(__i386) \
  || defined(__ia64)    || defined(__ia64__) \
  || defined(_M_IX86)   || defined(_M_IA64) \
  || defined(_M_ALPHA)  || defined(__amd64) \
  || defined(__amd64__) || defined(_M_AMD64) \
  || defined(__x86_64)  || defined(__x86_64__) \
  || defined(_M_X64)    || defined(__bfin__) \
  || defined(__alpha__) || defined(__ARMEL__) \
  || defined(_MIPSEL)   || (defined(__sh__) && defined(__LITTLE_ENDIAN__)) \
  || defined(__riscv) \
  || defined(__AARCH64EL__)
# undef WORDS_BIGENDIAN

#else
# error can not detect the endianness!
#endif

#define DBUS_COMPILATION 1

#define DBUS_UNIX 1

#define DBUS_ENABLE_CHECKS 1

#define DBUS_ENABLE_VERBOSE_MODE 1

#define HAVE_ERRNO_H 1

#define __APPLE__ 1

#define DBUS_DATADIR ""

#define DBUS_SYSTEM_CONFIG_FILE "system.conf"
#define DBUS_SESSION_CONFIG_FILE "session.conf"

#define DBUS_SESSION_BUS_CONNECT_ADDRESS "/tmp"
#define DBUS_SYSTEM_BUS_CONNECT_ADDRESS "/tmp"

#define DBUS_MACHINE_UUID_FILE "dbus-uuid"

/* A 'va_copy' style function */
#define DBUS_VA_COPY va_copy
/* 'va_lists' cannot be copies as values */
#define DBUS_VA_COPY_AS_ARRAY 1

#define DBUS_SYSTEM_BUS_DEFAULT_ADDRESS "/tmp/dbus-system.sock"


#endif /* CONFIG_H_SEEN */
