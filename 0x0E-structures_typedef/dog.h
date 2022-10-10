
#include "dog.h"

#include <stdio.h>

#include <stdlib.h>


/**
 *
 *  * print_dog - Prints a struct dog.
 *
 *   * @d: The struct dog to be printed.
 *
 *    */

void print_dog(struct dog *d)

{

	        if (d == NULL)

			                return;


		        if (d->name == NULL)

				                printf("Name: (nil)\n");

			        else

					                printf("Name: %s\n", d->name);


				        if (d->age < 0)

						                printf("Age: (nil)\n");

					        else

							                printf("Age: %f\n", d->age);


						        if (d->owner == NULL)

								                printf("Owner: (nil)\n");

							        else

									                printf("Owner: %s\n", d->owner);

}
#ifndef DOG_H

#define DOG_H

/**
 *
 *  * struct dog - A new type describing a dog.
 *
 *   * @name: The name of the dog.
 *
 *    * @age: The age of the dog.
 *
 *     * @owner: The owner of the dog.
 *
 *      */

struct dog

{

	        char *name;

		        float age;

			        char *owner;

};


/**
 *
 *  * dog_t - Typedef for struct dog
 *
 *   */

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);


#endif
