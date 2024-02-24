#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - hash table creation
 * @size: size of the table
 *
 * @table : pointer to table if sucessed
 * or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		return (NULL);
	}
	return (table);
}
