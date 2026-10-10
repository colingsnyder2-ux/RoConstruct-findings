// from server: 37% by atomic.potato
typedef unsigned char byte;

extern byte g_00e31abe;

struct S
{
    unsigned char f();
};

unsigned char S::f()
{
    if (g_00e31abe)
        return 1;
    return 0;
}
