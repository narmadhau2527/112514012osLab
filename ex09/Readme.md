# PROGRAM 9 : MEMORY MANAGEMENT - PAGE REPLACEMENT ALGORITHMS

## AIM :
To simulate page replacement algorithms (FIFO, LRU, and Optimal) (Memory management)

## CONTEXT :
FIFO (First-In, First-Out) Page Replacement Algorithm, which is one of the page replacement techniques used by an operating system for virtual memory management.
When the CPU requests a page that is not currently in the available memory frames, a page fault occurs. If all memory frames are occupied, the operating system must decide which page to remove to make room for the new page. The FIFO algorithm replaces the page that has been in memory the longest (the oldest page).

## SOURCE CODE :
**File :** [exp9.c](https://github.com/narmadhau2527/112514012osLab/blob/cbff599827d74750ab2ce016477203de12e796f4/ex09/exp9.c)

## COMPILATION :

```bash
gcc exp9.c -o exp9
```

## EXECUTION :

```bash
./exp9
```

## OUTPUT :
![Output for Experiment 9](https://github.com/narmadhau2527/112514012osLab/blob/11572b28d1ad879e1b6ba9a4245f4b8685834dc5/ex09/output9.png)
