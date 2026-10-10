// from server: 79% by atomic.potato
struct S
{
    char pad[0x299];
    void vfunc(int);
    void f(int);
};

void S::f(int value)
{
    if (!pad[0x298])
    {
        vfunc(value);
        pad[0x298] = 1;
    }
}
