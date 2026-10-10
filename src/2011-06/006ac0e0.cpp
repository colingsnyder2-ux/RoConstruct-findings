// from server: 57% by atomic.potato
struct S
{
};

void __cdecl f(unsigned int value, unsigned char* target)
{
    if (value != 4)
    {
        return;
    }

    *(unsigned int*)target = 0x00c68420;
    target[4] = 0;
    target[5] = 0;
}
