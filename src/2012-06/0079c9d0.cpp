// from server: 88% by atomic.potato
struct S
{
    unsigned long a30;
    unsigned long a34;
    void f(void *);
};

extern "C" void Call7851a0(void *);

void S::f(void *p)
{
    unsigned long *v = (unsigned long *)p;
    if (v)
        v = (unsigned long *)((char *)v - 0x1c);
    else
        v = 0;

    unsigned long x = *(unsigned long *)((char *)v + 0x138);
    x = *(unsigned long *)((char *)x + a34);
    x += a30;
    Call7851a0((char *)x + (unsigned long)v + 0x138);
}
