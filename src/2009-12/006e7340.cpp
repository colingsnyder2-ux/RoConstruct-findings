// from server: 60% by atomic.potato
struct S
{
    void __cdecl f(int*, int);
};

void S::f(int* p, int a)
{
    if (a != 4)
        return;
    *p = 0xb43cc0;
    ((char*)p)[4] = 0;
    ((char*)p)[5] = 0;
}
