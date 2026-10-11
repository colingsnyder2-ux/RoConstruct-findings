// from server: 59% by atomic.potato
extern "C" void Function004c0290(void *);

struct EventDesc
{
    unsigned long value30;
    unsigned long value34;
    void *f(unsigned long *);
};

void *EventDesc::f(unsigned long *p)
{
    unsigned long *a;
    unsigned long *b;

    if (p)
        a = (unsigned long *)((char *)p - 0x1c);
    else
        a = 0;

    b = (unsigned long *)((char *)a + 0x138);
    b = (unsigned long *)((char *)b + value34);
    b = (unsigned long *)((char *)b + value30);
    Function004c0290((char *)b + (unsigned long)a + 0x138);
    return 0;
}
