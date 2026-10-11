// from server: 72% by atomic.potato
struct Inner {
    char pad[8];
    int m_count;
    void Add(int, int);
    void Remove(int, int);
};

struct S {
    char pad0[0x20];
    Inner m_inner;
    int m_flag;
    void f(int, int);
};

void S::f(int a, int b)
{
    if (m_flag == 0) {
        m_inner.Add(1, a);
        m_inner.Remove(m_inner.m_count, 0);
        int v = b;
        int mask = (v < 0) ? -1 : 0;
        m_inner.Add(1, v & mask);
        m_inner.m_count = 0;
    }
}
