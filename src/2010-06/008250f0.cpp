// from server: 51% by atomic.potato
extern "C" int __cdecl f_007a7c4c();
extern "C" int __cdecl f_007ff1c0();

struct S_func_007ff1c0 {
    char pad0[60];
    int m_x;
    int f();
};

int S_func_007ff1c0::f()
{
    return m_x;
}

struct S {
    char pad0[56];
    int *m_data;
    int m_count;
    int f(int);
};

int S::f(int index)
{
    int limit;
    if (index < 0)
        return 0;
    limit = f_007ff1c0();
    if (index >= limit)
        return 0;
    if (index < m_count)
        return m_data[index];
    f_007a7c4c();
    return 0;
}
