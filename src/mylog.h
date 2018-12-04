#ifndef __MYLOG_H
#define __MYLOG_H

#define CL_NONE        "\033[0m"
#define CL_RED         "\033[0;31m"
#define CL_LT_GRAY     "\033[0;37m"
#define CL_GRAY        "\033[1;30m"
#define CL_LT_GREEN    "\033[1;32m"
#define CL_YELLOW      "\033[1;33m"
#define CL_WHITE       "\033[1;37m"

//Black        0;30     Dark Gray     1;30
//Red          0;31     Light Red     1;31
//Green        0;32     Light Green   1;32
//Brown/Orange 0;33     Yellow        1;33
//Blue         0;34     Light Blue    1;34
//Purple       0;35     Light Purple  1;35
//Cyan         0;36     Light Cyan    1;36
//Light Gray   0;37     White         1;37

#define MYLOG( x, ... ) { 			\
	time_t rawtime;			\
	struct tm * timeinfo;		\
	char buffer_time[80];		\
	time (&rawtime);		\
	timeinfo = localtime(&rawtime);	\
	strftime(buffer_time,sizeof(buffer_time),"%d-%m-%Y %H:%M:%S",timeinfo); \
	char buffer_log[2048]; 		\
	sprintf( buffer_log, "\n%s" CL_NONE "%s" CL_NONE "\n", CL_RED "%s " CL_LT_GREEN "[%s:%d] " CL_YELLOW "%s():\n", x );	\
	printf( buffer_log, buffer_time ,  __FILE__, __LINE__, __FUNCTION__, ##__VA_ARGS__  ); \
    };


#endif