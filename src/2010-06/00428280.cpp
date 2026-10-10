// from server: 87% by atomic.potato
struct S
{
    int (**vtable)();
    char padding[0x134];
    int value;

    void f(int);
};

void S::f(int argument)
{
    if (!vtable[0x66]())
        value = argument;
}
