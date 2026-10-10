// from server: 50% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    struct V
    {
        int x;
        int (*p)();
    };

    V* v = *(V**)((char*)this + 0x130);
    return v->p();
}
