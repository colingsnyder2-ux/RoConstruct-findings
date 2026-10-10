// from server: 61% by atomic.potato
extern "C" void __cdecl target();

struct S
{
    static void f(int, void*, int);
};

void S::f(int a, void* p, int b)
{
    if (b != 4)
    {
        target();
        return;
    }

    *(int*)p = 0xb58bd0;
    ((char*)p)[4] = 0;
    ((char*)p)[5] = 0;
}
