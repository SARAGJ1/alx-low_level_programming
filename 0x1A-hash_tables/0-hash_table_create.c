#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - hash table creation
 * @size: size of the table
 *
 * return pointer to table if sucessed 
 * or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc((sizeof(unsigned long int) * size) + 16);
	if (table == NULL)
	{
		return (NULL);
	}
	return (table);
}
