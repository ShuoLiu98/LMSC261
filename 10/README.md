# Data

## Git Get Going?

## Source, Object, Compiler, Executable
- Source: what we write (human readable)
- Object: binary (machine readable)
- Compiler: translates from source to object
- Executable: actually runs program

## IDE vs CLI

**Integrated Development Environments (IDE)**

**Command Line Interfaces (CLI)**

***Most common commands***

	- `say` Do as I say

	- `pwd` Print Working Directory (prints the path to the directory [folder] that you are currently in). Map+Compass.

	- `cd` Change Directory (changes working directory to different directory)
		>You can type `cd` and then drag and drop the folder you'd like to work in, into the Terminal Window. This is much faster than typing out the full path.

	- `ls` Lists the files stored in the Working Directory

	- `clear` clears the Terminal Window

***More advanced commands***

	- `cp` Makes a copy of a file ("cp file.txt filecopy.txt" makes a copy of file.txt and names it filecopy.txt)

	- `mkdir` Makes a new directory (`mkdir NewDirectory` makes a new folder called `NewDirectory`)

	- `&&` Means "and also do this", helpful for inputing multiple commands in the same line

	- `man` opens the manual for Terminal commands ("man man" will open up the manual for the manual!)

	- `~` means home directory

	- `nano` is a text editor within Command-line Interface (isn't Atom great!)

**Additional resources for Terminal and CLI**
- [GNU Bash reference](http://www.gnu.org/software/bash/manual/bashref.html)
- [The Art of Command Line](https://github.com/jlevy/the-art-of-command-line)
- [101 Bash Commands and Tips for Beginners to Experts](https://dev.to/awwsmm/101-bash-commands-and-tips-for-beginners-to-experts-30je)

## C
- HelloWorld.c parts

## Scratch vs C
- Functions: actions/verbs
- Variables/Bindings: grasp values and store them
- Conditions: send you down different paths
- Boolean: true or false conditions
- Loops: cycles
- Syntax: organization of information
- Threads: multi-task

## Your Scratch Projects

## Compiling and running C code from Command-Line Interface

	- If not already installed, install Command Line Tools:

		xcode-select --install

	- Type the command `gcc` to signify that we're using the GNU compiler collection
	This compiler translates our human-readable source code (.c file) into machine-readable binary code (.o file).
	- After `gcc`, type `[nameofinputfile].c -o [nameofoutputfile]`. This should look like:

		gcc seeya.c -o seeya

	In this command line, we named the output binary file `seeya.o` compiled from the C file `seeya.c`.
	- To Run the executable output file, type `./[nameofoutputfile]`. This should look like:

 		./seeya

## Escape Sequences and Commenting in C

## Data Types and Conversion Types/Placeholders in C
- Integer int %d
- Character char %c
- Floating-point float %f
- String (sequence of characters - not to be confused with character arrays) string %s
- Boolean bool (no conversion type)

## Operators
- 		+ for addition
- 		- for subtraction
- 		* for multiplication
- 		/ for division
- 		% for remainder
