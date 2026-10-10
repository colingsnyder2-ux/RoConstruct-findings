// from server: 60% by atomic.potato
struct S_func_006582e0 {
    void __cdecl f(void* a1, int a2);
};

void S_func_006582e0::f(void* a1, int a2)
{
    if (a2 == 4) {
        *(int*)a1 = 0x00b2f1b0;
        ((unsigned char*)a1)[4] = 0;
        ((unsigned char*)a1)[5] = 0;
    }
}
