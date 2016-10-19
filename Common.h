/*
 *  Common.h
 *  MachOView
 *
 *  Created by Peter Saghelyi on 10/09/2011.
 *
 */


//#define MV_NO_MULTITHREAD
//#define MV_NO_ARCHIVER
//#define MV_STATISTICS

extern NSCondition * pipeCondition;
extern int32_t numIOThread;
extern int64_t nrow_total;  // number of rows (loaded and empty)
extern int64_t nrow_loaded; // number of loaded rows

#define NSSTRING(C_STR) [NSString stringWithCString: (char *)(C_STR) encoding: NSUTF8StringEncoding]
#define CSTRING(NS_STR) [(NS_STR) cStringUsingEncoding: NSUTF8StringEncoding]

#define N_ELEMENTS(ARR)   (sizeof(ARR)/sizeof(*(ARR)))
#define FIRST_ELEM(ARR)   (&(ARR)[0])
#define LAST_ELEM(ARR)    (&(ARR)[N_ELEMENTS(ARR)-1])
