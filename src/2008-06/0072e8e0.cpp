// from server: 29% by atomic.potato
struct S_func_007a0770
{
    char pad0[60];
    int m_x;
    int f();
};

int S_func_007a0770::f()
{
    return m_x;
}

struct S
{
    char pad0[56];
    int *m_data;
    int m_size;
    int f(int);
};

int S::f(int index)
{
    if (index < 0)
        return 0;

    int count = ((S_func_007a0770 *)this)->f();

    if (index >= count)
        return 0;

    if (index >= m_size)
        return 0;

    return m_data[index];
}
