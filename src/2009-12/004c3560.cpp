// from server: 82% by atomic.potato
extern "C" void __cdecl target(int);

struct S
{
};

void __cdecl f(int a, int b, int c)
{
    if (c != 4)
    {
        target(c);
        return;
    }

    *(int*)b = 0xB10AB0;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
