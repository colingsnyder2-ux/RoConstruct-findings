// from server: 59% by atomic.potato
struct S
{
};

void __cdecl f(int, int value, int *output)
{
    if (output[0] == 4)
    {
        *output = 0x00c15f10;
        ((char *)output)[4] = 0;
        ((char *)output)[5] = 0;
        return;
    }
}
