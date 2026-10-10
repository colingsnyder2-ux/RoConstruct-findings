// from server: 82% by atomic.potato
extern "C" void __cdecl Function682980(int);

struct S
{
};

void __cdecl f(void* a, int b, int c)
{
    if (c != 4)
    {
        Function682980(c);
        return;
    }

    *(unsigned long*)b = 0x00b361c0;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
