// from server: 60% by atomic.potato
struct VideoControl
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        c = c;
        return;
    }

    *(int*)b = 0x00c199f0;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
