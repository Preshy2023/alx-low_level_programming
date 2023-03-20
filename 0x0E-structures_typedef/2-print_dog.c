#include <stdio.h>
	#include <stdlib.h>
	#include "dog.h"


	/**
	 * print_dog - prints a struct dog
	 * @d: pointer to struct.
	 *
	 * Return: void.
	 */
void print_dog(struct dog *d)
	{
		if (d == 0)
		{
			return;
		}
		else
		{

		if (d->owner == NULL)
			printf("name: (nil)\n";
					else
					printf("Name: %s\n", d->name);

					printf("Age: %f\n", d->age);
					if (d->owner == NULL)
					printf("Owner: (nil)\n";

						printf("Owner: %s\n", d->owner);


		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}

