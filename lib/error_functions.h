#ifndef ERROR_FUNCTIONS_H
#define ERROR_FUNCTIONS_H

/*-----------------------------------------------------------------------
* Custom
*----------------------------------------------------------------------*/
#ifdef __GUNC__
#define NORETURN __attribute__ ((__noreturn__))
#else
#define NORETURN
#endif

/* Check system call or function call error */
void errMsg     (const char *format,...);
void errExit    (const char *format,...) NORETURN;
void err_exit   (const char *format,...) NORETURN;
void errExitEN  (int errnum, const char *format,...) NORETURN;
void fatal      (const char *format,...) NORETURN;
void usageErr   (const char *format,...) NORETURN;
void cmdLineErr (const char *format,...) NORETURN;

#endif