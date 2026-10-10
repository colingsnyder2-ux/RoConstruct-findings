// from server: 66% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    struct V
    {
        int (**vtable)();
    };

    return ((V*)((char*)this - 0x78))->vtable[0x1ac / sizeof(int*)]();
}
