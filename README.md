# KMA_OOP_Preprocessing
#### Project created to show how does C++ preprocessor works

**Preprocessing** is a part of C/C++ compiling process. Before the source code
is being actually compiled (to object file), preprocessor makes his job, including
and replacing parts of code according to it's "#"-commands. On this stage, "#include"s
are being replaced with code simply copied from files they specify, "#define"s
"names" are being replaced with their "values", ect.

So, for file "main.cpp" it'll look like:

>main.cpp _Complex.h minilibmath.h_
>
>**↓** (preprocessor)
>
>main_preprocessed
>
>**↓** (compiler)
>
>main.o

"main_preprocessed" in not a file, rather a data passed from preprocessor
to compiler as they are parts of the same programm. But, there is a way to
see this data using **gcc** command flag **-E** (We are talking about command
line interface, that can be reached using UNIX Shell (Linux & MacOS Terminal))
or Windows Command Line).

In fact, in most C/C++ compiler implementation, preprocessor is a separate program
invoked by compiler, called **cpp**.

There is also one more, better known stage: assemble code. So, telling the truth,
the real process is this:

>main.cpp _Complex.h minilibmath.h_
>
>**↓** (preprocessor)
>
>main.ii _(a proper name for C++ code which shouldn't be preprocessed)_
>
>**↓** (compiler)
>
>main.s
>
>**↓** (assebler)
>
>main.o

There are special flags for **g++** (gcc command to compile C++ source code) to stop
on any of this stage (examples works on our test project):

>g++ -E src/main.cpp -o src/main.ii
>
>g++ -S src/main.cpp -o src/main.s
>
>g++ -c src/main.cpp -o src/main.o

_(argument after flag **-o** specifies name(and directory) for file, in which
the result of execution will be stored)_

And the last. Though gcc is pre-installed in most Linux/MacOS OS versions,
MS Windows sometimes doesn't have it. Checkout
[MinGW Project Website](http://www.mingw.org/) to install it.