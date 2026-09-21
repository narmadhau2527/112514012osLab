# PROGRAM 6 : INTER-PROCESS COMMUNICATION USING PIPES AND FIFO

## AIM :
To implement inter-process communication between processes using:
1.​ Unnamed pipes (pipe())
2.​ Named pipes / FIFO (mkfifo()) 
and exchange data between related and unrelated processes.

## CONTEXT :
This program demonstrates Inter-Process Communication (IPC) using an unnamed pipe in the Linux operating system. 
We explore,  Pipe: It is a communication mechanism that allows two related processes (a parent and its child) to exchange data.

## LINUX SYSTEM CALLS USED

| System Call | Function |
|---|---|
| `pipe()` | Creates an unnamed pipe for communication between related processes. |
| `fork()` | Creates a child process from the parent process. |
| `read()` | Reads data from the pipe (or a file descriptor). |
| `write()` | Writes data to the pipe (or a file descriptor). |
| `close()` | Closes the read or write end of the pipe and releases resources. |

## SOURCE CODE :
**File :** [exp6.c](https://github.com/narmadhau2527/112514012osLab/blob/c54cea2b58c01def49cfb72dda4f23877aea9b5d/ex06/exp6.c)

## COMPILATION :

```bash
gcc exp6.c -o exp6
```

## EXECUTION :

```bash
./exp6
```

## OUTPUT :
![Output for Experiment 6](https://github.com/narmadhau2527/112514012osLab/blob/967e988152ce8dac5ac430d0dfcce73c4fe5710b/ex06/output6.png)
