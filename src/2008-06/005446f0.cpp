// from server: 20% by atomic.potato
unsigned int f()
{
    unsigned int a = 0x3fffffff;
    unsigned int b;
    if (a > 0)
        b = a;
    else
        b = 1;
    return b;
}
