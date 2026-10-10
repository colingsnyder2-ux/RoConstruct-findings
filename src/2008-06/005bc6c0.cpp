// from server: 45% by atomic.potato
struct S
{
    int f();
};

extern "C" void __stdcall sub_69fc4e(S **, S *);

struct T
{
    void g();
};

void T::g()
{
}

int S::f()
{
    S *p = this;
    sub_69fc4e(&p, this);
    if (p)
        ((T *)p)->g();
    return 0;
}
