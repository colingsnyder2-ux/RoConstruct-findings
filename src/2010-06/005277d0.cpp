// from server: 60% by atomic.potato
struct S_func_005277d0 {
    void __cdecl f(void* a, int b);
};

void __cdecl S_func_005277d0::f(void* a, int b)
{
    if (b == 4) {
        *(int*)a = 0x00b990f0;
        ((char*)a)[4] = 0;
        ((char*)a)[5] = 0;
    }
}
