// from server: 80% by atomic.potato
extern "C" void Target(int);

struct S
{
};

void __cdecl f(int value, int *p)
{
    if (value != 4)
    {
        Target(value);
        return;
    }

    *p = 0xb62888;
    ((char *)p)[4] = 0;
    ((char *)p)[5] = 0;
}
