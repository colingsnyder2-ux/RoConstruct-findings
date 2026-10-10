// from server: 58% by atomic.potato
struct FilteredSelection
{
};

void __cdecl f(int a, int b, int c, int d)
{
    if (c != 4)
    {
        f(a, b, c, d);
        return;
    }

    *(int *)b = 0xbbfa58;
    *((char *)b + 4) = 0;
    *((char *)b + 5) = 0;
}
