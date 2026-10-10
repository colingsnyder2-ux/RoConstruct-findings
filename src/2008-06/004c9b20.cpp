// from server: 80% by tester
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
        void* p = 0;
        *(void**)p = *(void**)b;
        *(void**)b = p;
    }
}
