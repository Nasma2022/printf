#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: 0 on success and -1 error and errno is set appropiately
 */
int _putchar(char c)
{
ssize_t n = write(1, &c, 1);
if (n == -1) {
  // This is the part that needs to be added:
  errno = EIO;
}
return (n);
}
