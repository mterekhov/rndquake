//
//  types.h
//  quake
//
//  Created by cipher on 15.10.2024.
//

#ifndef types_h
#define types_h

/// simple byte definition
typedef unsigned char byte;

/// ustom boolean type
typedef enum {false, true} qboolean;

/// Structure which describes buffer with size, capacity and pointer to allocated data itself
struct sizebuf_s {
    qboolean allowoverflow;    // if false, do a Sys_Error
    qboolean overflowed;        // set to true if the buffer size failed
    byte *data;     //  pointer to buffer itself
    int maxsize;    //  size of buffer, size of allocated memory
    int cursize;    //  number of bytes which are used out of maxSize
};

#endif /* types_h */
