// from server: 31% by atomic.potato
extern "C" void* __cdecl func_00424c60(unsigned int);
extern "C" void __cdecl func_008415c0(void*, double);

struct S
{
    int f();
};

int S::f()
{
    void* p = func_00424c60(0x88);
    if (p)
        func_008415c0(p, 0.0);
    return 0;
}
