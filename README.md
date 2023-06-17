# posixThreads
This code demonstrates the implementation of POSIX threads (pthreads) in C++ to create two parallel threads that work with an array. The program divides the array into two halves and assigns each half to a separate thread. Each thread independently processes its portion of the array, printing the elements and calculating the sum of the processed elements. By utilizing pthreads, the code harnesses the power of concurrent execution, allowing for efficient utilization of system resources and potentially improving the performance of array processing tasks.

<p align="center">
  <br>
  <img src="https://www.science.smith.edu/~nhowe/262/oldlabs/img/threads.png" alt="pic" width="500">
  <br>
</p>
<p align="center" >
  <a href="#Files">Files</a> •
  <a href="#Features">Features</a> •
  <a href="#how-to-use">How To Use</a> 
</p>

## Files

- src: the file that implements de solution.

## Features
The main features of the application include:
- POSIX Threads (pthreads): The code utilizes the pthread library to create and manage multiple threads concurrently, enabling parallel execution of tasks.
- Thread Creation and Management: The program creates two threads using `pthread_create()` and manages their execution using `pthread_join()`. This allows for concurrent execution and synchronization of the threads.
- Thread-Specific Data: The `sub()` and `sub1()` functions receive a `void*` pointer as an argument, allowing for passing thread-specific data if needed.
- Thread Synchronization: The use of `pthread_join()` ensures that the main program waits for the completion of both threads before exiting. This synchronization prevents premature termination of the program.
- Thread Communication: Although not explicitly demonstrated in this code, pthreads provide mechanisms for inter-thread communication and synchronization, such as mutexes, condition variables, and barriers. These mechanisms can be employed to coordinate shared resources or facilitate communication between threads if required in a more complex scenario.
- Array Processing: The code divides the original array into two halves, assigns each half to a thread, and performs operations on the respective portions independently. This demonstrates a simple parallel processing technique to distribute work among threads.
- Output and Error Handling: The code employs output functions like `printf()` to display messages and results. Additionally, error handling using `errno.h` allows for detecting and handling potential errors during the execution of system calls or library functions.


## How To Use
To clone and run this application, you'll need [Git](https://git-scm.com) and a [C++ compiler](https://www.fdi.ucm.es/profesor/luis/fp/devtools/mingw.html) installed on your computer. From your command line:

...
```bash
# Clone this repository
$ git clone https://github.com/bl33h/posixThreads

# Open the folder
$ cd src

# Run the app
$ g++ posixThreads.cpp -o posixThreads
$ ./posixThreads
```

Alternatively, you can run the code using Google Colab:
1. [Open Google Colab](https://colab.research.google.com) in your web browser.
2. Click on "File" in the top menu, then select "Open notebook".
3. In the "GitHub" tab, enter the repository URL: https://github.com/bl33h/posixThreads
4. Choose the desired notebook file and click "Open".
5. Follow the instructions within the Colab notebook to execute the code.

Note: Running the code in Google Colab requires an internet connection and a Google account. It provides a convenient online environment for executing code without the need for local setup or dependencies.
