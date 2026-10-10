// from server: 93% by atomic.potato
struct S
{
    void *pad;
    void *p;

    void f();
};

void S::f()
{
    void *p = this->p;
    if (p)
    {
        int (__thiscall *fn)(void *, int);
        fn = *(int (__thiscall **)(void *, int))(*(void **)p);
        fn(p, 1);
    }
}
