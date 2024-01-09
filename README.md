# pomodorotimer
A basic Pomodoro timer that can be run from the command line written in C++

**Reason for Creating**

I decided to create a Pomodoro timer to run in the terminal as I was inspired by my incredibly smart friend [Seb Strug](https://www.sebstrug.com), who created a command line Pomodoro timer in Rust[command line Pomodoro timer in Rust](https://www.sebstrug.com/code/pomodoro/) use Ubuntu and use the command line and terminals frequently. I also use C++ and C for writing firmware and wanted to write a program in C++ that is not aimed at embedded development.

**What is a Pomodoro Timer?**

A Pomodoro timer is a time management tool that is used to break down work into timed sessions, typically 25 minutes in length, separated by short minute breaks. These intervals are known as "pomodoros," after the Italian word for 'tomato,' which is a nod to the tomato-shaped kitchen timer that the method's inventor, Francesco Cirillo, used as a university student.

**How to Compile**

Ubuntu typically comes with the g++ compiler pre-installed, or it can be easily installed from the official package repositories using the package manager with a command like:

`sudo apt install g++`

This allows you to compile C++ programs directly using the g++ command.After cloning the repository, navigate to the directory in your terminal and run the following command:

`g++ -o pomodorotimer pomodorotimer.cpp`

To Use with Mac and Windows

If you are not using Ubuntu, installing the g++ compiler can be carried out using the following steps.

For Mac:

macOS does not come with g++ pre-installed. Instead, users need to install the Xcode Command Line Tools, which include the g++ compiler. This can be installed using the `xcode-select --install` command. Alternatively, users can install gcc (which includes g++) using the Homebrew package manager with `brew install gcc`.

For Windows:

Windows does not include a native C++ compiler. Users need to install a toolchain like MinGW-w64 or TDM-GCC to get g++. They can also use Microsoft's Visual Studio, which includes the MSVC compiler, or enable the Windows Subsystem for Linux (WSL) to use Linux's g++ on Windows.

**How to Run**

After compiling the program, run it by entering the following command:

`./pomodorotimer`
