#ifndef sz_h
#define sz_h

#include "types.h"

/// Allocate new buffer
/// - Parameters:
///   - buf: pointer to already created empty buffer structure
///   - startsize: number of bytes which should be allocated for buffer as maxSize
void SZ_Alloc(sizebuf_t *buf, int startsize);

/// Simply mark all bytes in buffer as free, i.e. assign curSize equal to zero
/// - Parameter buf: pointer to buffer structure
void SZ_Free(sizebuf_t *buf);

/// Exactly the same as SZ_Free
/// - Parameter buf: pointer to buffer structure
void SZ_Clear(sizebuf_t *buf);

/// Get pointer to memory of buffer if it is available with required length in bytes
/// - Parameters:
///   - buf: pointer to buffer where to get space
///   - length: number of space we want to use in buffer
void *SZ_GetSpace(sizebuf_t *buf, int length);

/// Copy number of bytes from data pointer to buffer
/// - Parameters:
///   - buf: target buffer where to the data should be copied
///   - data: pointer to the data which should be copied
///   - length: number of bytes to copy
void SZ_Write(sizebuf_t *buf, void *data, int length);


/// Copy zero-terminated string into buffer
/// - Parameters:
///   - buf: buffer where to place a string
///   - data: pointer to char sequence of string
void SZ_Print(sizebuf_t *buf, char *data);

#endif /* sz_h */
