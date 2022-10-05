#if defined (__cplusplus)
extern "C" {
#endif


//****************************
// Simple Functions
//****************************

size_t LZ4_compress   (char* source, char* dest, size_t isize);
size_t LZ4_uncompress (char* source, char* dest, size_t osize);

/*
LZ4_compress :
	return : the number of bytes in compressed buffer dest
	note : destination buffer must be already allocated. 
		To avoid any problem, size it to handle worst cases situations (input data not compressible)
		Worst case size is : "inputsize + 0.4%", with "0.4%" being at least 8 bytes.
LZ4_uncompress :
	return : the number of bytes read in the source buffer
			 If the source stream is malformed, the function will stop decoding and return a negative result, indicating the byte position of the faulty instruction
			 This version never writes beyond dest + osize, and is therefore protected against malicious data packets
	note 1 : osize is the output size, therefore the original size
	note 2 : destination buffer must be already allocated
*/


//****************************
// Advanced Functions
//****************************

size_t LZ4_uncompress_unknownOutputSize (char* source, char* dest, size_t isize, size_t maxOutputSize);

/*
LZ4_uncompress_unknownOutputSize :
	return : the number of bytes decoded in the destination buffer (necessarily <= maxOutputSize)
			 If the source stream is malformed, the function will stop decoding and return a negative result, indicating the byte position of the faulty instruction
			 This version never writes beyond dest + maxOutputSize, and is therefore protected against malicious data packets
	note 1 : isize is the input size, therefore the compressed size
	note 2 : destination buffer must already be allocated, with at least maxOutputSize bytes
	note 3 : this version is slower by up to 10%, and is therefore not recommended for general use
*/


size_t LZ4_compressCtx(void** ctx, char* source,  char* dest, size_t isize);

/*
LZ4_compressCtx :
	This function explicitly handles the CTX memory structure.
	It avoids allocating/deallocating memory between each call, improving performance when malloc is time-consuming.
	On first call : provide a *ctx=NULL; It will be automatically allocated.
	On next calls : reuse the same ctx pointer.
	Use different pointers for different threads when doing multi-threading.
	note : performance difference is small, mostly noticeable when repetitively calling the compression algorithm on many small segments.
*/


//*********************************
// Deprecated decoding function
//*********************************

size_t LZ4_decode (char* source, char* dest, size_t isize);

/*
LZ4_decode : This version is faster, but deprecated
	return : the number of bytes in decoded buffer dest
	note 1 : isize is the input size, therefore the compressed size
	note 2 : destination buffer must be already allocated. 
			The program calling the decoder must know in advance the size of decoded stream to properly allocate the destination buffer
			The destination buffer size must be at least "decompressedSize + 3 Bytes"
			This version is **unprotected** against malicious data packets designed to create buffer overflow errors.
			It is therefore not recommended in unsecure situations, such as Internet communications.
			This function is deprecated.
*/


#if defined (__cplusplus)
}
#endif