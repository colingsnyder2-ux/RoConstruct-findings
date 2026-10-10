// from server: 76% by atomic.potato
struct S
{
    void f(void*, void*);
};

void S::f(void* a, void* b)
{
    if (a)
    {
        *(void**)((char*)a + 0x70) = *(void**)b;
        *(void**)b = (char*)a + 0x70;
    }
    else
    {
        *(void**)0 = *(void**)b;
        *(void**)b = 0;
    }
}
