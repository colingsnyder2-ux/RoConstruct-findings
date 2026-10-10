// from server: 26% by atomic.potato
struct S_func_00793d50 {
    char pad0[8];
    int m_x;
    int f();
};

int S_func_00793d50::f()
{
    return m_x;
}

struct S {
    char pad0[196];
    int m_value;
    void f();
};

void S::f()
{
    int value = ((S_func_00793d50 *)this)->f();
    if (m_value != value)
        f();
}
