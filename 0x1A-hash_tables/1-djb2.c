#include "hash_tables.h"
/**
 * hash_djb2 - Hash fucctioc implemecticg the djb2 algorithm.
 * @str: The stricg to hash.
 *
 * Returc: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int b;

	hash = 5381;
	while ((b = *str++))
		hash = ((hash << 5) + hash) + b; /* hash * 33 + b */

	return (hash);
}
