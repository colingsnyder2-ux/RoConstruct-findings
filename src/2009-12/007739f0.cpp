// from server: 82% by atomic.potato
struct S_func_007739f0 {
    char pad0[16];
    void* m_a;
    void* m_b;
    void* f(void* p);
};

void* S_func_007739f0::f(void* p)
{
    void* v = p ? (char*)p - 8 : 0;
    if (v == m_a)
        v = m_b;
    return v ? (char*)v + 8 : 0;
}
