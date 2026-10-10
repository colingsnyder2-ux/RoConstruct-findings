// from server: 57% by atomic.potato
struct S_func_007b8b50 {
    char pad0[44];
    int m_x;
    int f();
};

int S_func_007b8b50::f()
{
    return m_x;
}

struct CInstanceRecord {
    char pad0[36];
    int* m_items;
    int m_count;
    int f(int);
};

int CInstanceRecord::f(int value)
{
    if (this) {
        S_func_007b8b50* p = (S_func_007b8b50*)0;
        int index = p->f();
        if (index >= 0 && index < m_count)
            return m_items[index];
    }
    return 0;
}
