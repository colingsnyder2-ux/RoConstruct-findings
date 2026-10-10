// from server: 57% by atomic.potato
typedef unsigned char byte;

extern "C" void __cdecl continuation(int);

struct S
{
};

void __cdecl f(int, int, int value)
{
    if (value != 4)
    {
        continuation(value);
        return;
    }

    int *p = (int *)((char *)&value - 4);
    *p = 0x00b1e170;
    ((byte *)p)[4] = 0;
    ((byte *)p)[5] = 0;
}
