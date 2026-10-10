// from server: 76% by atomic.potato
struct S
{
    void f();
};

void S::f()
{
    struct V
    {
        void (__thiscall *g)(V *, int);
    };

    V *v = *(V **)this;
    (*(void (__thiscall **)(V *, int))((char *)*(V **)this + 0x1b0))(v, 1);
}
