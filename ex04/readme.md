# PROGRAM 4 : PROCESS CREATION AND MANAGEMENT USING LINUX SYSTEM CALLS

## AIM :
To study process creation, execution, and synchronization using Linux process system calls:
• fork()
• exec()
• wait()
• getpid()
• getppid()
and to understand parent-child process relationships.

## CONTEXT :
A process is a program that is currently being executed. Linux allows a process to create another process (called a child process) and manage its execution.

## LINUX SYSTEM CALLS USED :

| System Call | Function |
|---|---|
| `fork()` | Creates a new child process by duplicating the current (parent) process. |
| `getpid()` | Returns the Process ID (PID) of the currently executing process. |
| `getppid()` | Returns the Process ID (PID) of the parent process. |
| `wait()` | Suspends the parent process until the child process terminates. |
| `sleep()` | Suspends the execution of the current process for the specified number of seconds. *(Library function that internally uses kernel timing services; often included in OS labs.)* |

## SOURCE CODE (Process Creation) :
**File:** [forkDemo.c](https://github.com/narmadhau2527/112514012osLab/blob/bd352f7f82d9aa5a021cac0ddfcf7cabd0f9904f/ex04/processCreation/forkDemo.c)

## COMPILATION :

```bash
gcc forkDemo.c -o forkDemo
```

## EXECUTION :

```bash
./forkDemo
```
## OUTPUT :
![Output for Experiment 4_1](https://github.com/narmadhau2527/112514012osLab/blob/b52c9d6ca6331bc6c694be7d8929fd62099c75a7/ex04/processCreation/output4i.png)

## SOURCE CODE (Process Management) :
**File:** [waitDemo.c](https://github.com/narmadhau2527/112514012osLab/blob/2a9d2bf959ad4e8c334419a319c64cd6e8a99ad4/ex04/process%20Management/waitDemo.c)
## COMPILATION :

```bash
gcc waitDemo.c -o waitDemo
```

## EXECUTION :

```bash
./waitDemo
```

## OUTPUT :
![Output for Experiment 4_2](https://github.com/narmadhau2527/112514012osLab/blob/dddb83996ebf2748e3a96f5bfa40f94eca2bf8bd/ex04/process%20Management/output4_ii.png)
