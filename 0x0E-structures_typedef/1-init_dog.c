#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a dog struct.
 * @d: pointer to dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Return: Always void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
