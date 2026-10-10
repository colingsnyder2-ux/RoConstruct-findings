// from server: 49% by atomic.potato
extern "C" void __cdecl target(int);

struct S
{
};

void __cdecl f(void *, int, int value)
{
    if (value == 4)
    {
        char *p = (char *)0;
        *(int *)p = 0x00c8a3b8;
        p[4] = 0;
        p[5] = 0;
        return;
    }

    target(value);
}
