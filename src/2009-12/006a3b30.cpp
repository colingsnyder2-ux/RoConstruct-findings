// from server: 82% by atomic.potato
extern "C" void __cdecl func_69ffe0(int);

struct S
{
};

void __cdecl f(int a, int* p)
{
    if (a != 4)
    {
        func_69ffe0(a);
        return;
    }

    *p = 0x00b39790;
    *((char*)p + 4) = 0;
    *((char*)p + 5) = 0;
}
