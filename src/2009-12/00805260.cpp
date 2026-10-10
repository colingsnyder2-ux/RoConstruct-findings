// from server: 56% by atomic.potato
struct I_func_00805250
{
    char pad[44];
    int m_x;
};

struct S_func_00805250
{
    char pad[252];
    I_func_00805250* m_p;
    int f();
};

int S_func_00805250::f()
{
    return m_p->m_x;
}

struct CXTPCommandBar
{
    char pad[252];
    struct Entry
    {
        char data[40];
        int value;
    };
    Entry* m_p;
    int f(int);
};

int CXTPCommandBar::f(int index)
{
    if (index < 0)
        return 0;
    if (index >= reinterpret_cast<S_func_00805250*>(this)->f())
        return 0;
    if (index >= m_p->value)
        return 0;
    return *reinterpret_cast<int*>(reinterpret_cast<char*>(m_p) + 40 + index * 4);
}
