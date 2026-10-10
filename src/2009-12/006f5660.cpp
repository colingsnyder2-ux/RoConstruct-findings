// from server: 82% by atomic.potato
extern "C" void __cdecl func_006f4960(int);

struct S
{
};

void __cdecl f(void* a, int b, int c)
{
    if (c != 4)
    {
        func_006f4960(c);
        return;
    }

    *(int*)b = 0x00b45ef0;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
