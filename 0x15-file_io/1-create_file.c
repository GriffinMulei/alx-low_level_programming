#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - o with a specified name and content
 * @filename: o to create
 * @text_contet: content to read into the o
 *
 * Rerurn: 1 on success, -1 on any failure
 */

int create_file(const char *filename, char *text_content)

{
	int o, w, len = 0;


	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	w = write(o, text_content, len);


	if (o == -1 || w == -1)
		return (-1);


	close(o);

	return (1);
}
