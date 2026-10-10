// from server: 61% by atomic.potato
struct S_func_006cb020
{
    char pad0[32];
    int m_x;
    int f();
};

int S_func_006cb020::f()
{
    return m_x;
}

extern "C" void f_0055a8f0(void *, int);

void __stdcall f_005e5500(void *, S_func_006cb020 *p)
{
    int x = p->f();
    if (x)
        f_0055a8f0((char *)x - 320, 0);
}
