// from server: 57% by atomic.potato
struct S
{
    void __cdecl f(void*, int);
};

void S::f(void* p, int value)
{
    if (value != 4)
        return f(p, 4);

    *(int*)p = 0xb54f20;
    *((char*)p + 4) = 0;
    *((char*)p + 5) = 0;
}
