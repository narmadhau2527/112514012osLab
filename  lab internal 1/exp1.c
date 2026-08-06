#include<stdlib.h>
int main()
{
    system("grep hello a.txt"); 
    system("sort a.txt");
    system("uniq a.txt"); 
    system("wc a.txt");
    return 0;
}