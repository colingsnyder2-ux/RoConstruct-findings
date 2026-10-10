// from server: 28% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int)
{
    struct V
    {
        int (**p)();
    };

    V* v = (V*)this;
    if (!(*v->p)())
        return 0;
    return 0;
}
