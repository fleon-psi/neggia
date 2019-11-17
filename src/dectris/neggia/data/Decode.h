/**
MIT License

Copyright (c) 2017 DECTRIS Ltd.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef DECODE_H
#define DECODE_H
#include <cstdlib>

#define LZ4_FILTER     32004
#define BSHUF_H5FILTER 32008

#define BSHUF_H5_COMPRESS_LZ4 2

void lz4Decode(const char * inBuffer, char * outBuffer, size_t & outBufferSize); 
void bshufUncompressLz4(const char * inBuffer, char * outBuffer, size_t & outBufferSize, size_t elementSize);

#ifdef USE_ZSTD

#define BSHUF_H5_COMPRESS_ZSTD 3
#define ZSTD_H5FILTER  32015

void uncompressZstd(const char *inBuffer, char *outBuffer, size_t &outBufferSize, size_t elementSize);
void uncompressGzip(const char *inBuffer, char *outBuffer, size_t &outBufferSize, size_t elementSize);
void bshufUncompressZstd(const char *inBuffer, char *outBuffer, size_t &outBufferSize, size_t elementSize);

#endif

#endif // DECODE_H

