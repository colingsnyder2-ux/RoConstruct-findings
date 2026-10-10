// from server: 82% by atomic.potato
extern "C" void __cdecl Function513050(int);

struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        Function513050(c);
        return;
    }

    *(unsigned long*)b = 0x00B18690UL;
    *(unsigned char*)(b + 4) = 0;
    *(unsigned char*)(b + 5) = 0;
}
