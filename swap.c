
Void swap(void *data1ptr, void *data2ptr, size_t nbytes) {
	char temp[nbytes]; 
// void *memcpy(void *dest, const void *src, size_t n);
	memcpy(temp, data1ptr, nbytes);
	memcpy(data1ptr, data2ptr, nbytes);
	memcpy(data2ptr, temp, nbytes)
} // the nbytes will decide the size of the datatype in a function


// memcpy is a function that copies a specified amount of bytes at one address to another address.
