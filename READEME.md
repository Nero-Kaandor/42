*This project has been created as part of the 42 curriculum by catsin-k*

# :open_book: Get Next Line


## :mag_right: Description

The Get Next Line project implements a function that reads one line at a time from a file dynamically using a file descriptor (fd). The function manages memory efficiently and allows lines to be retrieved from a file in multiple calls, which is ideal for large files.

> ### Code operation

`get_next_line(int fd)`

**<ins>Purpose</ins>**: Read and return a line from a file pointed to by the file descriptor fd.

**<ins>Return</ins>**: Returns a line read, or NULL if an error occurs or if the end of the file is reached

`fill_buffer_line(int fd, char *left, char *buffer)`

**<ins>Purpose</ins>**: Fill the buffer with data read from the file and concatenate it to the variable left, which stores what has been read but not yet returned.

**<ins>Return</ins>**: Returns the new string left containing the data read until a line is found or the end of the file is reached.


`define_line(char *line_buffer)`

**<ins>Purpose</ins>**: Process the read string to separate the line before the newline character (\n) and the remaining part for the next read.

**<ins>Return</ins>**: Returns the string remaining after the read line or NULL if the line does not contain \n.

## :eyeglasses: Instructions

To compile the code you might follow these steps:



> ### :spiral_notepad: Create a .txt file

For example, insert this extract from George Orwell's *Animal Farm* in your .txt file :
```
Mr. Jones, of the Manor Farm, had locked the hen-houses for the night, but
was too drunk to remember to shut the pop-holes. With the ring of light
from his lantern dancing from side to side, he lurched across the yard,
kicked off his boots at the back door, drew himself a last glass of beer
from the barrel in the scullery, and made his way up to bed, where
Mrs. Jones was already snoring.

As soon as the light in the bedroom went out there was a stirring and a
fluttering all through the farm buildings. Word had gone round during the
day that old Major, the prize Middle White boar, had had a strange dream
on the previous night and wished to communicate it to the other animals.
It had been agreed that they should all meet in the big barn as soon as
Mr. Jones was safely out of the way. Old Major (so he was always called,
though the name under which he had been exhibited was Willingdon Beauty)
was so highly regarded on the farm that everyone was quite ready to lose
an hour's sleep in order to hear what he had to say.
```

> ### :wrench: Create a main.c and compile

<code style="color : red">Insert<code> the path of your **.txt** file in the `main.c` as below :

```
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("path_of_your_file.txt", O_RDONLY);
	if (fd == -1)
	{
		write(2, "Error opening file\n", 19);
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		write(1, line, ft_strlen(line));
		free(line);
	}
	close(fd);
	return (0);
}
```

Compile with:
```
get_next_line.c get_next_line_utils.c main.c -Wextra -Werror -D BUFFER_SIZE=42
```

## :books: Resources
Here are some useful resources to further understand the topics covered in this project:

- <ins>C Programming Language: Mastering Procedural Programming (with Practical Exercises) (3rd edition) - Book by *Frederic Drouillon*</ins>
- <ins>The information from the terminal man pages</ins>
- <ins>[Doc Ubuntu](https://doc.ubuntu-fr.org)</ins>
- <ins>[Docs GitHub](https://docs.github.com/fr)</ins>
- <ins>[KooR.fr](https://koor.fr/)</ins>
- My peers from 42 Marseille


### :test_tube: Testing and Memory Leak Check

<ins>[gnlTester](https://github.com/Tripouille/gnlTester.git)</ins> by *Tripouille*
