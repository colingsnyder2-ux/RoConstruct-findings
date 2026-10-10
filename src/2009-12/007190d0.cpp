// from server: 60% by atomic.potato
struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
        return;
    *(int*)a = 0x00b4d2d8;
    ((char*)a)[4] = 0;
    ((char*)a)[5] = 0;
}
