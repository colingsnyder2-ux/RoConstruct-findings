// from server: 55% by atomic.potato
struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
        f(a, b, c);
    else
    {
        *(int*)b = 0x00b20740;
        *((char*)b + 4) = 0;
        *((char*)b + 5) = 0;
    }
}
