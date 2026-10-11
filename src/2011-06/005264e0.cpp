// from server: 97% by atomic.potato
extern "C" void __cdecl sub_0080b1d8(void *, unsigned int, unsigned int, const void *);
extern "C" void __cdecl sub_0080a304(void *);

struct S_func_005264e0 {
    void *m_data;
    unsigned int m_unused;
    unsigned int m_count;
    void f();
};

void S_func_005264e0::f()
{
    if (m_count > 0 && m_data != 0) {
        void *p = (char *)m_data - 4;
        sub_0080b1d8(m_data, 8, *((unsigned int *)p), (const void *)0x0050f400);
        sub_0080a304(p);
    }
}
