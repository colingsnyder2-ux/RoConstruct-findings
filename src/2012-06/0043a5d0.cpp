// from server: 61% by atomic.potato
extern "C" void __cdecl target(int, int, int);

struct CSelectionPropGrid
{
};

void __cdecl f(int a, int b, int value)
{
    if (value != 4)
        target(a, b, value);

    int *p = (int *)b;
    *p = 0;
    ((char *)p)[4] = 0;
    ((char *)p)[5] = 0;
}
