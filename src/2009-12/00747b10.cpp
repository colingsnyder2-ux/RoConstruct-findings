// from server: 52% by atomic.potato
struct S
{
};

void __cdecl f(int a, void* b)
{
    if (a != 4)
    {
        f(a, b);
        return;
    }

    *(unsigned long*)b = 0x00b568e0;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
