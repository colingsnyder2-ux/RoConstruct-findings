// from server: 93% by why2
struct S_func_006157d0 {
    char pad0[0x24];
    char m_str[0x1c];
    int m_x40;
    int m_x44;
    void f();
};

struct StringClear {
    void clear();
};

void S_func_006157d0::f()
{
    ((StringClear*)&m_str[0])->clear();
    m_x40 = 0;
    m_x44 = 0;
}
