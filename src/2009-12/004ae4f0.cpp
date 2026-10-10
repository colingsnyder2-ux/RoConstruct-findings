// from server: 78% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    struct V
    {
        void* p[52];
    };

    V* v = *(V**)((char*)this + 12);
    if (v != 0)
        ((void (__thiscall *)(V*, int))v->p[50])(v, 1);
}
