// from server: 55% by atomic.potato
struct VerbBinder
{
};

void __cdecl f(int a, int b, int c)
{
    if (c == 4)
    {
        *(int*)b = 0x00c15af8;
        *((char*)b + 4) = 0;
        *((char*)b + 5) = 0;
        return;
    }
    f(a, b, c);
}
