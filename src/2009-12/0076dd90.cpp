// from server: 60% by atomic.potato
struct S
{
    void __cdecl f(void*, int);
};

void S::f(void* p, int b)
{
    if (b != 4)
        return;

    *(int*)p = 0xb606d0;
    *((char*)p + 4) = 0;
    *((char*)p + 5) = 0;
}
