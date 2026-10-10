// from server: 60% by atomic.potato
struct S_func_004dcee0
{
    void __cdecl f(int a, int b);
};

void S_func_004dcee0::f(int a, int b)
{
    if (b != 4)
        return;
    *(int*)a = 0x00c26968;
    ((unsigned char*)a)[4] = 0;
    ((unsigned char*)a)[5] = 0;
}
