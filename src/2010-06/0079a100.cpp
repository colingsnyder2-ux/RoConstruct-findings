// from server: 72% by atomic.potato
struct S_func_0079a100
{
    void __cdecl f(void* a, int b);
};

void S_func_0079a100::f(void* a, int b)
{
    if (b != 4)
    {
        *(int*)a = b;
    }
    else
    {
        *(int*)a = 0xBE5918;
        *((char*)a + 4) = 0;
        *((char*)a + 5) = 0;
    }
}
