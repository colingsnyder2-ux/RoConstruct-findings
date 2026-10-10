// from server: 59% by atomic.potato
extern "C" void __cdecl sym(int);

struct S
{
    void f();
};

void S::f()
{
    int value = *(int*)((char*)0 + 12);
    if (value != 4)
    {
        sym(value);
        return;
    }

    int* p = *(int**)((char*)0 + 8);
    *p = 0xb183a8;
    *((char*)p + 4) = 0;
    *((char*)p + 5) = 0;
}
