// from server: 60% by atomic.potato
struct S_func_007e66d0 {
    static void f(int, void*, int);
};

void S_func_007e66d0::f(int, void* p, int v)
{
    if (v != 4)
        return;
    *(unsigned long*)p = 0x00b64c90;
    ((unsigned char*)p)[4] = 0;
    ((unsigned char*)p)[5] = 0;
}
