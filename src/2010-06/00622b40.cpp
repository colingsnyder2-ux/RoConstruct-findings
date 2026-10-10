// from server: 60% by atomic.potato
struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        (void)c;
        return;
    }

    *(int*)b = 0x00bb0dd0;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
