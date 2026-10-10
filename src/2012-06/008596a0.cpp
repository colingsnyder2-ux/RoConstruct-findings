// from server: 45% by atomic.potato
extern "C" char *allocate_char(void *, unsigned int, const void *);
extern "C" void deallocate_char(void *, char *, unsigned int);

struct S_func_008596a0 {
    char *m_unknown;
    char *m_data;
    void f(char *p);
};

void S_func_008596a0::f(char *p)
{
    if (m_data != p) {
        char *allocated = allocate_char(0, 0, p);
        char *old = m_data;
        m_data = p;
        if (m_unknown != allocated) {
            m_unknown = allocated;
            allocated = old;
        }
        if (allocated != 0)
            deallocate_char(0, allocated, 0);
    }
}
