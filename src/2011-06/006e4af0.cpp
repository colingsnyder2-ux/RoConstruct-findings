// from server: 61% by atomic.potato
struct S
{
    void f();
};

extern "C" void __stdcall func_00802250(void *, int);

void S::f()
{
    int *p = *(int **)this;
    p[9] = 0;
    int *q = p + 5;
    int v = *q;
    q[2] = v;
    q[3] = v;
    func_00802250(p, 1);
}
