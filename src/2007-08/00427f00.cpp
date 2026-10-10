// from server: 94% by colin
struct COleException {
    void* m_pfn;
    int m_n;
    int m_dw;
    COleException* dtor(char flags);
};

COleException* COleException::dtor(char flags) {
    if (m_pfn == 0) {
        int (*fn)(int, int) = (int (*)(int, int))m_pfn;
        m_n = fn(m_n, 1);
    }
    m_pfn = 0;
    m_dw = 0;
    if (flags & 1) {
        extern void __cdecl operator_delete(void*);
        operator_delete(this);
    }
    return this;
}
