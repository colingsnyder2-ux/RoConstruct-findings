// from server: 56% by atomic.potato
extern "C" int __stdcall GetSystemMetrics(int);

struct S_func_0085a790
{
    char pad0[60];
    int m_x;
    int f();
};

int S_func_0085a790::f()
{
    return m_x;
}

struct S
{
    char pad0[108];
    S_func_0085a790* m_x;
    void f();
};

void S::f()
{
    if (m_x->f() == -1)
        GetSystemMetrics(0);
}
