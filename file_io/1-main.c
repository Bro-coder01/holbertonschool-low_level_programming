#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - Creates a file with specific permissions and content.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, res_write;

	if (filename == NULL)
		return (-1);

	/* Open with: Create if missing, Write only, Truncate if exists */
	/* Permissions: 0600 (rw-------) */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Calculate length of text_content */
		while (text_content[len])
			len++;

		/* Write content to file */
		res_write = write(fd, text_content, len);
		if (res_write == -1 || res_write != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
