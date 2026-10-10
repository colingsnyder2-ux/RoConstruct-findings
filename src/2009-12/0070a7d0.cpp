// from server: 57% by atomic.potato
struct S
{
};

void __cdecl f(unsigned int value, unsigned char* p)
{
    if (value != 4)
    {
        return;
    }

    *(unsigned int*)p = 0x00b4a018;
    p[4] = 0;
    p[5] = 0;
}
