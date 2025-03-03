<a href="https://github.com/AdaoG0n" style="pointer-events: none;"> <img src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/Followbutton.png" width="130" align="right"/></a>

# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-0%20%2F%20100%20%E2%98%85-success?color=%2312bab9&style=flat-square"/> <img src="https://img.shields.io/github/last-commit/AdaoG0n/minitalk?style=flat-square&color=%2312bab9" /> </a>

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/Minitalk.gif)


![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

# Minitalk

**Minitalk** is a project from **42 school** that explores fundamental concepts of interprocess communication (IPC) in Unix-based operating systems. </br>
The goal is to implement a messaging system between two programs using signals (`SIGUSR1` and `SIGUSR2`). </br>
This project provides a hands-on introduction to signal handling and process communication in a Linux environment. </br>

## Project Objective

Develop two programs:

1. **Server**:
   - Waits for messages sent by the client.
   - Displays received messages in the terminal.

2. **Client**:
   - Sends a string to the server, character by character, encoding data using signals (`SIGUSR1` and `SIGUSR2`).

## Key Concepts

- **Signals**:
  - Signals are a form of asynchronous communication between processes in Unix. Examples: `SIGUSR1` and `SIGUSR2`.
- **Interprocess Communication (IPC)**:
  - The exchange of information between two separate processes.
- **Signal Handling**:
  - Using functions like `signal()` or `sigaction()` to handle signals.

## Features

- Sending and receiving messages between client and server.
- Accurate signal decoding to reconstruct the original message.
- Error handling for issues such as lost signals or interruptions.

## Technologies Used

- **Language**: C
- **Operating System**: Unix/Linux
- **Advanced Concepts**: Signal handling, IPC.

## How to Use

1. Compile the programs:
   ```
   make
   ```

2. Run the server to get its PID:
    ```
   ./server
    ```
4. Run the client to send a message:
    ```
   ./client <server_PID> "Your message here"
    ```
## Project Requirements

- Only functions authorized by **42** can be used.
- The client must be able to send messages of any length.
- The server must display the complete message, even if transmission is slow.


![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### Testers
| minitalk                                                         |
| :--------------------------------------------------------------- |
| [francinette](https://github.com/xicodomingues/francinette)      |
| [minitalk-Tester](https://github.com/ThibaudM13/minitalk-Tester) |
| [Lipsum generator: Lorem Ipsum](https://www.lipsum.com)          |
| [Get Emoji](https://getemoji.com)                                | 
| [EmojiDB](https://emojidb.org/terminal-emojis)                   |

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

### Useful links

| Resource                                                                                                                                           |
| :------------------------------------------------------------------------------------------------------------------------------------------------- |
| [Bitwise Operators in C/C++](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp)                                                             |
| [How to use signal handlers in C language?](https://linuxhint.com/signal_handlers_c_programming_language)                                          |
| [include/linux/signal.h - Linux source code (v6.6.2)](https://elixir.bootlin.com/linux/latest/source/include/linux/signal.h)                       |
| [Beej's Guide to C Programming - 29 Signal Handling](https://beej.us/guide/bgc/html/split/signal-handling.html)                                    |
| [Beej's Guide to C Programming - Bit-Fields](https://beej.us/guide/bgc/html/split/structs-ii-more-fun-with-structs.html#bit-fields)                |
| [Beej's Guide to C Programming - What is Unicode?](https://beej.us/guide/bgc/html/split/unicode-wide-characters-and-all-that.html#what-is-unicode) |
| [42-Bitwise_Operators](https://github.com/agavrel/42-Bitwise_Operators)                                                                            |
| [Sending and Handling Signals in C (kill, signal, sigaction)](https://www.youtube.com/watch?v=83M5-NPDeWs)                                         |
| [Short Introduction to Signals in C](https://youtu.be/5We_HtLlAbs)                                                                                 |
| [Handling Signals](https://www.youtube.com/watch?v=jF-1eFhyz1U)                                                                                    |
| [BIT_a_BIT viewer](https://github.com/AdaoG0n/Training_programs_C/tree/main/bit%20a%20bit)                                                         |


![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/animated%20gifs/madeby.gif)
