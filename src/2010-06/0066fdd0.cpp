// from server: 91% by atomic.potato
extern "C" void __cdecl Function0066fc20(void *, void *, int, int);

struct FilteredSelection
{
    void __cdecl f(void *, int, int);
};

void __cdecl FilteredSelection::f(void *a, int b, int c)
{
    if (c != 4)
    {
        Function0066fc20(this, a, b, c);
        return;
    }

    *(int *)b = 0x00bbf8b8;
    *((char *)b + 4) = 0;
    *((char *)b + 5) = 0;
}
