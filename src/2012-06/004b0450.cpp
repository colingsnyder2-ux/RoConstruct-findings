// from server: 55% by atomic.potato
struct VideoControl
{
};

void __cdecl f(int a, int b, int c)
{
    if (c == 4)
    {
        *(int*)b = 0x00d72498;
        *((unsigned char*)b + 4) = 0;
        *((unsigned char*)b + 5) = 0;
        return;
    }
    f(a, b, c);
}
