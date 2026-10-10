// from server: 69% by atomic.potato
struct S
{
    int f();
    int pad[60];
};

int S::f()
{
    struct V
    {
        int (*fn)();
    };

    V* v = (V*)pad[59];
    return v->fn();
}
