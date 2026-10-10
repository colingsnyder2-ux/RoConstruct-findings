// from server: 84% by atomic.potato
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

    V* p = *(V**)((char*)this + 0xd8);
    return p->vtable[2]();
}
