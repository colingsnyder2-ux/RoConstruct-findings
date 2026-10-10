// from server: 64% by atomic.potato
struct S
{
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4)
    {
        *(int*)b = b;
        return;
    }

    *(int*)a = 0x00b38918;
    *((char*)a + 4) = 0;
    *((char*)a + 5) = 0;
}
