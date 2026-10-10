// from server: 60% by atomic.potato
struct S
{
};

void __cdecl f(int a, int b, int value)
{
    if (value != 4)
        return;

    int* p = (int*)b;
    *p = 0xb9f150;
    ((char*)p)[4] = 0;
    ((char*)p)[5] = 0;
}
