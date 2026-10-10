// from server: 61% by atomic.potato
extern "C" void __cdecl target(void *, unsigned int);

struct S
{
    void f();
};

void S::f()
{
    unsigned int value;
    void *object;

    if (value != 4)
        target(object, value);
    else
    {
        *(unsigned int *)object = 0x00b150e0;
        *((unsigned char *)object + 4) = 0;
        *((unsigned char *)object + 5) = 0;
    }
}
