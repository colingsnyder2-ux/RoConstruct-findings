// from server: 78% by atomic.potato
struct S
{
    void f();
};

extern "C" void __cdecl func_0062f740(
    S*, void*, void*, unsigned int, unsigned int);

extern "C" void __cdecl func_007f4929(const void*);

void S::f()
{
    func_0062f740(
        (S*)0x00b8494c,
        (void*)0x009cbb44,
        (void*)0x009cbb58,
        0xa5,
        0x0f);
    func_007f4929((const void*)0x00981620);
}
